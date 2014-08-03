TestTimerScoped
===============

Utility class for quick code benchmarking. Header only, single line to use.

###Example:

	#include "NLTimerScoped.h"

	int main(int argc, const char * argv[]) {
        NLTimerScoped timer( "sleep( 4 )" );
        sleep( 4 );
	    return 0;
	}

Output will be ``sleep( 4 ) duration: 4000ms``

Currently works on Mac OS X and iOS.
