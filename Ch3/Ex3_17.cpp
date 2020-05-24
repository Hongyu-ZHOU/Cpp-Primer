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

    vector<string> vec = {"abc","efg","hij"};
    //for (string word; cin >> word; vec.push_back(word));

    for (auto & str : vec) 
        for (auto & c : str) 
            c = toupper(c);

    for (string::size_type i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << endl;
    }

	return 0;
};