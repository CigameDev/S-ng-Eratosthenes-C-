#include<iostream>
using namespace std;

bool PrimeNumber[10000];

void Setting(bool PrimeNumber[]);
int main()
{
	Setting(PrimeNumber);
	for (int i = 2; i < 10000; i++)
	{
		if (PrimeNumber[i] == true)
		{
			cout << i << "   ";
		}
	}
	return 0;
}
void Setting(bool PrimeNumber[])
{
	for (int i = 2; i < 10000;i++)
	{
		PrimeNumber[i] = true;
	}
	
	for (int i = 2; i <=10000/2; i++)
	{
		for (int j = 2*i; j <10000; j+=i)
		{
			
			PrimeNumber[j] = false;
		}
	}
	
	
}
 