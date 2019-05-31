#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	cout<<"Program wyswietli wszystkie znaki ASCII, przypisujac je do konkretnych wartosci liczbowych:\n";
	char ascii;
	for (int i=0;i<256;i++)
	{
		ascii=i;
		cout<<i<<" = "<<ascii<<" | ";
		if (i>0 && i % 5 == 0)
		{
			cout<<endl;
		}
	}
	return 0;
}
