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


void tvg::readIn()
{
				char tempAsciiChar;
				int tempStartRow;
				int tempStartCol;
				char tempHorV;
				int tempHowFar;
				ifstream in;
				in.open("test2.txt");
				if(in)
				{
								in>>rowsInCanvas;
								in.ignore(30, '|'); //eat pipe
								cerr<<"rows =" <<rowsInCanvas<<endl;
								in>>colsInCanvas;
								in.ignore(30, '\n'); //eat endline
								cerr<<"cols =" <<colsInCanvas<<endl;
								in.get(tempAsciiChar);
								cerr<<"asciiChar=" << tempAsciiChar <<endl;
								while(in && !in.eof())
								{

								in.ignore(30, '|'); //eat pipe
												in>>tempStartRow;
												cerr<<"tempStartRow = "<<tempStartRow<<endl;

								in.ignore(30, '|'); //eat pipe
												in>>tempStartCol;

								in.ignore(30, '|'); //eat pipe
												cerr<<"tempStartCol = "<<tempStartCol <<endl;
												in.get(tempHorV);
								in.ignore(30, '|'); //eat pipe
												cout <<"tempHorV = "<<tempHorV <<endl;
												in>>tempHowFar;
												in.ignore(5, '\n'); //eat endline
												cerr<<"tempHowFar = "<<tempHowFar <<endl;
												node* temp = head; //hold on to rest of list (null to start)
												head = new node(tempAsciiChar, tempStartRow, tempStartCol, tempHorV, tempHowFar); //make and insert node
												head->next = temp;
												in.get(tempAsciiChar);
								cerr<<"asciiChar=" << tempAsciiChar <<endl;
								}
in.close();
				}
}

void tvg::makeArray()
{
				myArray = new int*[rowsInCanvas];
				for(int i=0; i<rowsInCanvas; ++i)
				{
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

				for(int i=0; i<rowsInCanvas; ++i)
				{
								for(int j=0; j<colsInCanvas; ++j)
								{
												cout<<" "<< char(myArray[i][j]);
								}
								cout <<"\n";

				}
}



node::node(char tempAsciiChar, int tempStartRow, int tempStartCol, char tempHorV, int tempHowFar)
{

				asciiChar = tempAsciiChar;
				startRow = tempStartRow;
				startCol = tempStartCol;
				hORv = tempHorV;
				howFar = tempHowFar;
				next = NULL;
}

