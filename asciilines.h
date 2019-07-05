//Jessica Barnett
//July 1st, 2019
//asciilines.h

#include <cstdlib>
#include <cctype>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

class node
{
				public:
								node(char tempAsciiChar, int tempStartRow, int tempStartCol, char tempHorV, int tempHowFar);

								char asciiChar;
								int startRow;
								int startCol;
								char hORv;
								int howFar;
								node* next;
};

class tvg
{
				public:
								//				tvg();
								void readIn();
								void makeListOfInst();
								void makeArray();
								void printArray();
				private:
								int rowsInCanvas;
								int colsInCanvas;
								int** myArray;
								node* head; //LLL of instructions
};




