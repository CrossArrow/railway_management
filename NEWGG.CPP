#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>

class admin
{
int t_id,tno,ffc,fc,fsc,sc;
char tname[50],bp[50],dest[50];
public:
void newtrain()
{
clrscr();
cout<<"\n\tTRAIN ID:";
cin>>t_id;
cout<<"\t\nEnter the deatils as follow\n";
cout<<"\n\tENTER THE NUMBER OF NEW TRAIN-";
cin>>tno;
cout<<"\n\tENTER THE NAME OF NEW TRAIN-";
gets(tname);
cout<<"\n\tENTER THE BOARDING POINT OF TRAIN-";
gets(bp);
cout<<"\n\tENTER THE DESTINATION POINT OF TRAIN-";
gets(dest);
cout<<"\n\tENTER THE NUMBER OF SEATS IN A.C CLASS-";
cin>>fc;
cout<<"\n\tENTER FARE PER SEAT-";
cin>>ffc;
cout<<"\n\tENTER THE NUMBER OF SEATS IN SLEEPER CLASS-";
cin>>sc;
cout<<"\n\tENTER FARE PER SEAT-";
cin>>fsc;
cout<<"\n\n\t DETAILS UPDATED...";
getch();
dispdetsingle();
}
void dispdetall()
{
cout<<"\n  "<<tno<<"\t    "<<tname<<"\t     "<<bp<<"\t     "<<dest<<"\t     "<<fc<<"      "<<sc;
}

void dispdetsingle()
{
clrscr();
cout<<"\n\n\n\t\t\t\tTRAIN ID:";
cout<<t_id;
cout<<"\n\n\tNUMBER OF NEW TRAIN-";
cout<<tno;
cout<<"\n\tNAME OF NEW TRAIN-";
puts(tname);
cout<<"\n\tBOARDING POINT OF TRAIN-";
puts(bp);
cout<<"\n\tDESTINATION POINT OF TRAIN-";
puts(dest);
cout<<"\n\tNUMBER OF SEATS IN A.C CLASS-";
cout<<fc;
cout<<"\n\tFARE PER SEAT-";
cout<<ffc;
cout<<"\n\tNUMBER OF SEATS IN SLEEPER CLASS-";
cout<<sc;
cout<<"\n\tFARE PER SEAT-";
cout<<fsc;
cout<<"\n\n\tPRESS ANY KEY TO RETURN...";
getch();
}

int gett_id()
{
return t_id;
}
};


class user
{
int id,tno,age[50],i,nosr,amc,dd,mm,yy;
char clas[100],pname[50][100];

void amccalc()
{
if (strcmp(clas,"AC" )==0)
amc=nosr*450;
else
if (strcmp(clas,"ac" )==0)
amc=nosr*450;
else
amc=nosr*250;
}

public:
void reserdet()
{
error:
clrscr();

cout<<"\n\n\n";
cout<<"\t  --------------------------------------------------------------\n";
cout<<"\t  | Tr.No. |   Tr.Name  |  Bod.PT.  | Dept. | Dest.PT. | Arri. |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 12440  |  RAJDHANI  | NEW DELHI | 16:05 |  RANCHI  | 09:10 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 12015  |  SHATABDI  | NEW DELHI | 06:05 |  AJMER   | 12:45 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 13240  | KOTA PATNA |   KOTA    | 11:05 |  PATNA   | 19:10 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 19740  | GARIB RATH |  SAHARSA  | 15:00 | AMRITSAR | 21:00 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 17340  |   EKTA     |  BHIWANI  | 04:30 |  KALKA   | 11:10 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  --------------------------------------------------------------\n";
cout<<"\n REMEMBER THE TRAIN NUMBER YOU WANT TO RESERVE...";
getch();

clrscr();
cout<<"\n\t\t\t    RESERVATION FOR TICKETS";
cout<<"\n\t\t   ------------------------------------------";

cout<<"\n\tUSER ID:";
cin>>id;
cout<<"\t\nEnter the deatils as follow\n";
cout<<"\n\tTrain Number:";
cin>>tno;
if (tno==12440)
{
cout<<"\n\tTrain Name:";
cout<<" RAJDHANI EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" NEW DELHI";
cout<<"\n\n\tDestination Point:";
cout<<" RANCHI";
}
else
if (tno==12015)
{
cout<<"\n\tTrain Name:";
cout<<" SHATABDI EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" NEW DELHI";
cout<<"\n\n\tDestination Point:";
cout<<" AJMER";
}
else
if (tno==13240)
{
cout<<"\n\tTrain Name:";
cout<<" KOTA PATNA EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" KOTA";
cout<<"\n\n\tDestination Point:";
cout<<" PATNA";
}
else
if (tno==19740)
{
cout<<"\n\tTrain Name:";
cout<<" GARIB RATH EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" SAHARSA";
cout<<"\n\n\tDestination Point:";
cout<<" AMRITSAR";
}
else
if (tno==17340)
{
cout<<"\n\tTrain Name:";
cout<<" EKTA EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" BHIWANI";
cout<<"\n\n\tDestination Point:";
cout<<" KALKA";
}
else
if (tno!=12440 || 12015 || 13240 || 19740 || 17340)
{
cout<<"\n\n\tTRAIN NOT FOUND";
getch();
goto error;
}

cout<<"\n\n\tNo. Of Seats required (MAX 5):";
seats:
cin>>nosr;
if(nosr>5 || nosr<=0)
{
cout<<"\tLimit exceeded do again !!";
getch();
gotoxy(9,17);
clreol();
gotoxy(39,16);
clreol();
goto seats;
}
else
{ goto name; }
name:

for (i=0;i<nosr;i++)
{
cout<<"\n\tPassenger Name-";
gets(pname[i]);
cout<<"\tPassenger Age-";
cin>>age[i];
}
cout<<"Enter the class ( AC or Sleeper ):";
gets(clas);
cout<<"Date Of Journey (DD-MM-YY) : DD:";
cin>>dd;
cout<<"\t\t\t     MM:";
cin>>mm;
cout<<"\t\t\t     YY:";
cin>>yy;
cout<<"\n\n \tDeatils Entry Completed...";
getch();
dispresdet();
}

void dispresdet()
{
clrscr();
gotoxy(33,3);
cout<<"User ID:"<<id;
gotoxy(14,5);
cout<<"======================================================";
gotoxy(14,6);
cout<<"| Tno.:- "<<tno;
gotoxy(30,6);
cout<<"                                     |\n";
if (tno==12440)
{
gotoxy(14,7);
cout<<"| Train name:- RAJDHANI EXPRESS";
gotoxy(55,7);
cout<<"            |\n";
gotoxy(14,8);
cout<<"|                                                    |\n";
gotoxy(14,9);
cout<<"| Boarding Point:- NEW DELHI";
gotoxy(55,9);
cout<<"            |\n";
gotoxy(14,10);
cout<<"| Destination :- RANCHI";
gotoxy(55,10);
cout<<"            |\n";
}
else
if (tno==12015)
{
gotoxy(14,7);
cout<<"| Train name:- SHATABDI EXPRESS";
gotoxy(55,7);
cout<<"            |\n";
gotoxy(14,8);
cout<<"|                                                    |\n";
gotoxy(14,9);
cout<<"| Boarding Point:- NEW DELHI";
gotoxy(55,9);
cout<<"            |\n";
gotoxy(14,10);
cout<<"| Destination :- AJMER";
gotoxy(55,10);
cout<<"            |\n";
}
else
if (tno==13240)
{
gotoxy(14,7);
cout<<"| Train name:- KOTA PATNA EXPRESS";
gotoxy(55,7);
cout<<"            |\n";
gotoxy(14,8);
cout<<"|                                                    |\n";
gotoxy(14,9);
cout<<"| Boarding Point:- KOTA";
gotoxy(55,9);
cout<<"            |\n";
gotoxy(14,10);
cout<<"| Destination :- PATNA";
gotoxy(55,10);
cout<<"            |\n";

}
else
if (tno==19740)
{
gotoxy(14,7);
cout<<"| Train name:- GARIB RATH EXPRESS";
gotoxy(55,7);
cout<<"            |\n";
gotoxy(14,8);
cout<<"|                                                    |\n";
gotoxy(14,9);
cout<<"| Boarding Point:- SAHARSA";
gotoxy(55,9);
cout<<"            |\n";
gotoxy(14,10);
cout<<"| Destination :- AMRITSAR";
gotoxy(55,10);
cout<<"            |\n";

}
else
if (tno==17340)
{
gotoxy(14,7);
cout<<"| Train name:- EKTA EXPRESS";
gotoxy(55,7);
cout<<"            |\n";
gotoxy(14,8);
cout<<"|                                                    |\n";
gotoxy(14,9);
cout<<"| Boarding Point:- BHIWANI";
gotoxy(55,9);
cout<<"            |\n";
gotoxy(14,10);
cout<<"| Destination :- KALKA";
gotoxy(55,10);
cout<<"            |\n";

}

gotoxy(14,11);
cout<<"|                                                    |\n";
gotoxy(14,12);
cout<<"| No of seats reserved:"<<nosr;
gotoxy(65,12);
cout<<"  |\n";
gotoxy(14,13);
cout<<"======================================================\n";
for(i=0;i<nosr;i++)
{
cout<<"\t\tPassenger name:"<<pname[i];
cout<<"\t\tPassenger age:"<<age[i];
cout<<endl;
}

gotoxy(14,19);
cout<<"======================================================";
gotoxy(14,20);
cout<<"| Your class:";puts(clas);
gotoxy(65,20);
cout<<"  |\n";
gotoxy(14,21);
cout<<"| Date of reservation:"<<dd<<"-"<<mm<<"-"<<yy;
gotoxy(65,21);
cout<<"  |\n";
amccalc();
gotoxy(14,22);
cout<<"| You must pay:"<<amc<<endl;
gotoxy(65,22);
cout<<"  |\n";
gotoxy(14,23);
cout<<"======================================================";
getch();
}

void modifyresdet()
{
error1:
clrscr();
cout<<"\n\n\n";
cout<<"\t  --------------------------------------------------------------\n";
cout<<"\t  | Tr.No. |   Tr.Name  |  Bod.PT.  | Dept. | Dest.PT. | Arri. |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 12440  |  RAJDHANI  | NEW DELHI | 16:05 |  RANCHI  | 09:10 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 12015  |  SHATABDI  | NEW DELHI | 06:05 |  AJMER   | 12:45 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 13240  | KOTA PATNA |   KOTA    | 11:05 |  PATNA   | 19:10 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 19740  | GARIB RATH |  SAHARSA  | 15:00 | AMRITSAR | 21:00 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  |--------|------------|-----------|-------|----------|-------|\n";
cout<<"\t  | 17340  |   EKTA     |  BHIWANI  | 04:30 |  KALKA   | 11:10 |\n";
cout<<"\t  |        |  EXPRESS   |           |       |          |       |\n";
cout<<"\t  --------------------------------------------------------------\n";
cout<<"\n REMEMBER THE TRAIN NUMBER YOU WANT TO RESERVE...";
getch();
clrscr();
cout<<"\t\nEnter the deatils as follow\n";
cout<<"\n\tTrain Number:";
cin>>tno;
if (tno==12440)
{
cout<<"\n\tTrain Name:";
cout<<" RAJDHANI EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" NEW DELHI";
cout<<"\n\n\tDestination Point:";
cout<<" RANCHI";
}
else
if (tno==12015)
{
cout<<"\n\tTrain Name:";
cout<<" SHATABDI EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" NEW DELHI";
cout<<"\n\n\tDestination Point:";
cout<<" AJMER";
}
else
if (tno==13240)
{
cout<<"\n\tTrain Name:";
cout<<" KOTA PATNA EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" KOTA";
cout<<"\n\n\tDestination Point:";
cout<<" PATNA";
}
else
if (tno==19740)
{
cout<<"\n\tTrain Name:";
cout<<" GARIB RATH EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" SAHARSA";
cout<<"\n\n\tDestination Point:";
cout<<" AMRITSAR";
}
else
if (tno==17340)
{
cout<<"\n\tTrain Name:";
cout<<" EKTA EXPRESS";
cout<<"\n\n\tBoarding Point:";
cout<<" BHIWANI";
cout<<"\n\n\tDestination Point:";
cout<<" KALKA";
}
else
if (tno!=12440 || 12015 || 13240 || 19740 || 17340)
{
cout<<"\n\n\tTRAIN NOT FOUND";
getch();
goto error1;
}

cout<<"\n\n\tNo. Of Seats required (MAX 5):";
seats:
cin>>nosr;
if(nosr>5 || nosr<=0)
{
cout<<"\tLimit exceeded do again !!";
getch();
gotoxy(9,17);
clreol();
gotoxy(39,16);
clreol();
goto seats;
}
else
{ goto name; }
name:

for (i=0;i<nosr;i++)
{
cout<<"\n\tPassenger Name-";
gets(pname[i]);
cout<<"\tPassenger Age-";
cin>>age[i];
}
cout<<"Enter the class ( AC or Sleeper ):";
gets(clas);
cout<<"Date Of Journey (DD-MM-YY) : DD:";
cin>>dd;
cout<<"\t\t\t     MM:";
cin>>mm;
cout<<"\t\t\t     YY:";
cin>>yy;
cout<<"\n\tDeatils Modified...";
getch();
amccalc();
cout<<"\tNOW YOU HAVE TO PAY:"<<amc;
getch();
}

int getid()
{
return id;
}
};

void frmt()
{
clrscr();
{
textcolor(WHITE);
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t      Loading...Please Wait...\n\n";
cout<<"\t\t       ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n";
cout<<"\t\t       º°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°º\n";
cout<<"\t\t       ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
int k=25;
for(k=25;k<58;k++)
{
gotoxy(k,13);
delay(75);
{
textcolor(YELLOW);
cprintf("±");
}
}
textcolor(WHITE);
for (int i=0;i<=101;i++)
{
gotoxy(40,16);
delay(25);
cout<<i<<"%";
}
}


{
	clrscr() ;
	int i, j;
	char a[]="R A I L W A Y" ;
	char b[]="M A N A G E M E N T" ;
	j = 64 ;
	for (i=1; i<=43; i++)
	{
		delay(40) ;
		clrscr();
		gotoxy(i,12) ;
		cout <<b ;
		gotoxy(j,12) ;
		cout <<a ;
		j-- ;
	}
	delay(100) ;
	char ch=219 ;
	for (i=1; i<=79; i++)
	{
		gotoxy(i,10) ;
		cout<<ch ;
		delay(5) ;
	}
	delay(150) ;
	ch=219 ;
	for (i=79; i>=1; i--)
	{
		gotoxy(i,14) ;
		cout<<ch ;
		delay(5) ;
	}
	cout<<endl;
	gotoxy(27,18);
	cout<<"Press Any Key To Continue...";
	getch();
}

{
clrscr();
char ch=219;

for(int i=1;i<=80;i++)
{
cout<<ch;
}
cout<<endl;

for(int i1=2;i1<=23;i1++)
{
gotoxy(1,i1);
cout<<ch<<"\n";
}

for(int i2=0;i2<=80;i2++)
{
gotoxy(i2,24);
cout<<ch;
}

for(int i3=2;i3<=23;i3++)
{
gotoxy(80,i3);
cout<<ch<<"\n";
}

textcolor(3);
gotoxy(20,3);
cprintf("WELCOME TO C++ PROJECT ON RAILWAY MANAGEMENT");
gotoxy(17,4);
cout<<"---------------------------------------------------\n";

for(int i4=17;i4<=67;i4++)
{
gotoxy(i4,6);
cout<<ch;
}

for(int i5=7;i5<=14;i5++)
{
gotoxy(17,i5);
cout<<ch<<"\n";
}

for(int i6=17;i6<=67;i6++)
{
gotoxy(i6,14);
cout<<ch;
}

for(int i7=7;i7<=14;i7++)
{
gotoxy(67,i7);
cout<<ch<<"\n";
}
gotoxy(30,8);
textcolor(6);
cprintf("KANHA MAKHAN PUBLIC SCHOOL\n");
gotoxy(29,9);
cprintf("----------------------------");
gotoxy(35,11);
textcolor(6);
cprintf("COMPUTER PROJECT");
gotoxy(34,12);
cprintf("------------------");
textcolor(9);
gotoxy(7,17);
cprintf("SUBMITTED TO : ");
gotoxy(7,19);
cprintf("Mr.NAVEEN SIR");
gotoxy(45,17);
cprintf("SUBMITTED BY : ");
gotoxy(45,19);
cprintf("SHRIDHAR SHARMA, ANSHUL GOYAL");
gotoxy(45,21);
cprintf("KUNAL SRIVASTAV, AYUSH AGRAWAL");
gotoxy(45,23);
cprintf("CLASS : 12th (SCIENCE)");
gotoxy(5,23);
textcolor(WHITE);
cprintf("PRESS ANY KEY TO CONTINUE ........");
}
getch();
}

void main_menu()
{
W:
log:
clrscr();

fstream f;
ofstream fout;
ifstream fin;
admin s;
user u;

	int login;
	gotoxy(37,6);
	cout<<"LOGIN";
	gotoxy(35,7);
	cout<<"---------";
	gotoxy(30,9);
	cout<<"1.ADMIN";
	gotoxy(30,11);
	cout<<"2.USER";
	gotoxy(30,13);
	cout<<"3.EXIT";
	gotoxy(25,15);
	cout<<"LOGIN VIA (type 1 or 2):-";
	cin>>login;
	switch(login)
	{

	case 1:
	{
	char pass[4],user[4],access1[]="knight",a1,a2,a3,a4,a5,a6;
	cout<<"\n\n\t\t\t\tENTER USERNAME:";
	gets(user);
	if (strcmp(user,"knight")==0)
	cout<<"\t\t\t\tCorrect Username\n\n";
	else
	cout<<"\t\t\t\tWrong Username\n\n";
	{
	if (strcmp(access1,user)==0)
	{
	goto z;
	}
	else
	{
	cout<<"\n\t\t\t\tAccess Denied";
	}
	getch();
	exit (0);
	}
	z:
	cout<<"\t\t\t\tENTER PASSWORD:";
	a1=getch();
	cout<<"*";
	a2=getch();
	cout<<"*";
	a3=getch();
	cout<<"*";
	a4=getch();
	cout<<"*";
	a5=getch();
	cout<<"*";
	a6=getch();
	cout<<"*\n";
	if (a1=='v' && a2=='i' && a3=='k' && a4=='i' && a5=='n' && a6=='g')
	{
	cout<<"\t\t\t\tCorrect Password\n\n";
	cout<<"\t\t\t\tAccess Allowed";
	getch();
	goto yk;
	}
	else
	{
	cout<<"\t\t\t\tWrong Password\n\n";
	cout<<"\t\t\t\tAccess Denied";
	getch();
	exit (0);
	}
	yk:

{
Y:
l:
clrscr();
char hi=219;
gotoxy(20,6);

for (int h=0;h<=41;h++)
{
cout<<hi;
}
for (int v=6;v<=21;v++)
{
gotoxy(19,v);
{
cout<<hi<<endl;
}}
for (int h1=20;h1<=61;h1++)
{
gotoxy(h1,21);
{
cout<<hi<<endl;
}}
for (int v1=6;v1<=21;v1++)
{
gotoxy(62,v1);
{
cout<<hi<<endl;
}}
gotoxy(17,4);
for (int h2=0;h2<=48;h2++)
{
cout<<hi;
}
for (int v2=4;v2<=23;v2++)
{
gotoxy(16,v2);
{
cout<<hi<<endl;
}}
for (int h3=17;h3<=64;h3++)
{
gotoxy(h3,23);
{
cout<<hi<<endl;
}}
for (int v3=4;v3<=23;v3++)
{
gotoxy(65,v3);
{
cout<<hi<<endl;
}}

textbackground(WHITE);
textcolor(BLACK);
gotoxy(22,8);
cprintf("______________________________________");
gotoxy(22,9);
cprintf("                                      ");
gotoxy(22,10);
cprintf("#              ADMIN MODE            #");
gotoxy(22,11);
cprintf("#        ----------------------      #");
gotoxy(22,12);
cprintf("#                                    #");
gotoxy(22,13);
cprintf("#  1.ENTER NEW TRAIN                 #");
gotoxy(22,14);
cprintf("#  2.DELETE A TRAIN                  #");
gotoxy(22,15);
cprintf("#  3.DISPLAY ALL TRAINS              #");
gotoxy(22,16);
cprintf("#  4.SEARCH A TRAIN                  #");
gotoxy(22,17);
cprintf("#  5.RETURN TO LOGIN DASH            #");
gotoxy(22,18);
cprintf("______________________________________");
textbackground(BLACK);
textcolor(WHITE);
gotoxy(25,20);
cout<<"  ENTER CATEGORY NUMBER:";
int num;
cin>>num;

switch(num)
{
T:
case 1:
clrscr();
cout<<"\n\t\t\t        ADD A NEW TRAIN";
cout<<"\n\t\t   ------------------------------------------";
fout.open("adm.dat",ios::binary|ios::out|ios::app);
s.newtrain();
fout.write((char*)&s,sizeof(s));
fout.close();
char ch;
cout<<"\n\n\n\t\t\t\t DO YOU WANNA TO ADD MORE: ";
cin>>ch;
if(ch=='y'||ch=='Y')
goto T;
break;

case 2:
int x;
clrscr();
cout<<"\n\t\t\t         DELETE A TRAIN";
cout<<"\n\t\t   ------------------------------------------";
cout<<"\n\tENTER TRAIN ID TO BE CANCELLED: ";
cin>>x;

	fin.open("adm.dat",ios::binary);
	if(!fin)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	fout.open("ATemp.dat",ios::binary);
	fin.seekg(0,ios::beg);
	while(fin.read((char *) &s, sizeof(s)))
	{
		if(s.gett_id()!=x)
		{
			fout.write((char*)&s,sizeof(s));
			cout<<"\n\n\tRECORD NOT FOUND";
		}
		else
		{
		s.dispdetsingle();
		cout<<"\n\n\tRECORD SUCCESSFULLY DELETED ..!!";
		}
	}
	fin.close();
	fout.close();
	remove("adm.dat");
	rename("ATemp.dat","adm.dat");

break;

case 3:
		fin.open("adm.dat",ios::binary|ios::in);
clrscr();
cout<<"\n\t\t\t          ALL TRAINS";
cout<<"\n\t\t   ------------------------------------------";
gotoxy(33,3);
cout<<"\n\n  | Tr.no |    Tr.name    |    Bord.pt    |    dest.pt    | ACfare | Slefare | ";
cout<<"\n  ----------------------------------------------------------------------------";
		while(fin.read((char*)&s,sizeof(s)))
		{
		s.dispdetall();
		}
		fin.close();
break;

case 4:
int sea;
clrscr();
cout<<"\n\t\t\t        SEARCH A TRAIN";
cout<<"\n\t\t   ------------------------------------------";
cout<<"\n\tENTER TRAIN ID:  ";
cin>>sea;
	f.open("adm.dat",ios::binary|ios::in|ios::out);
	if(!f)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(f.read((char*)&s,sizeof(s)))
	{
		if(s.gett_id()==sea)
		{
			s.dispdetsingle();
			getch();
		}
		else
		cout<<"\n\n\tRECORD NOT FOUND";
	}
	f.close();

break;

case 5:
{
goto W;
}

default:
	cout<<"\n\t\tWRONG CHOICE - DO AGAIN";
	getch();
	goto l;
}
char ch;
cout<<"\n\n\t\t\t\tDO YOU WANT TO GO TO ADMIN MENU: ";
cin>>ch;
if(ch=='y'||ch=='Y')
goto Y;
else
goto log;

}

	    //case 1: admin close here
}

	case 2:
	{
	char pass[4],user[4],access1[]="shri",a1,a2,a3,a4;
	cout<<"\n\n\t\t\t\tENTER USERNAME:";
	gets(user);
	if (strcmp(user,"shri")==0)
	cout<<"\t\t\t\tCorrect Username\n\n";
	else
	cout<<"\t\t\t\tWrong Username\n\n";
	{
	if (strcmp(access1,user)==0)
	{
	goto x;
	}
	else
	{
	cout<<"\n\t\t\t\tAccess Denied";
	}
	getch();
	exit (0);
	}
	x:
	cout<<"\t\t\t\tENTER PASSWORD:";
	a1=getch();
	cout<<"*";
	a2=getch();
	cout<<"*";
	a3=getch();
	cout<<"*";
	a4=getch();
	cout<<"*\n";
	if (a1=='s' && a2=='n' && a3=='o' && a4=='w')
	{
	cout<<"\t\t\t\tCorrect Password\n\n";
	cout<<"\t\t\t\tAccess Allowed";
	getch();
	goto am;
	}
	else
	{
	cout<<"\t\t\t\tWrong Password\n\n";
	cout<<"\t\t\t\tAccess Denied";
	getch();
	exit (0);
	}
	am:
{
m:
S:
clrscr();
char hi=219;
gotoxy(20,6);

for (int h=0;h<=41;h++)
{
cout<<hi;
}
for (int v=6;v<=21;v++)
{
gotoxy(19,v);
{
cout<<hi<<endl;
}}
for (int h1=20;h1<=61;h1++)
{
gotoxy(h1,21);
{
cout<<hi<<endl;
}}
for (int v1=6;v1<=21;v1++)
{
gotoxy(62,v1);
{
cout<<hi<<endl;
}}
gotoxy(17,4);
for (int h2=0;h2<=48;h2++)
{
cout<<hi;
}
for (int v2=4;v2<=23;v2++)
{
gotoxy(16,v2);
{
cout<<hi<<endl;
}}
for (int h3=17;h3<=64;h3++)
{
gotoxy(h3,23);
{
cout<<hi<<endl;
}}
for (int v3=4;v3<=23;v3++)
{
gotoxy(65,v3);
{
cout<<hi<<endl;
}}

textbackground(WHITE);
textcolor(BLACK);
gotoxy(22,8);
cprintf("______________________________________");
gotoxy(22,9);
cprintf("                                      ");
gotoxy(22,10);
cprintf("#              USER MODE             #");
gotoxy(22,11);
cprintf("#       -----------------------      #");
gotoxy(22,12);
cprintf("#                                    #");
gotoxy(22,13);
cprintf("#  1.BOOK TICKET                     #");
gotoxy(22,14);
cprintf("#  2.CANCEL RESERVATION              #");
gotoxy(22,15);
cprintf("#  3.MODIFICATION IN TICKET          #");
gotoxy(22,16);
cprintf("#  4.SEARCH PASSENGER TICKET         #");
gotoxy(22,17);
cprintf("#  5.RETURN TO LOGIN DASH            #");
gotoxy(22,18);
cprintf("______________________________________");
textbackground(BLACK);
textcolor(WHITE);
gotoxy(25,20);
cout<<"  ENTER YOUR CHOICE:";
int choice;
cin>>choice;

switch(choice)
{
D:
case 1:
clrscr();
fout.open("reser.dat",ios::binary|ios::out|ios::app);
u.reserdet();
fout.write((char*)&u,sizeof(u));
fout.close();
char ch;
cout<<"\n\n\n\t\t\t\t DO YOU WANNA TO ADD MORE: ";
cin>>ch;
if(ch=='y'||ch=='Y')
goto D;
break;

case 2:
int x;
clrscr();
cout<<"\n\t\t\t  CANCELLING PASSENGER TICKET";
cout<<"\n\t\t   ------------------------------------------";
cout<<"\n\tENTER PASSENGER ID TO BE CANCELLED: ";
cin>>x;
	fin.open("reser.dat",ios::binary);
	if(!fin)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	fout.open("Temp.dat",ios::binary);
	fin.seekg(0,ios::beg);
	while(fin.read((char *) &u, sizeof(u)))
	{
		if(u.getid()!=x)
		{
			fout.write((char*)&u,sizeof(u));
			cout<<"\n\n\tRECORD NOT FOUND";
		}
		else
		{
		u.dispresdet();
		cout<<"\n\n\tRECORD SUCCESSFULLY CANCELLED ..!!";
		}
	}
	fin.close();
	fout.close();
	remove("reser.dat");
	rename("Temp.dat","reser.dat");

break;


case 3:
int n;
clrscr();
cout<<"\n\t\t\tMODIFICATION IN PASSENGER TICKET";
cout<<"\n\t\t   ------------------------------------------";
cout<<"\n\tENTER PASSENGER ID: ";
cin>>n;
	f.open("reser.dat",ios::binary|ios::in|ios::out);
	if(!f)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(f.read((char*)&u,sizeof(u)))
	{
		if(u.getid()==n)
		{
			u.dispresdet();
			getch();
cout<<"\n\tENTER THE NEW DETAILS OF ACCOUNT"<<endl;
cout<<"     --------------------------------------";
			u.modifyresdet();
			int pos=(-1)*sizeof(u);
			f.seekp(pos,ios::cur);
			f.write((char*)&u,sizeof(u));

		}
		else
		cout<<"\n\n\tRECORD NOT FOUND";
	}
	f.close();

break;

case 4:
int search;
clrscr();
cout<<"\n\t\t\t    SEARCH PASSENGER TICKET";
cout<<"\n\t\t   ------------------------------------------";
cout<<"\n\tENTER PASSENGER ID:  ";
cin>>search;
	f.open("reser.dat",ios::binary|ios::in|ios::out);
	if(!f)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(f.read((char*)&u,sizeof(u)))
	{
		if(u.getid()==search)
		{
			u.dispresdet();
			getch();
		}
		else
		cout<<"\n\n\tRECORD NOT FOUND";
	}
	f.close();


break;

case 5:
goto W;


	default:
	cout<<"\n\t\tWRONG CHOICE - DO AGAIN";
	getch();
	goto m;
}
char ch;
cout<<"\n\n\t\t\t\tDO YOU WANT TO GO TO USER MENU: ";
cin>>ch;
if(ch=='y'||ch=='Y')
goto S;
else
goto log;

}


}

case 3:
{
clrscr();
textcolor(9);
cprintf("00000000000000000000000000000000000000000000000000000000000000000000000000000000");
cprintf("00000000000000000000000000000000000000000000000000000000000000000000000000000000");
cprintf("0000000000000        0000  00000  000000   000000    0000  0000  0000  000000000");
cprintf("0000000000000000  0000000  00000  00000  0  00000  0  000  0000  00  00000000000");
cprintf("0000000000000000  0000000         0000  000  0000  00  00  0000     000000000000");
cprintf("0000000000000000  0000000  00000  000         000  000  0  0000  00  00000000000");
cprintf("0000000000000000  0000000  00000  00  0000000  00  0000    0000  0000  000000000");
cprintf("00000000000000000000000000000000000000000000000000000000000000000000000000000000");
cprintf("00000000000000000000000000000000000000000000000000000000000000000000000000000000");
cprintf("00000000000000000000000  0000  00000000    0000000  00000  000000000000000000000");
cprintf("000000000000000000000000  000  00000   000   00000  00000  000000000000000000000");
cprintf("0000000000000000000000000  00  0000  0000000  0000  00000  000000000000000000000");
cprintf("00000000000000000000000000000  0000  0000000  0000  00000  000000000000000000000");
cprintf("0000000000000000000000000000  000000   000   00000  00000  000000000000000000000");
cprintf("000000000000000000000000000  0000000000    0000000         000000000000000000000");
cprintf("00000000000000000000000000000000000000000000000000000000000000000000000000000000");
cprintf("0000000000000000000000000000000000000 o o 00000000000000000000000000000000000000");
cprintf("0000000000000000000000000000000000000     00000000000000000000000000000000000000");
cprintf("000000000000000000000000000000000  0       0  0000000000000000000000000000000000");
cprintf("000000000000000000000000000000000  0  888  0  0000000000000000000000000000000000");
cprintf("000000000000000000000000000000000  0       0  0000000000000000000000000000000000");
cprintf("000000000000000000000000000000000000      00000000000000000000000000000000000000");
cprintf("000000000000000000000000000000000000  00  00000000000000000000000000000000000000");
cprintf("00000000000000000000000000000000000   00   0000000000000000000000000000000000000");
cprintf("00000000000000000000000000000000000000000000000000000000000000000000000000000000");
getch();
exit(0);
}
	default:
	cout<<"\n\t\tWRONG CHOICE - DO AGAIN";
	getch();
	goto W;
	}
}

void main()
{
clrscr();
frmt();
main_menu();
getch();
}