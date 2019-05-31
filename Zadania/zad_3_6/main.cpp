#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int a,n;
	cout<<"Program obliczy potege o podanej podstawie i stopniu.\n";
	do
	{
		cout<<"podaj podstawe potegi: ";
		cin>>a;
		cout<<"do ktorej potego chcesz podniesc liczbe: "<<a<<": ";
		cin>>n;
		if (n>0)
		{
			cout<<"wynikiem potegowania: "<<a<<"^"<<n<<" jest: "<<pow(a,n);
		}
		else 
		{
			cout<<"podaj dodatni wykladnik potegi!\n";
		}
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
