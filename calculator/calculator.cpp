#include<iostream>
using namespace std;
class calculator
{
public:
	float sum(float X, float Y)    //compute addition
	{
		return(X + Y);

	}
	float minus(float X, float Y)              //compute subtraction
	{
		return(X - Y);

	}
	float  product(float X, float Y)              //compute product
	{
		return(X * Y);

	}
	float divide(float X, float Y)             //compute division
	{
		return(X / Y);

	}
};
int main()
{
	calculator c1;
	float num1, num2; char oper;
	cout << "-------------***** CALCULATOR *****-------------------" << endl;

	cout << "ENTER THE NUMBERS " << endl;
	cin >> num1;
	cin >> num2;

	cout << "ENTER THE ARTHEMETIC OPERATION " << endl;
	cin >> oper;

	if (oper == '+')
	{
		float Result = c1.sum(num1, num2);
		cout << "RESULT : " << Result << endl;


	}
	else if (oper == '-')
	{
		float Result = c1.minus(num1, num2);
		cout << "RESULT  : " << Result << endl;


	}
	else if (oper == '*')
	{
		float Result = c1.product(num1, num2);
		cout << "RESULT  : " << Result << endl;

	}
	else if (oper == '/')
	{
		float Result = c1.divide(num1, num2);
		cout << "RESULT  : " << Result << endl;

	}
	else
	{
		cout << "ERROR HAS ACCURED PLEASE TRY AGAIN  ! " << endl;
	}


	return 0;
}