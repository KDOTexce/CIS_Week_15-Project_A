/*
* Kurt Kangas
* CIS 1202 R02
* 04/30/2022
* Programming Assignment #15a
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

char character(char start, int offset);


int main()
{
	try
	{
		char ch = character('a', 1);
		cout << ch << endl;
		ch = character('a', -1);
		cout << ch << endl;
		ch = character('Z', -1);
		cout << ch << endl;
		ch = character('?', 5);
		cout << ch << endl;

	}
	catch (string invalidRangeException)
	{
		cout << invalidRangeException;
	}
	catch (char invalidCharacterException[])
	{
		cout << invalidCharacterException;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}

char character(char start, int offset)
{
	int startValue = int(start);
	int target = startValue + offset;

	if (start < 'A' || (start > 'Z' && start < 'a') || start > 'z')
	{
		string invalidCharacterException = "Error: Invalid Character";
		throw invalidCharacterException;
	}
	if (target < 'A' || (target > 'Z' && target < 'a') || target > 'z')
	{
		char invalidRangeException[] = { "Error: Invalid Range" };
		throw invalidRangeException;
	}
	return start + offset;
}
