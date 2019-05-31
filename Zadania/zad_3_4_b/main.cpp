#include <iostream>
#include <cstdlib>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int a,n,potega;
	cout<<"Program podniesie wybrana przez Ciebie liczbe do podanej potegi naturalnej.";
	do
	{
		cout<<"\nPodaj podstawe potegi: ";
		cin>>a;
		cout<<"\ndo ktorej potegi chcesz podniesc liczbe "<<a<<": ";
		cin>>n;
		cout<<"Program podniesie liczbe: "<<a<<"do potegi: "<<n;
		potega=a;
		if (n==0)
		{
			potega=1;
		}
		else
		{
		
			for (int i=1;i<n;i++)
			{
				potega=potega*a;
			}
		}
		cout<<"\n"<<a<<"^"<<n<<"="<<potega;
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	
	while (pyt == 'T' || pyt == 't');
	
	return 0;
}
