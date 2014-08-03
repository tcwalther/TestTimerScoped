#pragma once

#include <mach/mach_time.h>
#include <string>
#include <iostream>



class NLTimerScoped {
private:
    mach_timebase_info_data_t timebaseInfo;
    uint64_t start;
    std::string name;
    
public:
    NLTimerScoped( const std::string & name ) : name( name ) {
        mach_timebase_info(&timebaseInfo);
        
        start = now();
    }

    
    ~NLTimerScoped() {
        auto end = now();
        auto duration = ( end - start ) / 1000000;
        
        std::cout << name << " duration: " << duration << "ms" << std::endl;
    }


private:

    uint64_t now() const {
        uint64_t now = mach_absolute_time();
        
        now *= timebaseInfo.numer;
        now /= timebaseInfo.denom;
        
        return now;
    }

};
