TestTimerScoped
===============

Utility class for quick code benchmarking. Header only, single line to use.

This is a fork of https://github.com/catnapgames/TestTimerScoped, which works on OSX and Linux (the original has been developed for OSX and iOS). It likely works on Windows and iOS, too, but has not been tested on these platforms.

###Example:

	#include "NLTimerScoped.h"

	int main(int argc, const char * argv[]) {
        NLTimerScoped timer( "sleep( 4 )" );
        sleep( 4 );
	    return 0;
	}

Output will be ``sleep( 4 ) duration: 4000ms``
