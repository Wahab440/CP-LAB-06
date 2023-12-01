#include<iostream>
using namespace std;
int swap(int n) {
	int digit =0;
	while (n > 0)
	{
	int num = n % 10;
	digit =  digit*10+num;
	n = n / 10;
    }
	return digit;
	
}

int main()
{
	int n;
	cout << "Enter your number: ";
	cin >> n;
	cout << "The number after swappig: " << swap(n) << endl;
	return 0;
}