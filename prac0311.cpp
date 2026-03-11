#include <iostream>

using namespace std;

class UTexture
{

}; // 

int main()
{
	char Array[5] = { 'a', 'b', 'c', 'd', 'e'};
	
	char* array_pt = Array;
	int num_char = 0;
	int index_spec = 0;
	char User_input;
	char char_find;
	//for (int i = 0; i < 6; i++)
	//{
	//
	//	if (A[i] == 'c')
	//	{
	//		A[i] = '&';
	//		index_spec = i;
	//	}
	//
	//	num_char += 1;
	//}
	//cout << num_char << '\n';
	//cout << A[index_spec] << '\n';
	//cout << index_spec << '\n';

	//length of array
	int length = sizeof(Array) / sizeof(Array[0]);
	cout << "The character im finding is ";
	cin >> User_input;
	cout << "Change specific charater to";
	cin >> char_find;
	for (int i = 0; i < length; i++)
	{
		if (Array[i] == User_input)
		{
			Array[i] = char_find;
			index_spec = i;
		}
		num_char += 1;
	}
	cout << "number of characters in array : ";
	cout << num_char << '\n';
	cout << "specific character you are searching for :";
	cout << Array[index_spec] << '\n';
	cout << "Array of characters : ";
	for (int i = 0; i < length; i++)
	{
		cout << Array[i];
	}
	cout << "\n";
	cout << "index number of specific character you are searching for";
	cout << index_spec << '\n';
	return 0;
}











