#include <iostream>

using namespace std;

int length_of_array(char Array[])
{
	int length = 0;
	for (int i = 0; i < 1000; i++)
	{
		length += 1;
		if (Array[i] == '\0')
		{
			break;
		}

	}
	return length;
}

void Change_specific_chara_and_Print(char Array[], char SpecificChara, char ChangetoChar, int LengthofArray)
{
	int IndexSpec = 0;
	for (int i = 0; i < LengthofArray; i++)
	{
		if (Array[i] == SpecificChara)
		{
			Array[i] = ChangetoChar;
			IndexSpec = i;
		}
	}
	cout << "number of characters in array : ";
	cout << LengthofArray << '\n';
	cout << "specific character you are searching for :";
	cout << Array[IndexSpec] << '\n';
	cout << "Array of characters : ";
	for (int i = 0; i < length_of_array(Array); i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
	cout << "index number of specific character you are searching for is : ";
	cout << IndexSpec << '\n';
}

int main()
{
	char Array[6] = { 'a', 'b', 'c', 'd', 'e', '\0'};
	char* ArraypPtr = Array;
	int IndexSpec = 0;
	char UserInput;
	char CharFind;

	cout << "Current array is : ";
	for (int i = 0; i < length_of_array(Array); i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
	cout << "The character im finding is ";
	cin >> UserInput;
	cout << "Change specific charater to : ";
	cin >> CharFind;
	Change_specific_chara_and_Print(Array, UserInput, CharFind, length_of_array(Array));
	//for (int i = 0; i < length_of_array(Array); i++)
	//{
	//	if (Array[i] == UserInput)
	//	{
	//		Array[i] = CharFind;
	//		IndexSpec = i;
	//	}
	//}
	//cout << "number of characters in array : ";
	//cout << length_of_array(Array) << '\n';
	//cout << "specific character you are searching for :";
	//cout << Array[IndexSpec] << '\n';
	//cout << "Array of characters : ";
	//for (int i = 0; i < length_of_array(Array); i++)
	//{
	//	cout << Array[i] << " ";
	//}
	//cout << "\n";
	//cout << "index number of specific character you are searching for is : ";
	//cout << IndexSpec << '\n';
	return 0;
}











