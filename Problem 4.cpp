#include<iostream>
using namespace std;
float charges(float hours) {
	float charges = 1;
	if (hours <= 3) {
		return charges;
	}
	if (hours > 3)
	{
		hours = hours - 3;
		charges = (hours * 0.5) +2;
		if (charges > 10)
		{
			charges = 10;
		}
	}
	return charges;

}
float total(float charges) {
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = sum + charges;
	}
	return sum;
}
float Total(float hours) {
	float add = 0;
	for (int i = 0; i < 3; i++)
	{
		add = add + hours;
	}
	return add;
}

int main(){
	float total_charge = 0, total_hours=0;
	float charge, hours;
	cout << "Cars\t\tHours\t\tCharges" ;
	for (int i = 0; i < 3; i++)
	{
		cout << "\nEnter hours for cars: ";
		cin >> hours;
		charge = charges(hours);
		total_charge += charge;
		total_hours += hours;

		cout << i + 1 << "\t\t" << hours << "\t\t" << charge;
	}
	cout << "\nTotal\t\t" << Total(charge) << "\t\t" << total(hours);
	return 0;
}
