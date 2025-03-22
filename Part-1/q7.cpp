#include <iostream>
using namespace std;

class data
{
public:
	int cal_prime(int x)
	{

		int i;

		if (x == 1 || x == 0)
		{

			cout << "This Number is Out of Prime Order \n";
		}

		for (i = 2; i < x; i++)
		{

			if (x % i == 0)
			{

				cout << "This is Not Prime Number \n";
				break;
			}
		}

		if (i == x)
		{

			cout << "This is a Prime Number \n";
		}

		return 0;
	}
};

int main()
{
	class data df;

	int num;

	cout << "Enter The Number: ";
	cin >> num;

	df.cal_prime(num);

	return 0;
}
