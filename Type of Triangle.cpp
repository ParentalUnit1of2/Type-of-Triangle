// This program will have the user enter 3 angles and it will tell you if they
	// are obtuse, acute, right or not a triangle

#include <iostream>
using namespace std;

int main()
{
	// angleA, angleB, angleC are the three angles entered by user
	float angleA, angleB, angleC, sum;
	cout << "This will tell you what type of triangle you have" <<endl;
	cout << "Please enter three angles: ";

	cin >> angleA >> angleB >> angleC;

	//Total of the three angles
	sum = angleA + angleB + angleC;
	if (sum != 180)
		cout << "This is not a triangle";
	else
	{
		if (angleA == 90 || angleB == 90 || angleC == 90)
			cout << "This is a right triangle.";
		else
			if (angleA > 90 || angleB > 90 || angleC > 90)
				cout << "This is an obtuse triangle";
			else
				cout << "This is an acute triangle";


	}

	system("pause>0");
}

