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
	int n;
	
	
	do
	{
		srand(time(0));
		cout<<"\nIle razy chcesz wylosowac liczby z przedzialu 0 - 100?: ";
		cin>>n;
		for (int i=0;i<n;i++)
		{
			cout<<(rand()%100)<<" ";
		}
		cout<<"\nCzy chcesz powtorzyc program?(T/N) ";
		cin>>pyt;
	}
	while(pyt=='t' || pyt=='T');
	return 0;
}
