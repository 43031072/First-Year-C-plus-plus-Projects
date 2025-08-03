//Kesaobaka Mafora
// 43031072
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double base, height, area, volume, diagonal;

    // Ask the user to enter the base and height of a square pyramid
    cout << "Enter the base (cm) of a square pyramid: ";
    cin >> base;
    cout << "Enter the height (cm) of a square pyramid: ";
    cin >> height;

    // Calculate the area, volume, and diagonal of the square pyramid
    area = pow(base,2) + 2 * base * sqrt((pow(base,2) / 4) + (pow(height,2)));
    volume = (pow(base,2) * height) / 3;
    diagonal = sqrt((pow(base,2)) + (4 * pow(height,2)));

    // Display the calculated values with appropriate labels/headings
    cout << fixed << setprecision(1) << "Dimensions: " << endl;
    cout << "Base: " << base << " cm" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << endl;
    cout << fixed << setprecision(4) << "Area: " << area << " cm^2" << endl;
    cout <<fixed << setprecision(2) << "Volume: " << volume << " cm^3" << endl;
    cout <<fixed << setprecision(3) << "Diagonal: " << diagonal << " cm" << endl;

    return 0;
}
