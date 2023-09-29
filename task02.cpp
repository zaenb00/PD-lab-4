#include<iostream>
using namespace std;

void Reverse(string reverse);

main()
{	string reverse;
	cout << "Enter 'true' or 'false': ";
	cin >> reverse;

	Reverse(reverse);
}

void Reverse(string reverse)
{	if(reverse == "true")
{	cout << "false";
}
	if(reverse == "false")
{	cout << "true";
}
}