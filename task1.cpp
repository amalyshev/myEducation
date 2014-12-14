#include <iostream>
int perevod(int age_s);
void string1(void);
void string2(void);


int main(void)
{
	using namespace std;
	cout<<"Enter your age in years: ";
	int age;
	cin>>age;
	cout<<"Your age in months is: "<<perevod(age)<<endl;
	return 0;
}

int perevod(int age_s)
{
	return age_s*12;
}

void string1(void)
{
	using namespace std;
	cout<<"Three blind mice"<<endl;
}
void string2(void)
{
	using namespace std;
	cout<<"See how they run"<<endl;
}
