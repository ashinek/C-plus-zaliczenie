#include <iostream>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	cout<<"Program sprawdzi czy podana przez Ciebie liczba jest dodatnia, ujemna, lub rowna zeru i informuje o tym\n";
	int a;
	do
	{
		cout<<"Podaj liczbe, ktora chcesz sprawdzic: ";
		cin>>a;
		if(a>0)
		{
			cout<<"liczba jest dodatnia";
		}
		else if (a==0)
		{
			cout<<"Liczba jest rowna zeru";
		}
		else
		{
			cout<<"Liczba jest ujemna";
		}
		cout<<"\nCzy chcesz ponownie uruchomic program? T/N: ";
		cin>>pyt;
	}
	while (pyt=='T' || pyt=='t');
	return 0;
}
