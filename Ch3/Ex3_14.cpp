#include<iostream>
#include<string>
#include<vector>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{

	int i;
	vector<int> vec;

	while (cin >> i) {
		vec.push_back(i);
	}

	return 0;
};