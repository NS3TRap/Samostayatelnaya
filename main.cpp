#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int k;
    bool bexit = false;

    while (!bexit) {
        system("cls");
        cout << "Select the desired item (specify number):\n1) Summation;\n2) Subtraction;\n3) Multiplication;\n4) Division;\n0)Exit\n";
        cin >> k;
        switch(k) {
        case 1:
            system("cls");
            cout << "In the next update...";
            break;
        case 2:
            system("cls");
            cout << "In the next update...";
            break;
        case 3:
            system("cls");
            cout << "In the next update...";
            break;
        case 4:
            system("cls");
            cout << "In the next update...";
            break;
        case 0:
            bexit = true;
            break;
        }
    }
    return 0;
}
