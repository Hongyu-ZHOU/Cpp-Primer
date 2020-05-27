#include <iostream>
#include <stdexcept>

using std::cin; 
using std::cout; 
using std::endl; 
using std::runtime_error;

int main()
{
    for (int i, j; cout << "Input two integers:\n", cin >> i >> j; )
    {
        try
        {
            if (j == 0)
                throw runtime_error("divisor should not be zero");
            cout << i / j << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what() << "\n Try again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }

    return 0;
}