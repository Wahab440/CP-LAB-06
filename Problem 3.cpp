#include<iostream>
using namespace std;
char uppercase(char alphabet) {
	alphabet = alphabet - 32;
	return alphabet;
}

int main()
{
	char letter;
	cout << "Enter your letter (Lower case): ";
	cin >> letter;
	cout << "\nThe upper_case letter is: " << uppercase(letter);
	return 0;
}