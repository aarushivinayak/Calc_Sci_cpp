#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout << "--------------------------------" << endl;
    cout << "           Calculator           " << endl;
    cout << "--------------------------------" << endl;
    cout << "1. Addition " << "       8. Sin " << endl;
    cout << "2. Subtraction " << "    9. Cos " << endl;
    cout << "3. Multiplication " << " 10. Tan " << endl;
    cout << "4. Division " << "       11. Inverse of Sin " << endl;
    cout << "5 Exponent " << "        12. Inverse of Cos " << endl;
    cout << "6. Square " << "         13. Inverse of Tan " << endl;
    cout << "7. Log" << "             14. Exit " << endl;
    cout << endl;
    cout << endl;
    
    float x, y;
    float pi = 3.14159265;
    int choice;

    cout << "Enter the function you want to perform : ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter First No. : ";
            cin >> x;
            cout << "Enter Second No. : ";
            cin >> y;
            cout << "Result : " << x + y << endl;
            break;
        case 2:
            cout << "Enter First No. : ";
            cin >> x;
            cout << "Enter Second No. : ";
            cin >> y;
            cout << "Result : " << x - y << endl;
            break;
        case 3:
            cout << "Enter First No. : ";
            cin >> x;
            cout << "Enter Second No. : ";
            cin >> y;
            cout << "Result : " << x * y << endl;
            break;
        case 4:
            cout << "Enter First No. : ";
            cin >> x;
            cout << "Enter Second No. : ";
            cin >> y;
            cout << "Result : " << x / y << endl;
            break;
        case 5:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Enter Exponential No. : ";
            cin >> y;
            cout << "Result : " << pow(x, y) << endl;
            break;
        case 6:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << sqrt(x) << endl;
            break;
        case 7:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << log10(x) << endl;
            break;
        case 8:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << sin(x) << endl;
            break;
        case 9:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << cos(x) << endl;
            break;
        case 10:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << tan(x) << endl;
            break;
        case 11:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << asin(x) * 180.0 / pi << endl;
            break;
        case 12:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << acos(x) * 180 / pi << endl;
            break;
        case 13:
            cout << "Enter The No. : ";
            cin >> x;
            cout << "Result : " << atan(x) * 180 / pi << endl;
            break;
        case 14:
            break;
        default:
            cout << "Wrong Input";
            break;
    }

    return 0;
}