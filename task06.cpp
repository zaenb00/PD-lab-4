#include<iostream>
using namespace std;
void longestTime(int num1, int num2);

main(){
	int num1, num2;
	cout << "Enter the number of hours: ";
	cin >> num1;
	cout << "Enter the number of minutes: ";
	cin >> num2;
	
	longestTime(num1, num2);
}

void longestTime(int num1, int num2)
{	if(num1*60 < num2)
	{cout << num2;
	}
	if(num1*60 > num2)
	{cout << num1;
	}
}