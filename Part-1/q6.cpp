#include <iostream>
using namespace std;

class data{
        public:
        int cal_biggest(int n1, int n2, int n3){

		if(n1 > n2 && n1 > n3){

			cout << "1st Number is Biggest";
		
		}else if(n2 > n1 && n2 > n3){

			cout << "2nd Number is Biggest";
		
		}else{

			cout << "3rd Number is Biggest";
		
		}

                return 0;
        }
};

int main(){
data df;

        int n1,n2,n3;

        cout << "Enter the 1st Number: ";
        cin >> n1;

	cout << "Enter the 2nd Number: ";
        cin >> n2;

	cout << "Enter the 3rd Number: ";
        cin >> n3;

        df.cal_biggest(n1,n2,n3);

        return 0;
}
