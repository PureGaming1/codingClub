#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>

void fillMap(std::string* arr1, int* arr2, int size,  std::map<std::string,int>& map)
{
	for (int i = 0; i < 5; i++)
	{
		map[arr1[i]] = arr2[i];
	}
}

using namespace std;
int main()
{

	map<string, int> myMap;
	string* jeffs = new string[5];
	int* ones = new int[5];

	jeffs[0] = "Bob";
	jeffs[1] = "Jeff";
	jeffs[2] = "Tanner";
	jeffs[3] = "Conrad";
	jeffs[4] = "Abe";

	for (int i = 0; i < 5; i++)
	{
		ones[i] = i;
	}

	fillMap(jeffs, ones,5, myMap);

	for (std::map<std::string, int>::iterator it = myMap.begin();
		it != myMap.end();
		it++)
	{
		cout << it->first << " " << it->second << endl;
	}

	system("pause");

}