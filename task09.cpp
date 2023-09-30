#include<iostream>
using namespace std;
void tpChecker(int num1, int num2);

main(){
	int num1;
	cout << "Number of people in the household: ";
	cin >> num1;

	int num2;
	cout << "Number of rolls of TP: ";
	cin >> num2;

	tpChecker(num1, num2);
}

void tpChecker(int num1, int num2)
{	int days;
	days = (500 * num2)/(57 * num1);

	if(days >= 14)
{	cout << "Your TP will last " << days << " days, no need to panic!";
}
	if(days < 14)
{	cout << "Your TP will only last " << days << " days, buy more!";
}
}