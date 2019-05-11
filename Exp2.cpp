//Problem no. 1
#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    char package;
    double hours, bill;
    
	cout << "Good day!\nPlease input the package type and the no. of hours to know the total amount due.\n";
	cout << "Package (A/B/C):  "; 
	cin >> package;
	
	switch (package)
	{ 
	case 'A':
	case 'a':
	cout << "No. of Hours:  "; 
	cin >> hours;
	 bill = 995;
	if (hours > 10)
	{ bill += (hours - 10) * 20; }
	cout <<"\n\n\nThe total amount due is: P " << bill;
	break;
	
	case 'B':
	case 'b':
	cout << "No. of Hours:  "; 
	cin >> hours;
	 bill = 1495;
	if (hours > 20)
	{ bill += (hours - 20) * 10; }
	cout <<"\n\n\nThe total amount due is: P " << bill;
	break;
 
	default: cout <<"Your total amount due is P 1995.";
	}

	_getch();
    return 0;
}


//Problem no. 2
#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int previousgal, currentgal;
	float bill;
	float charge = 1.10;
	float late_c = 20;
	
	cout << "WATER BILL \n"; 
	cout << "Enter your gallon consumption: \n";
	cout << "Previous: "; cin >> previousgal;
	cout << "Current: "; cin >> currentgal;
	
	bill = 35;
	bill = (bill + currentgal)* charge;
	if (previousgal > 0)
	{ bill = bill + late_c; }
	
	cout << "Your total water bill is: P " << bill;
	
	_getch();
	return 0;
	
}


//Problem no. 3
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
	float v, y;
	float z = 2.5;
	int x;
	
	cout <<"Enter the following values:\n";
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;
	
	switch(x)
	{
		case 1: if (y > 1 && y < 5)
		{ v = x*y*z; }
		else if (y >= 5)
		{ v = x + (y/z); }
		break;
		
		case 2: if (y <= 5)
		{ v = fabs ((x-y)/z); }
		else if (y > 5)
		{ v = x - sqrt(y+z); }
		break;
		
		default: v = x+y+z;
	}
	
	cout<<fixed<<setprecision(2);
	cout<<setw(10)<<setfill(' ')<<v;
	
	_getch();
	return 0;
}


//Problem no. 4
#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	
	int times = 1;
	int x = 1;
	
	while (x <= 30)
	{ 
	
	cout<<x;
	x += times; 
	
	if (x >= 10)
	{ times = 2; }
	
	if (x <= 30)
	{ cout <<","; }
	}

	_getch();
	return 0;
}


//Problem no. 5
#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	
	int n1 = 0;
	int n2 = 1;
	int next;
	
	
	cout<<n1<<","<<n2<<",";
	for(int y = 3; y<=22; y++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		cout<<next;
		
		if(y < 22)
		{
			cout<<",";
		}
	}
	
	_getch();
	return 0;
}

//Problem no. 6
#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	
	int n1, total;
	
	cout << "Enter a number: "; cin >> n1;
	
	while (n1 >0)
	{
		total = 0;
	
	for (int n=1; n<=n1; n++)
	{ total = n + total; }
	
	cout << "The sum from 1 to " <<n1<< " is " << total << endl; 
	cout << "Enter a number: "; cin >> n1;
	
    }
    
    cout << "Thank you!";
	
	_getch();
	return 0;
}	
