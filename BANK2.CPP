#include<iostream>
#include<conio.h>
// #include<dos.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
double  balance=0,di,wi;
void diposit()
{
	cout<<"\nEnter diposit amount : ";
	cin>>di;
	balance=balance+di;
	// clrscr();
	// delay(1000);
	Sleep(1000);
	cout<<"\n\t\t\t\t\tTransaction Successfully\n\n\n\t\t\t\t\tYour current balance is : "<<balance<<endl;
	// delay(3500);
	Sleep(3500);
	// clrscr();
}
void withdraw()
{
	cout<<"\nEnter Withdraw amount : ";
	cin>>wi;
	// clrscr();
	// delay(1000);
	Sleep(1000);
	if(balance>wi)
	{
		balance=balance-wi;
		cout<<"\n\t\t\t\t\tTransaction Successfully\n\n\t\t\t\t\tYour current balance is : "<<balance<<endl;
		// delay(3500);
		Sleep(3500);
		// clrscr();

	}
	else
	{
		cout<<"\n\t\t\t\t\tTransaction Unsuccessfully\n\n\t\t\t\t\tYou have a low balance : "<<balance<<endl;
		//delay(5000);
		//clrscr();
	}
}
int main()
{
	char id[50],id1[50]={"PUNB@123"},pass[50],pass1[50]={"ankit@123"},ac[15]={"123456789000"},ac1[15]  ;
	int i,p,I,ac3,nu;
	char b=219;
	// clrscr();
	cout<<"\nWelcome in PUNB\nEnter your PUNB Id : ";
	cin.getline(id,50);
	cout<<"\nEnter your passwaord : ";
	char ch;
	int t=0;
	 while ((ch = _getch()) != 13)
    {
        pass[t]=ch;
    	t++;
        printf("*");
    }
	pass[t]='\0';
	// cin.getline(pass,50);

	// clrscr();
	cout<<"\nPUNB Id : "<<id<<endl;
	cout<<"\npassword : "<<pass<<endl;
	I=strcmp(id,id1);
	p=strcmp(pass,pass1);
	if(I==0&&p==0)
	{
		cout<<"\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t   ";
		cout<<"\nPlease wait......\n\t\t";
		for(i=0;i<=50;i++)
		{
			cout<<b;
			Sleep(100);
			// delay(100);
		}
		// delay(2000);
		Sleep(2000);
		// clrscr();
		cout<<"\nEnter your Account number : ";
		cin.getline(ac1,15);
		// clrscr();
		cout<<"A/c= "<<ac1<<endl;
		ac3=strcmp(ac,ac1);
		if(ac3==0)
		{
			while(1)
			{
				cout<<"\n\tMenu Bar\n\n\nPress 1 for check balance : \nPress 2 for diposit balance : \nPress 3 for withdrawal balance : \nPress 4 for come back : \n";
				cin>>nu;
				// clrscr();
				switch(nu)
				{
					case 1:
					cout<<"\n\t\t\t\t\tYour current balance is : "<<balance<<endl;
					break;
					case 2:
					diposit();
					break;
					case 3:
					withdraw();
					break;
					case 4:
					exit(0);
					break;
					default : cout<<"Error!\nWrong chouse\n"<<endl;
				}
			}
		}
		else
		{
			cout<<"Invalid A/c number\nPlease try again...."<<endl;
		}
	}
	else if(I!=0)
	{
		cout<<"\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t";
		cout<<"Please wait......\n\t";
		for(i=0;i<=50;i++)
		{
			cout<<b;
			// delay(100);
			Sleep(100);
		}
		// clrscr();
		cout<<"Invalid Id\nTry again...";
	}

	else
	{
		cout<<"\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t";
		cout<<"Please wait......\n\t";
		for(i=0;i<=50;i++)
		{
			cout<<b;
			Sleep(100);
			// delay(100);
		}
		// clrscr();
		cout<<"Invalid Password\nTry again...";
	}

	getch();
	return 0;
}