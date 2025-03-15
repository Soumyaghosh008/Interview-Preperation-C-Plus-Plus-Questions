#include <iostream>
using namespace std;

class data
{
public:
    float cal_angle(int a1, int a2, int a3)
    {

        if (a1 + a2 + a3 == 180)
        {
            if (a1 + a3 == 90)
            {
                cout << "This is a Right-Angled Triangle";
            }
            else if (a1 + a3 < 90)
            {
                cout << "This is a Acute-Angled Triangle";
            }
            else
            {
                cout << "This is a Obtuse-Angled Triangle";
            }
        }
        else
        {
            cout << "The Triangle is not Possible";
        }
    }

    return 0;
};

int main()
{
    data df;
    int a1, a2, a3;

    cout << "Enter The Angle-1: ";
    cin >> a1;
    cout << "Enter The Angle-2: ";
    cin >> a2;
    cout << "Enter The Angle-3: ";
    cin >> a3;

    df.cal_angle(a1, a2, a3);
    return 0;
}
