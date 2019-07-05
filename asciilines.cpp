//Jessica Barnett
//July 1st, 2019
//asciilines.cpp
//kamachshi & jeff


#include "asciilines.h"


int main()
{
				tvg aTvg;
				cerr<<"call readIn which builds LLL" <<endl;
				aTvg.readIn(); //reads in data
				cerr<<"call makeArray makes r by c rectangle with dots" <<endl;
				aTvg.makeArray();  //readin, make array, initialize array
				aTvg.printArray();
				return 0;

}


