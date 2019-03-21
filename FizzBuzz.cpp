/*
Author: Syed Azmain
Program: FizzBuzz
Description: This program checks to see if numbers are divisible by 3, 5 or both. If it is divisible by 3, returns Fizz. If divisible by 5, returns Buzz. If divisible by both 3 and 5
then returns FizzBuzz. Lastly, if it is not divisible by either numbers then returns just the number.

Copyright © 2018 Syed Azmain
*/
#include <iostream>
#include <string>

using namespace std;

void welcome (void);
int return_num();
void fizzBuzz_check(int);
void legend(void);
void dotted_lines(void);

int main () 
{
	welcome();
	
	int num;
	num = return_num();
	
	dotted_lines();
	fizzBuzz_check(num);
	dotted_lines();
	
	legend();
	return 0;
}
void welcome () 
{
	cout << "*****************************************  Welcome to FizzBuzz V1.0  *******************************************" << endl;
}
int return_num ()
{
	int n;
	cout << "Enter amount of numbers to check for FizzBuzz: ";
	cin >> n;
	
	return n;
}
void fizzBuzz_check(int n)
{
	if(n<0)
	{
		cout << "num cannot be negative!" << endl;
		return_num();
	}
	while(n>0)
	{
	
		for (int i=1; i<=n; i++)
		{
			string fb = "";
			
    			if (i%3 == 0){fb += "Fizz";}
    			if (i%5 == 0){fb += "Buzz";}
    			if (fb == ""){fb = to_string(i);}

    			cout << fb << endl;
		}
	}
}
void legend () 
{
	cout << endl;
	cout << "Legend:" << endl;
	cout << "** Fizz = divisible by 3 **" << endl;
	cout << "** Buzz = divisible by 5 **" << endl;
	cout << "** FizzBuzz = divisible by both 3 and 5 **" << endl;
	cout << "** Value = neither **" << endl;
}
void dotted_lines() 
{
	cout << "-------------------------------------------------" << endl;
}
