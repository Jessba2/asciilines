//Jessica Barnett
//July 1st, 2019
//asciilines.cpp
//kamachshi & jeff


#include "asciilines.h"

using namespace std;

int main()
{
				aTvg = new tvg;

				int done = 0;
				ifstream in;
				in.open("myTest1.txt");

				if(in)
				{
								in>>aTvg.rowsInCanvas;
								while(in && !in.eof())
								{
												in.get(aTvg.columnsInCanvas);
								}

				{
}
