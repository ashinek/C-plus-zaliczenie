#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

void loading()
{
	HANDLE hOut;
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
	int k;
	
	for (int n=0; n<26;n++)
	{
		system("cls");
		cout<<"\n\n\n...::Trwa generowanie liczb::...\n\n\n";
		for (k=1;k<n;k++)
		{
			SetConsoleTextAttribute( hOut, FOREGROUND_RED );
			cout<<(char)219;
			SetConsoleTextAttribute( hOut, FOREGROUND_RED );
		}
		for (k=1;k<25-n;k++)
		{
			SetConsoleTextAttribute( hOut, 15 );
			cout<<(char)177;
		}
		cout<<n*4<<"%";
		Sleep(500);
	}
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	HANDLE hOut;
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
	char pyt;
	int n,min,max,buf;
	
	cout<<"program wylosuje ile chcesz liczb, z podanego przez Ciebie przedzialu";
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
		SetConsoleTextAttribute( hOut, 15 );
		cout<<endl<<endl;
		srand(time(0));
		for (int i=0;i<n;i++)
		{
			cout<<(min+rand()%((max-min)+1))<<" ";
		}
		cout<<"\nCzy chcesz powtorzyc program?(T/N) ";
		cin>>pyt;
		system("cls");
	}
	while(pyt=='t' || pyt=='T');
	system("Pause");
	
	return 0;
}
