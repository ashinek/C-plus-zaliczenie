#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;
void loading()
{
	int dlugosc=33,k;
	cout<<"\n\n\n...::Trwa generowanie liczb::...\n\n\n";
	for (k=1;k<dlugosc;k++)
	{
		cout<<(char)219;
		Sleep(500);
	}
}
int jedenRzut()
{
	int wynik;
	srand(time(0));
	wynik=(1+rand()%6);
	return wynik;
}
int dwaRzuty()
{
	int wynik;
	srand(time(0));
	wynik=(1+rand()%6)+(1+rand()%6);
	return wynik;
}
int trzyRzuty()
{
	int wynik;
	srand(time(0));
	wynik=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	return wynik;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,liczba,ile,licznik;
	char pyt;
	cout<<"Let's play the game!";
	cout<<"\nSprobuj zgadnac liczbe, ktora wylosuje dla Ciebie za pomoca rzutu koscia";
	do
	{
		cout<<"\nIloma koscmi mam rzucic? Jedna? Dwiema? Czy trzema? ";
		cin>>ile;
		switch(ile)
		{
			case 1:
				a=jedenRzut();
				loading();
				break;
			case 2:
				a=dwaRzuty();
				loading();
				break;
			case 3:
				a=trzyRzuty();
				loading();
				break;
		}
		licznik=0;
		do
		{
			cout<<"\n\n\nJaka liczbe wylosowalem?   ";
			cin>>liczba;
			licznik++;
			if(liczba>a)
			{
				cout<<"\nLiczba jest za duza, podaj mniejsza";
			}
			if (liczba<a)
			{
				cout<<"\nLiczba jest zbyt mala, podaj wieksza";
			}
			if (liczba==a)
			{
				cout<<"\nZgadles brawo!!!"<<"\nProbowales: "<<licznik<<" razy";
			}
		}
		while(a!=liczba);
		cout<<"\nCzy chcesz zagrac jeszcze raz? ";
		cin>>pyt;
	}
	while(pyt=='t' || pyt=='T');
	system("Pause");
	return 0;
}
