// Taravangian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
	using namespace std;

	int minremaining;
	//minremaining = stoi("1200");
	

	ifstream inf("minremaining.dat");
	if (!inf)
	{
		cerr << "Uh oh, minremaining.dat could not be opened for reading!" << endl;
		exit(2);
	}
	string strInput;
	getline(inf, strInput);
	minremaining = stoi(strInput);
	
	cout << "You have " << minremaining << " minutes remaining.\n";
	cout << "How many additional minutes will you record?  ";
	int newminutes;
	cin >> newminutes;
	minremaining -= newminutes;
	cout << "\nExcellent. You now have " << minremaining << " minutes remaining.";

	//while (inf)
	//{
		//string strInput;
		//inf >> strInput;
		
		//cout << "Test!!\n";
		//cout << strInput << endl;
	//}

	ofstream outf("minremaining.dat");

	if (!outf)
	{
		cerr << "Uh oh, minremaining.dat could not be opened for writing!" << endl;
		exit(1);
	}

	string strOut;
	strOut = to_string(minremaining);
	outf << strOut << endl;

	// cout << "This is a test, print this!!";
	
	return 0;

}
