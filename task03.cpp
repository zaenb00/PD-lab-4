#include<iostream>
using namespace std;
void Discount(string c, float d);

main()
{	string c;
	cout << "Enter the country's name: ";
	cin >> c;
	float d;
	cout << "Enter the ticket price in dollars: $";
	cin >> d;

	Discount(c, d);
}

void Discount(string c, float d)
{	if(c=="Pakistan")
	{	d= d-(d*0.05);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="Ireland")
	{	d=d-(d*0.1);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="India")
	{	d=d-(d*0.2);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="England")
	{	d=d-(d*0.3);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="Canada")
	{	d=d-(d*0.45);
		cout << "Final ticket price after discount: $"<<d;
	}
}