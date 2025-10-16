/*********************
Jack Ratcliffe
Computer Science Fall 2025
Due Date 10/28/2025
Lab 4: Temperature Output
Description:
*********************/


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	::ifstream inFile;
	inFile.open("HourTemp.dat");

	if (!inFile)
	{
		cout << "Error opening file HourTemp.dat" << endl;
		return 1;
	}

	int temp;

	inFile >> temp;

	while (inFile)
	{
		cout << temp << endl;
		inFile >> temp;	
	}


	inFile.close();
	
	return 0;
}
