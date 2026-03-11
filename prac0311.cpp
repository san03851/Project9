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

int main()
{
	char Array[6] = { 'a', 'b', 'c', 'd', 'e', '\0'};
	
	char* array_pt = Array;
	int num_char = 0;
	int index_spec = 0;
	char User_input;
	char char_find;
	//length of array
	int length = sizeof(Array) / sizeof(Array[0]);
	cout << "Current array is : ";
	for (int i = 0; i < length_of_array(Array); i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
	cout << "The character im finding is ";
	cin >> User_input;
	cout << "Change specific charater to : ";
	cin >> char_find;
	for (int i = 0; i < length; i++)
	{
		if (Array[i] == User_input)
		{
			*array_pt = Array[i];
			Array[i] = char_find;
			index_spec = i;
		}
	}
	//cout << array_pt;
	cout << "number of characters in array : ";
	cout << length_of_array(Array) << '\n';
	cout << "specific character you are searching for :";
	cout << Array[index_spec] << '\n';
	cout << "Array of characters : ";
	for (int i = 0; i < length; i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
	cout << "index number of specific character you are searching for is : ";
	cout << index_spec << '\n';
	return 0;
}











