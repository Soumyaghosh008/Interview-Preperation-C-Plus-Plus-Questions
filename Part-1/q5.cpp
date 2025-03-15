#include <iostream>
using namespace std;

class data{
	public:
	float cal_volume(float side){

		float volume;

		volume = side * side * side;

		cout << "The Volume of the Cube is: " << volume;

		return volume;
	}
};

int main(){
data df;

	float side;

	cout << "Enter the Volume: ";
	cin >> side;

	df.cal_volume(side);

	return 0;
}
