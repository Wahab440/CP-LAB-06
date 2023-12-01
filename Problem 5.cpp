#include<iostream>
using namespace std;
int compare(int a, int b) {
	if (a > b)
	{
		return a;
	}
	else {
		return b;
	}
}

int main()
{
	int val1, val2;
	cout << "Enter first valuse: ";
	cin >> val1;
	cout << "\nEnter second value: ";
	cin >> val2;
	cout << "\nThe larger value is: " << compare(val1, val2);
	return 0;
}