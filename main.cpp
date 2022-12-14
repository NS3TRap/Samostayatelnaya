#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
    int k;
    bool bexit = false;
    double a,b;

    while (!bexit) {
        system("cls");
        cout << "Select the desired item (specify number):\n1) Summation;\n2) Subtraction;\n3) Multiplication;\n4) Division;\n0)Exit\n";
        cin >> k;
        switch(k) {
        case 1:
            system("cls");
            cout << "Enter the first number:\n";
            cin >> a;
            cout << "Enter the second number:\n";
            cin >> b;
            cout << Sum(a, b) << endl;
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Enter the first number:\n";
            cin >> a;
            cout << "Enter the second number:\n";
            cin >> b;
            cout << Sub(a, b) << endl;
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "In the next update..." << endl;
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "In the next update..." << endl;
            system("pause");
            break;
        case 0:
            bexit = true;
            break;
        }
    }
    return 0;
}
