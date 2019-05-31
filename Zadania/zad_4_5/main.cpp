#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int aa,ba,ca,ab,bb,cb,w,wx,wy,x,y;
	char pyt;
	cout<<"Program policzy za pomoca wyznacznikow rozwiazanie ukladu rownan";
	cout<<"\nDla przypomnienia rownanie oznaczamy nastepujaco: a*x+b*y=c";
	do
	{
		cout<<"\nPodaj wartosci dla pierwszego rownania:";
		do
		{
			cout<<"\na1 rozne od zera: ";
			cin>>aa;
		}
		while(aa==0);
		do
		{
			cout<<"b1 rozne od zera: ";
			cin>>ba;
		}
		while(ba==0);
		cout<<"c1 =";
		cin>>ca;
		cout<<"Pierwsze rownanie ma postac: "<<aa<<"x + "<<ba<<"y = "<<ca;
	
		cout<<"\nPodaj wartosci dla drugiego rownania:";
		do
		{
			cout<<"\na2= ";
			cin>>ab;
		}
		while(ab==0);
		do
		{
			cout<<"b2= ";
			cin>>bb;
		}
		while(bb==0);
		cout<<"c2 =";
		cin>>cb;
		cout<<"Pierwsze rownanie ma postac: "<<ab<<"x + "<<bb<<"y = "<<cb;
	
		cout<<"\nNa poczatku policzymy wyznaczniki:";
		w=(aa*bb)-(ba*ab);
		wx=(ca*bb)-(ba*cb);
		wy=(aa*cb)-(ca*ab);
		cout<<"\n\nW= "<<w<<" Wx= "<<wx<<" Wy= "<<wy;
		//warunek liczenia
		if(w!=0)
		{
			x=wx/w;
			y=wy/w;
			cout<<"\n\nUklad jest oznaczony: x= "<<x<<" y= "<<y;
		}
		else if(wx==0 && wy==0 && wy==0)
		{
			cout<<"\n\nUklad rownan jest nieoznaczony";
		}
		else if (x==0 && (wx!=0 || wy!=0))
		{
			cout<<"\n\nUklad rownan jest sprzeczny";
		}
		cout<<"\n\n\nCzy chcesz powtorzyc program?(T/N): ";
		cin>>pyt;
	}
	while(pyt=='t' || pyt=='T');
	
	
	return 0;
}
