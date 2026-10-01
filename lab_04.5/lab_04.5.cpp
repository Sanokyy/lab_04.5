#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    double x, y, R;

    cout << "R = ";
    cin >> R;

    srand((unsigned)time(NULL));

    // 1 спосіб - координати вводяться з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;

        cout << "y = ";
        cin >> y;

        if (x >= -R && x <= R &&
            y >= -R && y <= R &&
            (x + R) * (x + R) + (y - R) * (y - R) >= R * R &&
            (x - R) * (x - R) + (y + R) * (y + R) >= R * R)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    cout << endl << fixed;

    cout << "---------------------------------" << endl;
    cout << "|" << setw(10) << "x"
        << " |" << setw(10) << "y"
        << " |" << setw(7) << "Answer" << " |" << endl;
    cout << "---------------------------------" << endl;

    // 2 спосіб - випадкові координати
    for (int i = 0; i < 10; i++)
    {
        x = 4.0 * R * rand() / RAND_MAX - 2.0 * R;
        y = 4.0 * R * rand() / RAND_MAX - 2.0 * R;

        cout << "|" << setw(10) << setprecision(3) << x
            << " |" << setw(10) << setprecision(3) << y;

        if (x >= -R && x <= R &&
            y >= -R && y <= R &&
            (x + R) * (x + R) + (y - R) * (y - R) >= R * R &&
            (x - R) * (x - R) + (y + R) * (y + R) >= R * R)
        {
            cout << " |" << setw(7) << "yes" << " |" << endl;
        }
        else
        {
            cout << " |" << setw(7) << "no" << " |" << endl;
        }
    }

    cout << "---------------------------------" << endl;

    return 0;
}