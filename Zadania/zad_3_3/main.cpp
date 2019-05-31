#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int liczba;
	cout<<"Program poda slowna reprezentacje liczby ktora wybierzesz z przedzialu 0 - 10\n";
	do
	{
		cout<<"Podaj liczbe 0-10, zobaczysz jej slowna reprezentacje\n";
		cin>>liczba;
		switch(liczba)
		{
			case 0:
				cout<<liczba<<" zero.";
				break;
			case 1:
				cout<<liczba<<" jeden.";
				break;			case 2:
				cout<<liczba<<" dwa.";
				break;
			case 3:
				cout<<liczba<<" trzy.";
				break;
			case 4:
				cout<<liczba<<" cztery.";
				break;
			case 5:
				cout<<liczba<<" piec.";
				break;
			case 6:
				cout<<liczba<<" szesc.";
				break;
			case 7:
				cout<<liczba<<" siedem.";
				break;
			case 8:
				cout<<liczba<<" osiem.";
				break;
			case 9:
				cout<<liczba<<" dziewiec.";
				break;
			case 10:
				cout<<liczba<<" dziesiec.";
				break;
			default: 
				cout<<"nie podales liczby z przedzialu 0 - 10";
				break;
		}
		cout<<"\nCzy chcesz potworzyc program: ";
		cin>>pyt;
	}
	while (pyt=='T' || pyt=='t');
	return 0;
}
