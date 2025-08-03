// Kesaobaka Mafora
//43031072
#include <iostream>

using namespace std;

int main()
{
    cout << "**ASCII and Character conversion**" << endl;//Heading for the code

    cout << "\nEnter a character: ";//character input by the user
    char character;
    cin >> character;
    cout << "The ASCII value is " << (int)character << endl;//output as ASCII

    cout << "\n=========================" << endl;
    cout << "=========================" << endl;

    cout << "\nEnter ASCII value: ";// value inputby the user
    int integer;
    cin >> integer;
    cout << "The character is " << (char)integer << endl;// output as value

    return 0;
}
