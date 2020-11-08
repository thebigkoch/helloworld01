#include <iostream>
#include <vector>
#include <string>

#include <math_dynamic.h>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    msg.clear();
    msg.push_back("Hello");
    msg.push_back("World!");

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    cout << "8 + 4 = " << thebigkoch::math_dynamic::sum(8, 4) << endl;
    cout << "8 - 4 = " << thebigkoch::math_dynamic::difference(8, 4) << endl;
    cout << "8 * 4 = " << thebigkoch::math_dynamic::product(8, 4) << endl;
    cout << "8 / 4 = " << thebigkoch::math_dynamic::quotient(8, 4) << endl;
}