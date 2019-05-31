#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include <fstream>
using namespace std;
void pieniadze()
{
system("cls");
cout<<"\n##################################################\n";
cout<<"#------------------------------------------------#\n";
cout<<"#-----------Prosz"<<char(169)<<"-wrzucac-dop"<<char(139)<<"ki-nie------------#\n";
cout<<"#--------------nie-pokryjesz-kosztu--------------#\n";
cout<<"#-------------------zam"<<char(139)<<"wienia-------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#-------------------1)-0.10----------------------#\n";
cout<<"#-------------------2)-0.20----------------------#\n";
cout<<"#-------------------3)-0.50----------------------#\n";
cout<<"#-------------------4)-1.00----------------------#\n";
cout<<"#-------------------5)-2.00----------------------#\n";
cout<<"#-------------------6)-5.00----------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"##################################################\n";
}
void kawa()
{
system("cls");
cout<<"\n##################################################\n";
cout<<"#-------------------------------------##-#-------#\n";
cout<<"#------------------Wybierz-kaw"<<char(169)<<"------#-##--#-----#\n";
cout<<"#---------------na-jak"<<char(165)<<"-masz-ochot"<<char(169)<<"-##--###------#\n";
cout<<"#----------------------------------#---##--------#\n";
cout<<"#-1-cappucino--------6.50---------#---##---------#\n";
cout<<"#-2-espresso---------3.00-------#############----#\n";
cout<<"#-3-rozpuszczalna----4.00--------#|||||||||#-----#\n";
cout<<"#-4-mocha------------6.00--------#|||||||||#-----#\n";
cout<<"#-5-lungo------------8.00---------#|||||||#------#\n";
cout<<"#-6-herbata----------3.00---------#|||||||#------#\n";
cout<<"#-7-sok-pomaranczowy-2.50---------#|||||||#------#\n";
cout<<"#-8-goraca-czekolada-4.50---------#|||||||#------#\n";
cout<<"#-9-wrzatek----------1.00----------#######-------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"##################################################\n";

}
void kasa()
{
system("cls");
cout<<"\n##################################################\n";
cout<<"#------------------------------------------------#\n";
cout<<"#-----------Prosz"<<char(169)<<"-wrzucac-dop"<<char(139)<<"ki-nie------------#\n";
cout<<"#--------------nie-pokryjesz-kosztu--------------#\n";
cout<<"#-------------------zam"<<char(139)<<"wienia-------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#-------------------1)-0.10----------------------#\n";
cout<<"#-------------------2)-0.20----------------------#\n";
cout<<"#-------------------3)-0.50----------------------#\n";
cout<<"#-------------------4)-1.00----------------------#\n";
cout<<"#-------------------5)-2.00----------------------#\n";
cout<<"#-------------------6)-5.00----------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"##################################################\n";

}

void mleko()
{
system("cls");
cout<<"\n##################################################\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#--------------Czy-dodac-mleka-------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#-----------------do-napoju?---------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------T(1)/N(2)---------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"##################################################\n";
}

void cukier()
{
system("cls");
cout<<"\n##################################################\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#--------------Czy-dodac-cukier------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#-----------------do-napoju?---------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------T(1)/N(2)---------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"#------------------------------------------------#\n";
cout<<"##################################################\n";
}

void kawaloading()
{
	//umozliwienie zmiany kolorow
	HANDLE kolor;
	kolor = GetStdHandle( STD_OUTPUT_HANDLE );
	//pierwsze pojawienie sie kawki
	system("cls");
	SetConsoleTextAttribute( kolor, 4);
	cout<<"\n##################################################\n";
	cout<<"#";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"---------------..::Please Wait::..--------------";
	SetConsoleTextAttribute( kolor, 4);
	cout<<"#\n";
	cout<<"##################################################\n";
		SetConsoleTextAttribute( kolor, 15);
	cout<<"##################################################\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------####################################------#\n";
	cout<<"#------#----------------------------------#------#\n";
	cout<<"#-------#--------------------------------#-------#\n";
	cout<<"#--------#------------------------------#--------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------####------#\n";
	cout<<"#---------#----------------------------#---#-----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#---#-----#\n";
	cout<<"#----------#--------------------------#----#-----#\n";
	cout<<"#----------#-------------------------#####-------#\n";
	cout<<"#------------#----------------------#------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------#------------------#--------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"##################################################\n";
	Sleep(1000);
	
		//drugie pojawienie sie kawki

//drugie
	system("cls");
	SetConsoleTextAttribute( kolor, 4);
	cout<<"\n##################################################\n";
	cout<<"#";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"---------------..::Please Wait::..--------------";
	SetConsoleTextAttribute( kolor, 4);
	cout<<"#\n";
	cout<<"##################################################\n";
		SetConsoleTextAttribute( kolor, 15);
	cout<<"##################################################\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------####################################------#\n";
	cout<<"#------#----------------------------------#------#\n";
	cout<<"#-------#--------------------------------#-------#\n";
	cout<<"#--------#------------------------------#--------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------####------#\n";
	cout<<"#---------#----------------------------#---#-----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#---#-----#\n";
	cout<<"#----------#--------------------------#----#-----#\n";
	cout<<"#----------#-------------------------#####-------#\n";
	
	//dziwy
	cout<<"#------------#";
	SetConsoleTextAttribute( kolor,9  | FOREGROUND_INTENSITY);
	cout<<"######################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#------------#\n";
	cout<<"#-------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"####################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#-------------#\n";
	cout<<"#--------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#--------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"##################################################\n";
	Sleep(1000);
	
//trzecie
	system("cls");
	SetConsoleTextAttribute( kolor, 4);
	cout<<"\n##################################################\n";
	cout<<"#";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"---------------..::Please Wait::..--------------";
	SetConsoleTextAttribute( kolor, 4);
	cout<<"#\n";
	cout<<"##################################################\n";
		SetConsoleTextAttribute( kolor, 15);
	cout<<"##################################################\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------####################################------#\n";
	cout<<"#------#----------------------------------#------#\n";
	cout<<"#-------#--------------------------------#-------#\n";
	cout<<"#--------#------------------------------#--------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------####------#\n";
	cout<<"#---------#----------------------------#---#-----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	cout<<"#---------#----------------------------#----#----#\n";
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"#########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#####-------#\n";
	
	//dziwy
	cout<<"#------------#";
	SetConsoleTextAttribute( kolor,9  | FOREGROUND_INTENSITY);
	cout<<"######################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#------------#\n";
	cout<<"#-------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"####################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#-------------#\n";
	cout<<"#--------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#--------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"##################################################\n";
	Sleep(1000);
	
	//czwarte
	system("cls");
	SetConsoleTextAttribute( kolor, 4);
	cout<<"\n##################################################\n";
	cout<<"#";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"---------------..::Please Wait::..--------------";
	SetConsoleTextAttribute( kolor, 4);
	cout<<"#\n";
	cout<<"##################################################\n";
		SetConsoleTextAttribute( kolor, 15);
	cout<<"##################################################\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------####################################------#\n";
	cout<<"#------#----------------------------------#------#\n";
	cout<<"#-------#--------------------------------#-------#\n";
	cout<<"#--------#------------------------------#--------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------#---------#\n";
	cout<<"#---------#----------------------------####------#\n";
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"#########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#####-------#\n";
	
	//dziwy
	cout<<"#------------#";
	SetConsoleTextAttribute( kolor,9  | FOREGROUND_INTENSITY);
	cout<<"######################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#------------#\n";
	cout<<"#-------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"####################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#-------------#\n";
	cout<<"#--------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#--------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"##################################################\n";
	Sleep(1000);
	
	
		//piate
	system("cls");
	SetConsoleTextAttribute( kolor, 4);
	cout<<"\n##################################################\n";
	cout<<"#";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"---------------..::Please Wait::..--------------";
	SetConsoleTextAttribute( kolor, 4);
	cout<<"#\n";
	cout<<"##################################################\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"##################################################\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------####################################------#\n";
	cout<<"#------#----------------------------------#------#\n";
	cout<<"#-------#--------------------------------#-------#\n";
	cout<<"#--------#------------------------------#--------#\n";
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";	
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"####------#\n";
	
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"#########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#####-------#\n";
	
	//dziwy
	cout<<"#------------#";
	SetConsoleTextAttribute( kolor,9  | FOREGROUND_INTENSITY);
	cout<<"######################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#------------#\n";
	cout<<"#-------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"####################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#-------------#\n";
	cout<<"#--------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#--------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"##################################################\n";
	Sleep(1000);


}

int main(int argc, char** argv) 

{
	remove("paragon.txt");
	ofstream plik;
	plik.open("paragon.txt");
	
	//umozliwienie zmiany kolorow w programie glownym
	HANDLE kolor;
	kolor = GetStdHandle( STD_OUTPUT_HANDLE );
	bool mlekoT=false,cukierT=false;
	int kawaW, pieniadzeW,monety;
	string kawajaka=" ";
	float suma=0.00,zaplata,reszta;
	char wybor, koniec='t';
do
{
	SetConsoleTextAttribute( kolor, 15);
	suma=0.00;
	reszta=0.00;
	reszta=0.00;
	cukierT=false;
	mlekoT=false;
	
	do
	{
		SetConsoleTextAttribute( kolor, 15);
		kawa();
		do
		{
			cout<<"Wybierz napoj";
			cin>>kawaW;
					while (cin.fail())
    		{
        		cin.clear(); // nie bede ukrywal wyrylem to w necie i dziala...
        		cin.ignore(INT_MAX, '\n'); // i nie wime czy chce wiedziec dlaczego... wazne ze dziala!
        		cout << "Nie wybrales programu! \nWybierz ponownie:";
        		cin >> kawaW;
    		}
		}
		while (kawaW>9 || kawa<0 );
		cout<<"\nCzy jeste"<<char(152)<<" pewny?(T/N):";
		switch(kawaW)
		{
			case 1:
				{
					kawajaka="Cappucino";
					zaplata=6.50;
					break;
				}
			case 2:
				{
					kawajaka="Espresso";
					zaplata=3.00;
					break;
				}
			case 3:
				{
					kawajaka="Rozpuszczalna";
					zaplata=4.00;
					break;
				}
			case 4:
				{
					kawajaka="Mocha";
					zaplata=6.00;
					break;
				}
			case 5:
				{
					kawajaka="Lungo";
					zaplata=8.00;
					break;
				}
			case 6:
				{
					kawajaka="Herbata";
					zaplata=3.00;
					break;
				}
			case 7:
				{
					kawajaka="Sok Pomaranczowy";
					zaplata=2.50;
					break;
				}
				case 8:
				{
					kawajaka="Goraca Czekolada";
					zaplata=4.50;
					break;
				}
				case 9:
				{
					kawajaka="Wrzatek";
					zaplata=1.00;
					break;
				}
				default:
				{
					cout<<"Nie wybra"<<char(136)<<"es zadnego napoju";
				}
		}
		cin>>wybor;
	}
	while (wybor == 'n' || wybor== 'N');
	
	mleko();
	cin>>wybor;
	if (wybor=='T' || wybor=='t')
	{
		mlekoT=true;
	}
	cukier();
	cin>>wybor;
	if (wybor=='T' || wybor=='t')
	{
		cukierT=true;
	}
	
	do
	{
		pieniadze();
		do
		{
			cout<<"Aktualnie wrzuciles: "<<suma<<" Brakuje:"<<zaplata-suma<<"\nWrzuc kolejna monete: ";
			cin>>monety;
			while (cin.fail())
    		{
        		cin.clear(); // nie bede ukrywal wyrylem to w necie i dziala...
        		cin.ignore(INT_MAX, '\n'); // i nie wime czy chce wiedziec dlaczego... wazne ze dziala!
        		cout << "Nie wrzuciles monety! \nWrzuc monete: ";
        		cin >> monety;
    		}
    	}
		while (monety>6 || monety<0 );
		switch(monety)
		{
			case 1:
				{
					suma=suma+0.10;
					break;
				}
			case 2:
				{
					suma=suma+0.20;
					break;
				}
			case 3:
				{
					suma=suma+0.50;
					break;
				}
			case 4:
				{
					suma=suma+1.00;
					break;
				}
			case 5:
				{
					suma=suma+2.00;
					break;
				}
			case 6:
				{
					suma=suma+5.00;
					break;
				}
		}
	}
	while(suma<zaplata);
	kawaloading();
	reszta=suma-zaplata;
	
	
		system("cls");
	SetConsoleTextAttribute( kolor, 4);
	cout<<"\n##################################################\n";
	cout<<"#";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"---------------..::Please Wait::..--------------";
	SetConsoleTextAttribute( kolor, 4);
	cout<<"#\n";
	cout<<"##################################################\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"##################################################\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------------------------------------------------#\n";
	cout<<"#------####################################------#\n";
	cout<<"#------#----------------------------------#------#\n";
	cout<<"#-------#--------------------------------#-------#\n";
	cout<<"#--------#------------------------------#--------#\n";
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";	
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"####------#\n";
	
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);	
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#----#\n";
	
	
	//dziwy
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"############################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#---#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----#-----#\n";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#----------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"#########################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#####-------#\n";
	
	//dziwy
	cout<<"#------------#";
	SetConsoleTextAttribute( kolor,9  | FOREGROUND_INTENSITY);
	cout<<"######################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#------------#\n";
	cout<<"#-------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"####################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#-------------#\n";
	cout<<"#--------------#";
	SetConsoleTextAttribute( kolor, 9);
	cout<<"##################";
	SetConsoleTextAttribute( kolor, 15);
	cout<<"#--------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"#-------------#--------------------#-------------#\n";
	cout<<"#--------------####################--------------#\n";
	cout<<"##################################################\n";
	
	
	if (cukierT==true)
	{
		if (mlekoT==true)
		{
			cout<<"Prosz"<<char(169)<<" odebrac zam"<<char(139)<<"wienie: "<<kawajaka<<"z mlekiem i cukrem. Prosz"<<char(169)<<" odebrac reszt"<<char(169)<<" "<<reszta;
		}
		else
		{
			cout<<"Prosz"<<char(169)<<" odebrac zam"<<char(139)<<"wienie: "<<kawajaka<<"z cukrem. Prosz"<<char(169)<<" odebrac reszt"<<char(169)<<" "<<reszta;
		}
	}
	if (mlekoT==true)
	{
		cout<<"Prosz"<<char(169)<<" odebrac zam"<<char(139)<<"wienie: "<<kawajaka<<"z mlekiem. Prosz"<<char(169)<<" odebrac reszt"<<char(169)<<" "<<reszta;
	}
	
	if (mlekoT==false && cukierT==false)
	{
		cout<<"Prosz"<<char(169)<<" odebrac zam"<<char(139)<<"wienie: "<<kawajaka<<" Prosz"<<char(169)<<" odebrac reszt"<<char(169)<<" "<<reszta<<endl;
	}
	cout<<"Czy chcesz zamowic ponownie: ";
	cin>>koniec;
	

	if (plik.is_open())
	{
		plik<<"Zamowiono: "<<kawajaka<<endl;
		plik<<"Cena: "<<zaplata<<"PLN"<<endl;
		plik<<"Wrzucono: "<<suma<<"PLN"<<endl;
		plik<<"Wydana reszta: "<<reszta<<"PLN"<<endl;
	}

}
while (koniec == 't' || koniec== 'T');
	plik.close();	
	return 0;
}
