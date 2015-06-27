#include <iostream>
#include <fstream>
#include <string>
#include "StackP.h"
#include "StackPImp.h"

void main()
{
	char * fileName = new char [80];
	int iNumber= 0;
	fstream inFile;
	Stack integerStack;

	cout<< "Enter file name ";
	cin.getline(fileName, 80, '\n');

	//inFile.open("c:\\mydocu~1\\visual~1\\stackc~1\\age.txt", ios::in);
	inFile.open(fileName, ios::in);

	cout<< "\nInput-> ";
	while(!inFile.eof())
	{
		inFile >> iNumber;
		integerStack.push(iNumber);
		cout << iNumber << " ";
	}
	
	cout<< "\n Output-> ";	

	while(!integerStack.isEmpty())
	{
		integerStack.getTop(iNumber);
		cout << iNumber << ' ';
		integerStack.pop();
	}


	return;
}