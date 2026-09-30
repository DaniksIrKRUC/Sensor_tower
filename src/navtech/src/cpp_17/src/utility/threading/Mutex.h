#pragma once

#include <pthread.h>
#include <cstdint>
#include <memory>

namespace Navtech {

    class Condition;

    class Mutex {
    public:
        Mutex();
        virtual ~Mutex();

        Mutex(Mutex&&)                  = delete;
        Mutex& operator=(Mutex&&)       = delete;
        Mutex(const Mutex&)             = delete;
        Mutex& operator= (const Mutex&) = delete;

        bool lock();
        bool unlock();
        bool try_lock();
        
    private:
        friend class Condition;
        pthread_mutex_t mutex;

    };


    // Scoped_lock provides a simple class to manage the lifetime of a mutex.
    // It is a basic implementation of the 'Scope-locked idiom'.
    // This class should be used within local scope and once
    // out of scope it will autoamtically release the mutex lock
    // enabling us to support protected code with multiple exit paths.
    //
    class Scoped_lock {
    public:
        Scoped_lock(Mutex& mtx) : mutex { &mtx } 
        {
            mutex->lock();
        }
        
        ~Scoped_lock() 
        {
            mutex->unlock();
        }

        // Required for CRITICAL_SECTION macro
        //
        operator bool()
        {
            return true;
        }

    private:
        Mutex* mutex;
    };

} // namespace Navtech

// The Scoped_lock will keep its associated Mutex locked until
// the Scoped_lock is destroyed.  This may keep the Mutex locked
// longer than is desired.
// This convenience macro allows us to introduce a new block
// to constrain the scope of the Scoped_lock.
// The macro allows a block ( { ... } ) to be placed around code
// that must be in a critical section.  For example:
//
// CRITICAL_SECTION(my_mutex) 
// {
//     This code is performed with
//     the my_mutex locked...
//     
// }   // unlock the mutex
//
// The END_CRITICAL_SECTION macro doesn't do anything, but may be
// useful for documentation if the critical section block is large
//
#define CRITICAL_SECTION(mutex) if (Navtech::Scoped_lock _lock_ = mutex)
#define END_CRITICAL_SECTION(mutex)
