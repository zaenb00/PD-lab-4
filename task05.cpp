#include<iostream>
using namespace std;
void possibleBonus(int num1, int num2);

main(){
	int num1;
	cout << "Enter your position: ";
	cin>> num1;
	int num2;
	cout << "Enter your friend's position: ";
	cin >> num2;

	possibleBonus(num1, num2);
}

void possibleBonus(int num1, int num2)
{	if(num2-num1 <= 6)
	{	cout << "true";
	}
	else
	{	cout << "false";
}
}