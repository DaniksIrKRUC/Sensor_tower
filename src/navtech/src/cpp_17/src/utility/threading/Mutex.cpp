#include "Mutex.h"

#include <cerrno>

namespace Navtech {

    Navtech::Mutex::Mutex()
    {
        pthread_mutex_init(&mutex, NULL);
    }


    Navtech::Mutex::~Mutex()
    {
        if (pthread_mutex_destroy(&mutex) == EBUSY) {
            unlock();
            pthread_mutex_destroy(&mutex);
        }
    }


    bool Navtech::Mutex::lock()
    {
        if (pthread_mutex_lock(&mutex) == 0) return true;
        else                                  return false;
    }


    bool Navtech::Mutex::unlock()
    {
        if (pthread_mutex_unlock(&mutex) == 0) return true;
        else                                    return false;
    }


    bool Navtech::Mutex::try_lock()
    {
        if (pthread_mutex_trylock(&mutex) == 0) return true;
        else                                     return false;
    }

} // namespace Navtech
