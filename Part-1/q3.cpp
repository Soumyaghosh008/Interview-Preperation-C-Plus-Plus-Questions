#include <iostream>
using namespace std;

class data{
	public:
	float cal_area(float side){

		float area;

		area = side * side;

		cout << "The Area is: " << area;

		return area;
	}
};

int main(){
data df;
	float side;

	cout << "Enter The Side  of the Squere: ";
	cin >> side;

	df.cal_area(side);

	return 0;

}
