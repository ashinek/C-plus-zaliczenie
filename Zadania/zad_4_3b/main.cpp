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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int n,min,max,buf;
	
	cout<<"program wylosuje ile chcesz liczb, z podanego przez Ciebie przedzialu";
	loading();
	do
	{
		cout<<"\nPodaj poczatek przedzialu ";
		cin>>min;
		cout<<"\nPodaj koniec przedzialu ";
		cin>>max;
		if (min>max)
		{
			buf=min;
			min=max;
			max=buf;
		}
		cout<<"\nIle razy chcesz wylosowac liczby z przedzialu "<<min<<" do "<<max<<" :";
		cin>>n;
		cout<<endl<<endl;
		loading();
		srand(time(0));
		for (int i=0;i<n;i++)
		{
			cout<<(min+rand()%((max-min)+1))<<" ";
		}
		cout<<"\nCzy chcesz powtorzyc program?(T/N) ";
		cin>>pyt;
	}
	while(pyt=='t' || pyt=='T');
	system("Pause");
	
	return 0;
}
