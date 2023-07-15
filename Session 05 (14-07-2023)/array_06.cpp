#include <iostream>
using namespace std;

int main ()
{
	int numbers[] = {2, 3, 4, 5, 6, 7};
	int  odd_total = 0, even_total = 0;
	
	for(int i = 0; i < 6; i++)
	{
		if (numbers[i] % 2 == 0)
    	{
        even_total = even_total + numbers[i];
    	}
    	else
    	{
        odd_total = odd_total + numbers[i];
    	}
    
	}
	cout <<  "Odd Total: " << odd_total << endl << "Even Total: " << even_total;
	
	return 0;	
}
