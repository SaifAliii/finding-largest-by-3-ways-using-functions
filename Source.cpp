
#include <iostream>
using namespace std;
double largest1 (double, double, double);
double largest2 (double, double, double);
double largest3(double, double, double);
int main()
{
	double num1, num2, num3, biggest1, biggest2, biggest3;
	cout << "Enter 3 numbers: ";
	cin >> num1 >> num2 >> num3;
	biggest1 = largest1(num1, num2, num3);
	biggest2 = largest2(num1, num2, num3);
	biggest3 = largest3(num1, num2, num3);
	cout << "The largest numbers by nested if else is: " << biggest1 << endl;
	cout << "The largest number by compound statement is " << biggest2 << endl;
	cout << "The largest number by third method is " << biggest3 << endl;
	return 0;
}
double largest1(double v1, double v2, double v3)
{
	if (v1 > v2)
	{
		if (v1 > v3)
		{
			return v1;
		}
		else
		{
			return v3;
		}
	}
	else
	{
		if (v2 > v3)
		{
			return v2;
		}
		else
		{
			return v3;
		}
	}
}
double largest2(double var1, double var2, double var3)
{
	double largest;
	if (var1 > var2 && var1 > var3)
	{
		largest = var1;
	}
	else if (var2 > var1 && var2 > var3)
	{
		largest = var2;
	}
	else
	{
		largest = var3;
	}
	return largest;
}
double largest3(double var1, double var2, double var3)
{
	double largest;
	largest = var1;
	if (largest < var2 && var2 > var3)
	{
		largest = var2;
	}
	else if (largest < var3 && var3 > var2)
	{
		largest = var3;
	}
	return largest;
}
