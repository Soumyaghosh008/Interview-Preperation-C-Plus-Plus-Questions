#include <iostream>
using namespace std;

class data{
	public:
	float cal_density(float radius){

		float density;

		density = (4 / 3 * 3.14) * radius * radius;

		cout << "The Density of the Sphere is: " << density; 
		return density;
	}
};

int main(){
data df;
	float radius;

	cout << "Enter The Radius: ";
	cin >> radius;

	df.cal_density(radius);

	return 0;

}
