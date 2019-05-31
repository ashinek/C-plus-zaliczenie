#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int liczba, buf;
	cout<<"Program sprawdzi parzystosc podanej przez Ciebie liczby";
	do
	{
		cout<<"\nPodaj liczbe jaka chcesz sprawdzic: ";
		cin>>liczba;
		buf=liczba;
		if (liczba<0)
		{
			do
			{
				buf=buf+2;
			}
			while (buf<0);
		}
		else
		{
			do
			{
				buf=buf-2;

			}
			while (buf>1);
		}
		if(buf==0)
		{
			cout<<"liczba jest parzysta.";
		}
		else
		{
			cout<<"liczba jest nieparzysta.";
		}
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
