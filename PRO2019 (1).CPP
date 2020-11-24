//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class user
{
 char name[60],gender[20];
 int age;
 public:
      void create_user()
	{clrscr();
         cout<<"\n\n=============================================================================";
         cout<<"\n                                USER INFORMATION                                    ";
         cout<<"                            ================                           ";
	 cout<<"\n\nPlease Enter Your Name: ";
	 gets(name);
	 cout<<"\nPlease your gender:";
	 gets(gender);
	 cout<<"\nPlease Enter your age:";
	 cin>>age;
         cout<<"\n              Thank you!User Information has been stored successfully!                       ";
         cout<<"\n\n=============================================================================";
         getch();
	 }

	void show_user()
	{clrscr();
         cout<<"\n\n=============================================================================";
         cout<<"\n                                USER INFORMATION                                    ";
         cout<<"                            ================                           ";
	 cout<<"\n Username: ";
	 puts(name);
         cout<<"\n gender: ";
	 puts(gender);
         cout<<"\nAge:"<<age;
         cout<<"\n\n=============================================================================";
	 }
};         //class ends here

//***************************************************************
//    	global declaration for user input array
//****************************************************************
int a[39];
//***************************************************************
//    	function to display options
//****************************************************************

void opt()
{
 cout<<"\n1.Completely Disagree\n2.Disagree\n3.Agree\n4.Completely Agree";
 cout<<"\nEnter Your Answer:";
}
//***************************************************************
//    	function to show questions and get user inputs
//****************************************************************


int* ans()
{clrscr();
 char buf[150];
 ifstream q;int i=0;
 q.open("proj.txt",ios::in);
 q.seekg(0);
 while(q.eof()==0)
 {      cout<<"*******************************************************************************";
	q.getline(buf,150,'.');
	puts(buf);
	opt();
	cin>>a[i];
	i++;
 }
 q.close();
 return a;
}
//***************************************************************
//    	function to process array for comparison
//****************************************************************

int logic(int a[],int b[])
{
 int value=0;
 for(int i=0;i<38;i++)
 {
	if(a[i]-b[i]>=0)
	 value=value+(a[i]-b[i]);
	else
	 value=value-(a[i]-b[i]);
 }
 return value;
}
//***************************************************************
//    	function to compare user input and actual answers.
//****************************************************************

int compare(int a[])
{
 int logician[39];
	logician[0]=4;logician[1]=4;logician[2]=1;logician[3]=1;logician[4]=4;
	logician[5]=4;logician[6]=2;logician[7]=1;logician[8]=3;logician[9]=2;
	logician[10]=2;logician[11]=1;logician[12]=4;logician[13]=4;logician[14]=4;
	logician[15]=2;logician[16]=4;logician[17]=1;logician[18]=3;logician[19]=2;
	logician[20]=3;logician[21]=4;logician[22]=3;logician[23]=1;logician[24]=2;
	logician[25]=2;logician[26]=1;logician[27]=3;logician[28]=2;logician[29]=3;
	logician[30]=3;logician[31]=4;logician[32]=3;logician[33]=4;logician[34]=2;
	logician[35]=1;logician[36]=1;logician[37]=4;

 int debater[39];
	debater[0]=1;debater[1]=3;debater[2]=3;debater[3]=3;debater[4]=1;
	debater[5]=3;debater[6]=4;debater[7]=2;debater[8]=3;debater[9]=1;
	debater[10]=1;debater[11]=1;debater[12]=4;debater[13]=3;debater[14]=4;
	debater[15]=2;debater[16]=2;debater[17]=2;debater[18]=3;debater[19]=2;
	debater[20]=2;debater[21]=1;debater[22]=1;debater[23]=4;debater[24]=1;
	debater[25]=4;debater[26]=2;debater[27]=1;debater[28]=3;debater[29]=3;
	debater[30]=3;debater[31]=4;debater[32]=1;debater[33]=2;debater[34]=3;
	debater[35]=1;debater[36]=3;debater[37]=4;


 int protagonist[39];
	protagonist[0]=1;protagonist[1]=2;protagonist[2]=4;protagonist[3]=0;protagonist[4]=1;
	protagonist[5]=2;protagonist[6]=1;protagonist[7]=0;protagonist[8]=0;protagonist[9]=4;
	protagonist[10]=4;protagonist[11]=4;protagonist[12]=2;protagonist[13]=1;protagonist[14]=1;
	protagonist[15]=2;protagonist[16]=1;protagonist[17]=3;protagonist[18]=2;protagonist[19]=3;
	protagonist[20]=3;protagonist[21]=4;protagonist[22]=4;protagonist[23]=1;protagonist[24]=4;
	protagonist[25]=3;protagonist[26]=4;protagonist[27]=4;protagonist[28]=2;protagonist[29]=3;
	protagonist[30]=2;protagonist[31]=1;protagonist[32]=4;protagonist[33]=1;protagonist[34]=3;
	protagonist[35]=4;protagonist[36]=3;protagonist[37]=1;

 int mediator[39];
	mediator[0]=4;mediator[1]=3;mediator[2]=4;mediator[3]=3;mediator[4]=3;
	mediator[5]=3;mediator[6]=1;mediator[7]=1;mediator[8]=3;mediator[9]=3;
	mediator[10]=3;mediator[11]=3;mediator[12]=3;mediator[13]=2;mediator[14]=1;
	mediator[15]=1;mediator[16]=1;mediator[17]=2;mediator[18]=2;mediator[19]=3;
	mediator[20]=2;mediator[21]=3;mediator[22]=4;mediator[23]=2;mediator[24]=4;
	mediator[25]=4;mediator[26]=4;mediator[27]=4;mediator[28]=2;mediator[29]=3;
	mediator[30]=3;mediator[31]=4;mediator[32]=4;mediator[33]=3;mediator[34]=4;
	mediator[35]=2;mediator[36]=2;mediator[37]=2;

 int executive[39];
	executive[0]=1;executive[1]=2;executive[2]=4;executive[3]=4;executive[4]=1;
	executive[5]=2;executive[6]=3;executive[7]=4;executive[8]=4;executive[9]=4;
	executive[10]=4;executive[11]=4;executive[12]=3;executive[13]=4;executive[14]=3;
	executive[15]=3;executive[16]=1;executive[17]=3;executive[18]=2;executive[19]=3;
	executive[20]=2;executive[21]=3;executive[22]=3;executive[23]=2;executive[24]=2;
	executive[25]=2;executive[26]=1;executive[27]=1;executive[28]=3;executive[29]=2;
	executive[30]=3;executive[31]=1;executive[32]=1;executive[33]=2;executive[34]=4;
	executive[35]=4;executive[36]=3;executive[37]=3;

 int defender[39];
	defender[0]=1;defender[1]=2;defender[2]=3;defender[3]=4;defender[4]=1;
	defender[5]=2;defender[6]=4;defender[7]=1;defender[8]=1;defender[9]=2;
	defender[10]=1;defender[11]=4;defender[12]=4;defender[13]=3;defender[14]=4;
	defender[15]=2;defender[16]=3;defender[17]=3;defender[18]=4;defender[19]=1;
	defender[20]=2;defender[21]=4;defender[22]=2;defender[23]=1;defender[24]=4;
	defender[25]=4;defender[26]=1;defender[27]=3;defender[28]=4;defender[29]=4;
	defender[30]=2;defender[31]=2;defender[32]=1;defender[33]=1;defender[34]=3;
	defender[35]=3;defender[36]=2;defender[37]=3;

 int virtuoso[39];
	virtuoso[0]=1;virtuoso[1]=3;virtuoso[2]=3;virtuoso[3]=2;virtuoso[4]=1;
	virtuoso[5]=4;virtuoso[6]=4;virtuoso[7]=1;virtuoso[8]=4;virtuoso[9]=3;
	virtuoso[10]=3;virtuoso[11]=4;virtuoso[12]=1;virtuoso[13]=2;virtuoso[14]=4;
	virtuoso[15]=1;virtuoso[16]=2;virtuoso[17]=3;virtuoso[18]=3;virtuoso[19]=2;
	virtuoso[20]=4;virtuoso[21]=4;virtuoso[22]=3;virtuoso[23]=1;virtuoso[24]=2;
	virtuoso[25]=2;virtuoso[26]=3;virtuoso[27]=4;virtuoso[28]=2;virtuoso[29]=3;
	virtuoso[30]=3;virtuoso[31]=3;virtuoso[32]=4;virtuoso[33]=1;virtuoso[34]=2;
	virtuoso[35]=4;virtuoso[36]=2;virtuoso[37]=1;

 int adventurer[39];
	adventurer[0]=4;adventurer[1]=4;adventurer[2]=2;adventurer[3]=4;adventurer[4]=4;
	adventurer[5]=4;adventurer[6]=3;adventurer[7]=1;adventurer[8]=2;adventurer[9]=2;
	adventurer[10]=3;adventurer[11]=4;adventurer[12]=4;adventurer[13]=2;adventurer[14]=3;
	adventurer[15]=3;adventurer[16]=3;adventurer[17]=3;adventurer[18]=2;adventurer[19]=3;
	adventurer[20]=3;adventurer[21]=1;adventurer[22]=1;adventurer[23]=3;adventurer[24]=4;
	adventurer[25]=2;adventurer[26]=2;adventurer[27]=2;adventurer[28]=3;adventurer[29]=2;
	adventurer[30]=3;adventurer[31]=3;adventurer[32]=2;adventurer[33]=4;adventurer[34]=1;
	adventurer[35]=2;adventurer[36]=3;adventurer[37]=1;

 int small,pos;
 int results[8];
 results[0]=logic(a,logician);
 results[1]=logic(a,debater);
 results[2]=logic(a,protagonist);
 results[3]=logic(a,mediator);
 results[4]=logic(a,executive);
 results[5]=logic(a,defender);
 results[6]=logic(a,virtuoso);
 results[7]=logic(a,adventurer);
 small=results[0];pos=0;
	for(int x=0;x<8;x++)
	{
	 if(results[x]<small)
	 {
		small=results[x];
		pos=x;
	 }
	}
 return pos;
}
//***************************************************************
//    	function to display output for each character
//****************************************************************

void outlog()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("logician.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {      
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}
void outdeb()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("debater.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {     
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}
void outexe()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("executive.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}
void outdef()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("defender.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch(); 
 }
 o.close();
}
void outmed()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("mediator.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}
void outpro()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("protagonist.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}
void outadv()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("adventurer.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}
void outvir()
{
 clrscr();
 ifstream o;
 char buff[3000];
 o.open("virtuoso.txt",ios::in);
 o.seekg(0);
 cout<<"*******************************************************************************";
 cout<<"*******************************************************************************";
 while(o.eof()==0)
 {
  cout<<"\n";
  o.getline(buff,3000,'!');
  puts(buff);
  getch();
 }
 o.close();
}

//***************************************************************
//    	function to call the output function according to answer
//****************************************************************


void output(int s)
{
if(s==0)
outlog();
else if(s==1)
outdeb();
else if(s==2)
outmed();
else if(s==3)
outpro();
else if(s==4)
outdef();
else if(s==5)
outexe();
else if(s==6)
outvir();
else if(s==7)
outadv();
}
//***************************************************************
//    	FUNCTION TO READ ALL 8 PERSONALITIES
//****************************************************************
void read()
{char c;
 cout<<"\n\n::::::::::::::::::::::::::::::::EIGHT PERSONALITIES:::::::::::::::::::::::::";
 cout<<"\n1.Logician\n2.Debator\n3.Mediator";
 cout<<"\n4.Protagonist\n5.Defender\n6.Executive";
 cout<<"\n7.Virtuoso\n8.Adventurer\n9.Exit";
 cout<<"\n\n\tPlease Select Your Option (1-9): ";
 c=getche();
 getch();
		switch(c)
		{
			case '1': 
				 outlog();
				 getch();
				 break;
			case '2':
				 outdeb();
				 getch();
				 break;
			case '3': 
				 outmed();
				 getch();
				 break;
			case '4': 
				 outpro();
				 getch();
				 break;
			case '5': 
				 outdef();
				 getch();
				 break;
			case '6': 
				 outexe();
				 getch();
				 break;
			case '7': 
				 outvir();
				 getch();
				 break;
			case '8': 
				 outadv();
				 getch();
				 break;
                        case '9': 
				 break;
			default :cout<<"\a";
	}
 getch();
}
//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************
void intro()
{
 clrscr();
 cout<<"\n\n\:::::::::::::::::::::::::::::PERSONALITY ANALYSIS:::::::::::::::::::::::::::::::";
 cout<<"\n\n=============================================================================";
 cout<<"\n                                  PROJECT                                      ";
 cout<<"                                   =======                         ";
 cout<<"\n\n\tMADE BY : S.T.AKSHAYA SHREE\n\n\t Class: XII";
 cout<<"\n\n\tSCHOOL : SISHYA SCHOOL";
cout<<"\n\n=============================================================================";
 getch();
}//***************************************************************
//    	function to display instructions
//****************************************************************
void instructions()
{clrscr();
 cout<<"\n\n\t::::::::::::::::::::INSTRUCTIONS:::::::::::::::::::::::";
 cout<<"\n1.Answer honestly, even if you don’t like the answer.";
 cout<<"\n2.Do not think for long time, answer quickly.";
 cout<<"\n3.Answer firmly , because you won't be allowed to go back to previous questions and change answers.";
 cout<<"\n4.The test takes less than five minutes,be relaxed throughout the test.";
 cout<<"\n\n                       Press any key to proceed to the test.                               ";
 cout<<"\n******************************************************************************";
 cout<<"\n******************************************************************************";
 getch();
}

//***************************************************************
//    	USER TEST FUNCTION
//****************************************************************
void test()
{user n;
 n.create_user();
 int *p,userans[38],s;
 clrscr();
instructions();
clrscr();
 p=ans();
 for(int k=0;k<38;k++)
	userans[k]=*(p+k);
 s=compare(userans);
 n.show_user();
 getch();
 clrscr();
 output(s);
 getch();
}


//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************

void main()
 {  clrscr();
		intro();
		char ch;
	do
		{
		clrscr();
		cout<<"\n\n:::::::::::::::::::::::::::::::::THE MAIN MENU:::::::::::::::::::::::::::::::::";
		cout<<"\n\n\t01. TAKE THE TEST";
		cout<<"\n\n\t02. READ ABOUT ALL 8 PERSONALITIES";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-3): ";
		ch=getche();
		switch(ch)
		{
		 case '1': clrscr();
				 test();
				 getch();
				 break;
			case '2':read();
				 break;
			case '3':exit(0);
		  default :cout<<"\a";
	}
    }while(ch!='3');

}

//***************************************************************
//    			END OF PROJECT
//***************************************************************

 
