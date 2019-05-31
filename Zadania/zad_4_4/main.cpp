#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;
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
	cout<<"Let's play the game!";
	cout<<"\nSprobuj zgadnac liczbe, ktora wylosuje dla Ciebie za pomoca rzutu koscia";
	cout<<"\nIloma koscmi mam rzucic? Jedna? Dwiema? Czy trzema? ";
	cin>>ile;
	switch(ile)
	{
		case 1:
			a=jedenRzut();
			cout<<a;
		case 2:
			a=dwaRzuty();
		case 3:
			a=trzyRzuty();
	}
	
	do
	{
		cout<<"\nJaka liczbe wylosowalem?   ";
		cin>>liczba;
		licznik++;
		cout<<a;
		if(liczba>a)
		{
			cout<<"\nLiczba jest za duza, podaj mniejsza";
		}
		if (liczba<a)
		{
			cout<<"\nLiczba jest zbyt mala, podaj wieksza";
		}
		else
		{
			cout<<"\nZgadles brawo!!!"<<"\nProbowales: "<<licznik<<" razy";
		}
	}
	while(a!=liczba);
	return 0;
}
