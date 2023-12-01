#include<iostream>
using namespace std;
double pow(double a, int b) {
	double digit = 1;
	for (int i = 1; i <= b; i++)
	{
		 digit = digit * a;
	}
	return digit;
}

int main() {
	int power;
	double num,result ;
	cout << "Enter you number: ";
	cin >> num;
	cout << "\nEnter your power: ";
	cin >> power;
	result = pow(num,power);
	cout << "\nThe answer is= " << result;
	return 0;
}
