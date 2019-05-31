#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int min,max,liczba,buf;
	do
	{
		cout<<"Podaj przedzial liczb jaki Cie interesuje, a nastepne liczbe, ktora chcesz sprawdzic.\n Program sprawdzi czy nalezy ona do przedzialu ktory podales";
		cout<<"\nPodaj liczbe rozpoczynajaca przedzial jaki Cie interesuje: ";
		cin>>min;	
		do
		{
			cout<<"\nPodaj liczbe konczaca przedzial jaki Cie interesuje: ";
			cin>>max;
		}
		while(max==min);
		if (min>max)
		{
			buf=min;
			min=max;
			max=buf;
		}
		do
		{
			cout<<"\nPodaj liczbe jaka chcesz sprawdzic: ";
			cin>>liczba;
			if (liczba>=min)
			{
				if (liczba<=max)
				{
					cout<<"\nLiczba znajduje sie przedziale jaki podales";
				}
				else
				{
					cout<<"\nLiczba wychodzi ponad przedzial ktory podales";
				}
			}
			else
			{
				cout<<"\nLiczba jest ponizej przedzialu jaki podales";
			}
			cout<<"\nCzy chcesz sprawdzic kolejna liczbe?(T/N)) ";
			cin>>pyt;
		}
		while(pyt=='t' || pyt=='T');
		cout<<"Czy chcesz podac nowy przedzial i sprawdzic nowa liczbe?(T/N) ";
		cin>>pyt;
	}	
	while(pyt=='t' || pyt=='T');
	cout<<"\nDziekuje za skorzystanie z programu";
	return 0;
}
