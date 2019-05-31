#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i=1;
	cout<<"Program symuluje 20krotny rzut koscia k6\n"<<"Niestety losuje te same liczby\n";
	srand(time(0));
	for(;i<21;i++)
	{
		cout<<(1+rand()%6)<<", ";
	}
	return 0;
}
