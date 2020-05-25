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
	//array
	int arr[10], arr_c[10];
	for (auto i = 0; i < 10; i++) {
		arr[i] = i;
		arr_c[i] = arr[i];
		cout << arr[i] << "  " << arr_c[i] << endl;
	}

	//vector
	vector<int> vec(10), vec_c(10);
	for (auto i = 0; i != 10; ++i) {
		vec[i] = i;
		cout << vec[i] << endl;
	}
	vec_c = vec;
	for (auto i = 0; i != 10; ++i) 
		cout << vec_c[i] << endl;

	return 0;
};