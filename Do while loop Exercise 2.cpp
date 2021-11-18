
//  137533 Kelvin Lemanta
//  Do while loop to get sum of numbers between 20 to 25

#include <iostream>
using namespace std;

int main ()
{
	int counter = 20;
	int sum = 0;
	
	do 
	{
		sum+=counter;
		counter++;
	}
	while (counter<=25);
	
	cout<<"sum is:"<<sum;
	return 0;
}
