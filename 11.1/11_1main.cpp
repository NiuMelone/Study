#include "10_1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout;
	fout.open("11_1.txt");

	cout << "Enter the target:(q to quit): ";
	while (cin >> target)
	{
		cout << "Enter the steplength: ";
		if (!(cin >> dstep))
		{
			break;
		}
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			fout << result << endl;
			steps++;
		}
		fout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}