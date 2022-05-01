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
void validate(char start, int offset);


int main()
{
	validate('a', 1);
	validate('a', -1);
	validate('Z', -1);
	validate('?', 5);


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
		string invalidCharacterException = "Error: Invalid Character Exception";
		throw invalidCharacterException;
	}
	if (target < 'A' || (target > 'Z' && target < 'a') || target > 'z')
	{
		char invalidRangeException[] = { "Error: Invalid Range Exception" };
		throw invalidRangeException;
	}
	return start + offset;
}

void validate(char start, int offset)
{
	try
	{
		cout << character(start, offset) << endl;
	}
		catch (string invalidRangeException)
		{
			cout << invalidRangeException << endl;
		}

		catch (char invalidCharacterException[])
		{
			cout << invalidCharacterException << endl;
		}



}












// Put this in main and delete validate function if there is only supposed to be one function prototype.
/*
* 	try
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
*/
