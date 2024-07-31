#include <iostream>
using namespace std;
int main() 
{
int myArray[3]={23,32,40};
int max=myArray[0];
int min=myArray[0];
for(int i=0 ;i<3;i++)
{
	if(myArray[i]>max)
	{
	max=myArray[i];
	}
	if(myArray[i]<min)
	{
		min=myArray[i];
	}
}
cout<<"the maximum element "<<max<<endl;
cout<<"the minimum elemennt "<<min;
}
