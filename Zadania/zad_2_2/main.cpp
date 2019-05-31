#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char pyt;
	int sg,lg,ng,pp,wyplata,roczna,podatek,miesiac;
	string stawka;
	cout<<"Program obliczy wyplate pracownika, uwgledniajac ilosc godzin i stawke za nie";
	do
	{
		cout<<"\nPodaj stawke godzinowa pracownika: ";
		cin>>sg;
		cout<<"\nPodaj ilosc przepracowanych godzin: ";
		cin>>lg;
		if (lg>42)
		{
			ng=lg-42;
			pp=42*sg;
			wyplata=pp+(ng*2*sg);
			cout<<"Pracownik otrzymal: "<<pp<<" oraz wyrobil "<<ng<<"nadgodzin. Pelne wynagrodzenie wynosi "<<wyplata;
		}
		else
		{
			pp=lg*sg;
			wyplata=pp;
			cout<<"\nWyplata tego pracownika po tygodniu wynosi: "<<wyplata;
		}
		cout<<"\nCzy chcesz obliczyæ wyplate za caly miesiac?: ";
		cin>>pyt;
		
		if (pyt=='T' || pyt=='t')
		{
			cout<<"\nWyplata za caly miesiac wynosi: "<<wyplata*4;
		}
		cout<<"\nCzy chcesz obliczyæ wynagrodzenie roczne, oraz podsumowanie podatkowe dla tego pracownika? ";
		cin>>pyt;		
		{
			roczna=wyplata*52;
			if (roczna<20000)
			{
				podatek=roczna*0.19;
				stawka="19%";
			}
			else if (roczna<30000)
			{
				podatek=roczna*0.21;
				stawka="21%";
			}
			else
			{
				podatek=roczna*0.28;
				stawka="28%";
			}
			cout<<"\nPracownik w przeciagu roku zarobi: "<<roczna<<" W skali roku podatek wyniosl: "<<podatek<<"\nW ciagu roku pracownik na reke otrzymal: "<<roczna-podatek<<"\nPrzy stawce podatkowej: "<<stawka;
		}
		cout<<"\nCzy potworzyc program? T/N: ";
		cin>>pyt;
	}
	while (pyt == 'T' || pyt == 't');
	return 0;
}
