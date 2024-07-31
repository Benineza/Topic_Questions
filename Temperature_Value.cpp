#include <iostream>
using namespace std;
int main()
{
int temp;

cout<<"Enter the temperature value:";
cin>>temp;
if(temp<0)
{
	cout<<"Temperature is below freezing point";
}
else if(temp>100)
{
	cout<<"Above boiling point";
}
else
{
	cout<<"Normal temperature range";
}
}
