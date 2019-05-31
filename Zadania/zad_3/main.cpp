#include <iostream>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 


{
	char pyt;
	do
	{
		int a,b,suma=0,buf=0;
		double arytm=0;
		cout<<"program obliczy sume kwadratow kolejnych liczb z przedzialu ktory podasz. Poda takze ich srednia arytmetyczna\n";
		cout<<"podaj liczbe od ktorej chcesz rozpoczac zliczanie sumy kwadratow: ";
		cin>>a;
		cout<<"\nPodaj liczbe na której chcesz zakonczyc obliczenia: ";
		cin>>b;
		if (a>b)
		{
			buf=a;
			a=b;
			b=buf;
		}
		for (int i=a;i<=b;i++)
		{
			suma=suma+i*i;
			arytm=arytm+i;
		}
		arytm=arytm/(b-a+1);
		cout<<"\nSuma kwadratów kolejnych liczb naturalnych z podanego przedzia³u wynosi: "<<suma;
		cout<<"\nSerdnia arytmetyczna podanego przez Ciebie przedzialu wynosi: "<<arytm;
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
