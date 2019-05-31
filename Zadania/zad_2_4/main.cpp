#include <iostream>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) 

{

	char pyt;
	cout<<"Program obliczy silnie liczby ktora podasz.";
	unsigned long long a,i,n;
	do
	{
		n=1;
		cout<<"Podaj liczbe od ktorej chcesz obliczyc silnie: n= ";
		cin>>a;
		if (a>0)
		{
			for (i=1;i<=a;i++)
			{
				n=n*i;
			}
		}
		cout<<"\n\nSilnia "<<a<<"! wynosi: "<<n;
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
