//takes user input on certain aspects of various corrals and outputs a chart with information about the corral
//Grant Blair
//july 13, 2017

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const double sheep = 2.45;		//area of a sheep
const double PI = 3.1415;		//PI

int main()
{
	//1. declare variables
	double l, w, r;		//length and width and radius
	double a;			//area
	char choice;		//shape of corral
	int i = 1;			//counter
	int ac;				//amount of corrals
	int s;				//number of sheep

	//2. prompt user for amount of corrals
	cout << "Enter number of corrals: ";
	cin >> ac;

	//3. prompt user for shape of corral
	while (i <= ac)
	{
		cout << "Is corral " << i << " reactangular (r) or circular (c): ";
		cin >> choice;
		if (choice !='r' && choice != 'R' && choice != 'c' && choice !='C')
		{
			cout << "Choose either 'r' or 'c'";
			cout << endl;
		}


		//4. get length and width
		if (choice =='r' || choice == 'R')
		{
			cout << "Enter length for corral " << i << ": ";
			cin >> l;
			cout << "Enter width for corral " << i <<": ";
			cin >> w;
			cout << endl;
			
			//5. calculate the area and no. of sheep in the rectangular corral
			a = l * w;
			s = a / sheep;

			//6. output in rectangular corral format
			cout << left << setw(10) << "Corral"
				<< setw(16) << "Dimensions"
				<< setw(7) << "Area"
				<< setw(11) << "No of Sheep";
			cout << endl;

			//output line 2
			cout << showpoint << setprecision(2) << fixed;
			cout << left << setw(10) << i
				<< setw(3) << l << "x" << setw(11) << w
				<< setw(9) << setfill('*') << a
				<< setw(11) << setfill(' ') << s;
			cout << endl;
			cout << endl;
			i++;
		}
		else if (choice == 'c' || choice == 'C')
		{
			//7. get radius
			cout << "Enter Radius of corral " << i << ": ";
			cin >> r;
			cout << endl;

			//8. calculate the area and no. of sheep that can fit into the corral
			a = PI * pow(r, 2);
			s = a / sheep;

			//9. output in circular corral format
			cout << left << setw(10) << "Corral"
				<< setw(8) << "Radius"
				<< setw(7) << "Area"
				<< setw(11) << "No of Sheep";
			cout << endl;

			//output line 2
			cout << showpoint << setprecision(2) << fixed;
			cout << left << setw(10) << i
				<< setw(8) << r
				<< setw(9) << setfill('*') << a
				<< setw(11) << setfill(' ') << s;
			cout << endl;
			cout << endl;
			i++;
		}
	}

	system("pause");
	return(0);
}



