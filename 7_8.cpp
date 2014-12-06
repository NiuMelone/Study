#include <iostream>
void fill(double ar[]);
void show(double ar[]);

int main
{
	const char * Snames={"Spring","Summer","Fall","Winter"};
	double expenses[];
	fill(expenses);
	show(expenses);
}

void fill(double ar[])
{
	using namespace std;
	for (int i = 0; i < 4; ++i)
	{
		cout<<"Enter "<<Snames[i]<<" expenses:";
		cin>>ar[i];
	}
}

void show(double ar[])
{
	using namespace std;
	double total=0;
	for (int i = 0; i < 4; ++i)
	{
		cout<<Snames[i]<<": $"<<ar[i]<<endl;
		total+=ar[i];
	}
	cout<<"Total is "<<total<<endl;
}