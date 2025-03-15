#include <iostream>
using namespace std;

class data
{
public:
    float cal_area(float l, float w)
    {

        float area;

        area = l * w;

        cout << "The Area is: " << area;

        return area;
    }

    float cal_perimeter(float l, float w)
    {

        float perimeter;

        perimeter = 2 * (l + w);

        cout << "The perimeter is: " << perimeter;

        return perimeter;
    }

    float cal_diagonal(float l, float w)
    {

        float diagonal;

        diagonal = (l * l) + (w * w);

        cout << "The Diagonal is: " << diagonal;

        return diagonal;
    }
};

int main()
{
    data df;
    float l, w;

    cout << "Enter The Length: ";
    cin >> l;
    cout << "Enter The Width: ";
    cin >> w;

    int op;

    cout << "Enter Your Choise: ";
    cin >> op;

    switch (op)
    {
    case 1:
        df.cal_area(l, w);
        break;

    case 2:
        df.cal_perimeter(l, w);
        break;

    case 3:
        df.cal_diagonal(l, w);
        break;

    default:
        cout << "ERROR";
        break;
    }
    return 0;
}