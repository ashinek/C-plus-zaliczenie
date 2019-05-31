#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int a,b,c,buf;
	
	cout<<"program poprosi o podanie 3 liczb i posortuje je w odpowiedniej kolejnosci.\n";
	
	do
	{
		cout<<"podaj pierwsza liczbe: ";
		cin>>a;
		cout<<"\npodaj druga liczbe: ";
		cin>>b;
		cout<<"\npodaj druga liczbe: ";
		cin>>c;
		
		if (a>b)
		{
			buf=a;
			a=b;
			b=buf;
		}
		if (b>c)
		{
			buf=b;
			b=c;
			c=buf;
		}
		if (a>c)
		{
			buf=a;
			a=c;
			c=buf;
		}
		if (a>b)
		{
			buf=a;
			a=b;
			b=buf;
		}

		cout<<"\nPodane liczby od najmniejszej do najwiekszej to: "<<a<<" "<<b<<" "<<c;
		
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
