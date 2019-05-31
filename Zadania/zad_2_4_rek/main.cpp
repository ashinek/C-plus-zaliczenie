#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	 unsigned long long silnia (unsigned long long sil)
	{
		if (sil==0) 
		{
			return 1;
		}
		else 
		{
			return sil*silnia(sil-1);
		}
	}
int main(int argc, char** argv) 

{
	char pyt;
	unsigned long long n;
	cout<<"Program za pomoca rekurencji obliczy silnie podanej przez Ciebie liczby.\n";
	do
	{
		cout<<"Podaj liczbe dla jakiej chcesz obliczyc silnie: ";
		cin>>n;
		cout<<"\n"<<n<<"!="<<silnia(n);
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
