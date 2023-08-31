// Strings as character arrays
#include <iostream>
using namespace std;

int main()
{
    string name = "Navod Dulanjana";

    int len = name.length();

    cout << "Length: " << len << endl;

    name = "Mr. " + name;
    cout << name << endl;
    cout << "Length: " << name.length() << endl;

    cout << "Find 'D': " << name.find('D') << endl;
    cout << "Find '.': " << name.find('.') << endl;
    cout << "Find 'x': " << name.find('x') << endl;

    string fname = name.substr(4,5);
    cout << "Substr (4,5): " << fname << endl;

    return 0;
}