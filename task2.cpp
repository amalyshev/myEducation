#include <iostream>
#define GALLON 3.875
int conversion(double liters_km);
int main(void)
{
	using namespace std;

	cout<<"Enter amount of liters per 100 km: ";
	double euro;
	cin>>euro;
	cout<<"It is equal to "<<conversion(euro)<<" miles per gallon."<<endl;
	return 0;
}

int conversion(double liters_km)
{
	return 62.14/(liters_km/GALLON);
}
