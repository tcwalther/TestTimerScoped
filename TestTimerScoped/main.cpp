#include <iostream>
#include <math.h>
#include <unistd.h>

#include "NLTimerScoped.h"



int main(int argc, const char * argv[]) {

    {
        NLTimerScoped timer( "sin sum" );
        
        float a = 0.0f;
        
        for ( int i=0; i < 1000000; i++ ) {
            a += sin( (float) i / 100 );
        }
        
        std::cout << "sin sum = " << a << std::endl;
    }
    
    
    
    {
        NLTimerScoped timer( "sleep( 4 )" );
        
        sleep( 4 );
    }
    
    
    
    return 0;
}

