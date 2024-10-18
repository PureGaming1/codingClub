#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
	string input = "";
	string len = "";
	string val;

	int* arr;
	
	cout << "enter the index of smallest element u want" << endl;
	getline(cin, input);
	cout << "enter the amount of elements in array" << endl;
	getline(cin, len);
	int length = atoi(len.c_str());
	arr = new int[length];
	for (int i = 0; i < length - 1; i++)
	{
		getline(cin, val, ' ');
		arr[i] = atoi(val.c_str());
	}
	getline(cin, val);
	arr[length] = atoi(val.c_str());
	std::sort(arr, arr + length);
	cout << "The smallest element at the provided value is " << arr[atoi(input.c_str()) + 1] << endl;
}