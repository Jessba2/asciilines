//Jessica Barnett
//July 2,2019
//tvgClass.cpp


#include "asciilines.h"


/*
tvg::tvg()
{
				cerr<< "constructing aTvg" <<endl;
				rowsInCanvas = 3;
				colsInCanvas = 4;
				myArray = NULL;
}
*/


void tvg::readin()
{
				/*ifstream in;
				in.open("test1.txt");
				if(in)
				{
								in>>rowsInCanvas;
								in>>colsInCanvas;
								while(in && !in.eof())
								{
												in.get(aTvg.colsInCanvas);
								}
				}*/
}

void tvg::makeArray()
{
				rowsInCanvas = 3;
				colsInCanvas = 4;
				cerr<<"making array"<<endl;
				myArray = new int*[rowsInCanvas];
				cerr<<"made array of int *s" <<endl;
				cerr<<"gonna point each at an array of ints" <<endl;
				for(int i=0; i<rowsInCanvas; ++i)
				{
								cerr<<"in loop to make arrays of ints"<<endl;
								myArray[i]=new int[colsInCanvas];
				}
				//initialize array
cerr<<"initializing array" <<endl;
				for(int i=0; i<rowsInCanvas; ++i)
				{
								for(int j=0; j<colsInCanvas; ++j)
								{
												myArray[i][j] = 46;
								}
				}
}

void tvg::printArray()
{
			
				cout << "The number of rows is " << rowsInCanvas << "." <<endl;
				cout << "The number of columns is " << colsInCanvas << "." <<endl;
				for(int i=0; i<rowsInCanvas; ++i)
				{
								for(int j=0; j<colsInCanvas; ++j)
								{
												cout<<" "<< myArray[i][j] << "***";
								}
								cout <<"\n";

				}
}
