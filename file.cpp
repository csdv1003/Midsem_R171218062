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
		
};
int main()
{
	calc obj;
	cout<<"Enter two digits to perform binary operations:";
	cin>>obj.a>>obj.b;	
	int sum;
	sum=obj.add();
	cout<<"sum:"<<sum<<endl;
	return 0;
}
