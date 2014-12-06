#include <iostream>
double average(double a,double b);
int main()
{
	using namespace std;
	double x,y,average;
	cout<<"Please input two numbers: ";
	while(cin>>x>>y)
	{
		if (x==0 or y==0)
		{
			break;
		}
		else
		{	
			average=average(x,y);
		}
		cout<<average<<endl;
	}
	return 0;
}

double average(double a,double b)
{
	double average;
	average=2.0*a*b/(a+b);
	return average;
}