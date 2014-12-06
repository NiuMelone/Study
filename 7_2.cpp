#include <iostream>
const int MAX=10;
int input(int a[],int limit);
void show(const int a[],int b);
void aver(const int a[],int b);

int main()
{
	using namespace std;
	int grade[MAX];
	int num=input(grade,MAX);
	show(grade,num);
	aver(grade,num);

	return 0;
}

int input(int a[],int limit)
{
	using namespace std;
	int temp;
	int i;
	for(i=0;i<limit;i++)
	{
		cout<<"Enter the grade "<<i+1<<" (q to quit)"<<" : ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input"<<endl;
			break;
		}
		else if(temp<0)
			break;
		a[i]=temp;
	}
	return i;
}

void show(const int a[],int b)
{
	using namespace std;
	cout<<"All grade is ";
	for (int i = 0; i < b; ++i)
	{
		cout<<a[i]<<"   ";
	}
	cout<<endl;
}

void aver(const int a[],int b)
{
	using namespace std;
	float temp=0;
	for (int i = 0; i < b; ++i)
	{
		temp+=a[i];
	}
	cout<<"The average grade is "<<temp/b<<endl;
}