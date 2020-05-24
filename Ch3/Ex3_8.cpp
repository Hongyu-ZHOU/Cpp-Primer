#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    string str("a string");
    decltype(str.size()) i = 0;

    // while
    while (i < str.size()) 
        str[i++] = 'W';
    cout << str << endl;

    // for
    for (i = 0; i < str.size(); i++)
        str[i] = 'F';
    cout << str << endl;


    return 0;
}