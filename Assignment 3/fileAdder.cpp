/********************************************************************
** Author: Cuyler Frisby
** Date: 7/9/2017
** Description: This program asks the user for the name of a file and
**              tries to open it. If the file exists and can be opened,
**              the program will read the list of integers contained in
**              the file, sum them, and output the sum to a new file
**              named "sum.txt"
********************************************************************/

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    ifstream inputFile;
    string fileName;
    int sum, value;

    //Ask the user for a file to open
    cout << "Please enter the name of the file you would like to open." << endl;
    getline(cin, fileName);
    
    inputFile.open(fileName);

    //If the file exists, read its contents, sum them, and output the sum to "sum.txt"
    if (inputFile)
    {
        while (inputFile >> value)
        {
	    sum += value;
        }
        inputFile.close();

	ofstream outputFile;
	outputFile.open("sum.txt");
	outputFile << sum << endl;
	outputFile.close();
    }
    
    //If the file does not exist or cannot be opened, display an error message
    else
    {
        cout << "could not access file" << endl;
    }

    return 0;
}
