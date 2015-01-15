#ifndef NLTIMERSCOPED_H
#define NLTIMERSCOPED_H

#include <sys/time.h>
#include <string>
#include <iostream>



class NLTimerScoped {
private:
    double start;
    std::string name;

public:
    NLTimerScoped( const std::string & name ) : name( name ) {
        start = now();
    }


    ~NLTimerScoped() {
        double end = now();
        double duration = end - start;

        std::cout << name << " duration: " << duration << "ms" << std::endl;
    }


private:

    double now() const {
        struct timeval tm;
        gettimeofday( &tm, NULL );
        return (double)tm.tv_sec * 1000.0 + (double)tm.tv_usec / 1000.0;
    }

};

#endif
