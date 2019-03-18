#include<iostream>
using namespace std;
class calc
{
	public:
		int x,y;
		int add()
		{
			int sum;
			sum=x+y;
			return sum;
		}
		int substract()
		{
			int z;
			z=x-y;
			return z;
		}
		int multiply()
		{
			int mul;
			mul=x*y;
			return mul;
		}
		int division()
		{
			int div;
			div=x/y;
			return div;
		}
};
int main()
{
	calc obj;
	cout<<"Enter two digits to perform binary operations:";
	cin>>obj.a>>obj.b;	
	int sum,difference,multiply,division;
	int choice;
	cout<<"Enter your choice: 1.Addition 2.Substraction 3.Multiplication 4.Division";
	cin>>choice;
	switch(choice)
	{
		case 1:sum=obj.add();
                       cout<<"sum:"<<sum<<endl;
                       break;  	
	        case 2:difference=obj.substract();
		       cout<<"Difference is:"<<difference<<endl;
		       break;
		case 3:multiply=obj.multiply();
		       cout<<"Product is:"<<multiply<<endl;
		       break;
		case 4:division=obj.division();
		       cout<<"Divide is:"<<division<<endl;
		       break;
	       default:cout<<"Enter right choice";
	}
	return 0;
}
