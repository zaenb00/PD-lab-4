#include<iostream>
using namespace std;
void pet(int holidays);

main(){
	int holidays;
	cout << "Holidays: ";
	cin >> holidays;
	
	pet(holidays);
}

void pet(int holidays)
{	int workingdays;
	workingdays= 365 - holidays;
	
	int timeforgames;
	timeforgames= workingdays*63 + holidays*127;

	int normdifference;
	normdifference= 30000-timeforgames;

	int norm_difference;
	norm_difference=timeforgames-30000;
	
	
	
	if(timeforgames < 30000)
{	int hours;
	hours= normdifference/60;

	int mins;
	mins= normdifference%60;
	
	cout << "Tom sleeps well"<< endl;
	cout << hours << " hours and " << mins << " minutes less for play";
}
	if(timeforgames > 30000)
{	int hrs;
	hrs= norm_difference/60;

	int min;
	min= norm_difference%60;
	
	cout << "Tom will run away"<< endl;
	cout << hrs << " hours and " <<min<< " minutes for play";
}
}

	