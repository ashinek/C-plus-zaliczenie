#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 

{
	int a,pole=0,obwod=0;
	
	cout<<"Program obliczy pole i obwod kwadratu\n";
	cout<<"podaj dlugosc boku a=";
	cin>>a;
	pole=a*a;
	obwod=4*a;
	cout<<"pole kwadratu wynosi: "<<pole<<"\nObwod wynosi: "<<obwod;
	
	
	return 0;
}
