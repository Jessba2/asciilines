//Jessica Barnett
//July 1st, 2019
//asciilines.h

#include <cstdlib>
#include <cctype>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

class tvg
{
				public:
//				tvg();
				void readin();
				void makeArray();
				void printArray();
				private:
				int rowsInCanvas;
				int colsInCanvas;
				int** myArray;
};





