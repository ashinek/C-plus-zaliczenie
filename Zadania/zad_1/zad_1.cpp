#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) 
{
	int a=1, b, suma=0,sumasek=0,sumawhile=0,sumado=0;
	cout<<"Program obliczy sume kolejnych liczb naturalnych od poz. 1 do pozycji ktora podasz\n"<<"Podaj do ktorej liczby chcesz sumowac ciag:";
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		suma=suma+i;
	}
	sumasek=(b*(b+1))/2;
	cout<<"\nProgram obliczy to na dwa sposoby: iteracyjny i sekwencyjny:";
	cout<<"\nSposob pierwszy iteracyjny: Suma kolejnych liczb naturalnych od 1 do "<<b<<" wynosi: "<<suma;
	cout<<"\nSposob pierwszy sekwencyjny(za pomoca wzoru (n(n+1))/2): Suma kolejnych liczb naturalnych od 1 do "<<b<<" wynosi: "<<sumasek;
	
	cout<<"\nTo samo za pomoca While: ";
	int i=1;
	while (i<b+1)
	{
		sumawhile=sumawhile+i;
		i++;
	}
	
	cout<<"\nSuma podanych liczb obliczona przez petle while wynosi: "<<sumawhile;
	
	cout<<"\nTo samo za pomoca do-While: ";
	i=1;
	do
	{
		sumado=sumado+i;
		i++;
	}
	while(i<=b);
	cout<<"\nSuma podanych liczb obliczona przez petle do-while wynosi: "<<sumado;
	
	return 0;
}
