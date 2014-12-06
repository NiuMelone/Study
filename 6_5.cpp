#include <iostream>

int main()
{
	using namespace std;
	double salary,tax;
	cout << "Please input your salary. ";
	(cin >> salary).get();
	while (salary >= 0)
	{	
		if (salary < 5001)
			cout << "tax=0" << endl;
		else if (salary < 15001)
		{
			tax = (salary - 5000)*0.10;
			cout << "Tax = " << tax << endl;
		}
		else if (salary<35001)
		{
			tax = 10000 * 0.10 + (salary - 15000)*0.15;
			cout << "Tax = " << tax << endl;
		}
		else
		{
			tax = 10000 * 0.10 + 20000 * 0.15 + (salary - 35000)*0.2;
			cout << "Tax = " << tax << endl;
		}
		break;
	}
	return 0;
}