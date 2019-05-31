#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 

{
	int i=1;
	for (i;i<255;i++)
	{
		cout<<i<<": "<<char(i)<<" \n";
	}
	return 0;
}
