#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ 
	int a=1, b, i, suma;
	char znak;
	cout <<" ===============================================================\n"
         <<"|         Program oblicza sumê kolejnych liczb                  |\n"
         <<"|      naturalnych od a=1 do b=n  wprowadzanego przez           |\n"
         <<"|             przez uzytkownika z klawiatury                    |\n"
         <<"|---------------------------------------------------------------|\n"
         <<"|                       CDV(C)2017  student                     |\n"
         <<" ===============================================================\n\n";

do
{	 
     suma=0;
     
	 cout << "Podaj liczbe b=";
	 cin >> b;
	 if (a>b)
	 cout <<"Liczba b musi byc wieksza lub rowna a"<<endl;
	 else
	 {
	 	 for (i=1 ; i<=b ; i++)
	 {
	 	 suma=suma+i;
	 }
	 cout <<"Suma kolejnych liczb naturalnych od a=1 do b="<<b<<" wynosi "<<suma<<endl;
}
	 cout << "Czy chcesz kontynuowac? [T/N] ";
     cin >> znak;
     cout <<endl;
}
    while (znak=='T' || znak=='t');         
}
