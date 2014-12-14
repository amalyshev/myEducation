#include <iostream>
void perevod(int hrs, int mints);


int main(void)
{
	using namespace std;
	cout<<"Enter the number of hours: ";
	int hours;
	cin>>hours;
	if ((hours<0)||(hours>23))
	{
		cout<<"Wrong hours number!"<<endl;
	}
	else
	{
		cout<<"Enter the number of minutes: ";
		
		int minutes;
		cin>>minutes;
		if((minutes<0)||(minutes>59))
		{
			cout<<"Wrong minutes number!"<<endl;
		}
		else
		{
			perevod(hours,minutes);
		}
	}
	return 0;
}

void perevod(int hrs,int mints)
{
	std::cout<<hrs<<":"<<mints<<std::endl;
	return;
}

