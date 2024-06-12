#include<stdio.h>
#include<conio.h>
char a[50]="GOD FATHER";
 char b[50]="BRAHMASTRA";
 char c[50]="K.G.F";
 char d[50]="K.G.F 2";
 char e[50]="BHAAG MILKHA BHAAG";
 char f[50]="DANGAL";
 char g[50]="THARE JAMIN PAR";
 char h[50]="SUPER 30";
 char i[50]="TITANIC";
 char j[50]="AVENGERS";
 char k[50]="AVATAR";
 char l[50]="THE JUNGLE BOOK";
 char m[50]="SPIDER MAN";
 struct pass
 { char pas_name[50];
 int age;
 char gender[50];
 };
struct pass p[10] ;
 void disp( char ch[])
{
 int i,n;
 char ph[10];
 char time[10];
 clrscr();
 printf("\n Enter your Phone Number: ");
 scanf("%s",&ph);
 printf("\n Enter No. of Tickets : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
printf("\n Enter Name: ");
scanf("%s",&p[i].pas_name);
printf("\n Enter Age: ");
scanf("%d",&p[i].age);
printf("\n Enter Gender: ");
scanf("%s",&p[i].gender);
} printf("\n Enter Time: ");
scanf("%s",time);
printf("\n\n\nTICKET CONFIRMED
SUCCESSFULLY");
printf("\n\n Selected Ticket:\n %s ",ch);
printf("\n Phone Number: %s", ph);
printf("\n Time: %s", time);
for(i=0;i<n;i++)
{
printf("\n\n Name: %s",p[i].pas_name );
printf("\n Age : %d",p[i].age);
printf("\n Gender: %s",p[i].gender);
}
printf("\n\n TOTAL NO. OF RUPEES = %d",n*100);
printf("\n...................... THANK 
YOU.............................");
getch();
}
 void main()
 {
 int choice,lang_s;
 clrscr();
 printf("\n WELCOME TO THE MOVIE TICKET BOOKING 
PLATFORM\n");
 printf("\n Enter 1 for TELUGU\n");
 printf(" \n Enter 2 for HINDI\n");
 printf("\n Enter 3 for ENGLISH\n");
 scanf("%d",&lang_s);
 if(lang_s==1)
{
 printf("\n Enter 1 for GOD FATHER");
 printf("\n Enter 2 for BRAHMASTRAM");
 printf("\n Enter 3 for K.G.F");
 printf("\n Enter 4 for K.G.F 2");
 printf("\n CHOOSE A MOVIE TO BOOK\n ");
 scanf("%d",&choice);
 while(1)
 {
 if(choice==1)
 {
 disp(a) ;
 break;
 }
 else if(choice==2)
 {
 disp(b);
 break;
 }
 else if(choice==3)
 {
 disp(c);
 break;
 }
 else if(choice==4)
 {
 disp(d);
 break;
 }
 }
 }
 else if(lang_s==2)
{ printf("\n Enter 1 for BAGH MILKA BAGH");
 printf("\n Enter 2 for DANGAL ");
 printf("\n Enter 3 for THARE JAMIN PAR");
 printf("\n Enter 4 for SUPER 30");
 printf("\n CHOOSE A MOVIE TO BOOK\n ");
 scanf("%d",&choice);
 while(1)
 {
 if(choice==1)
 {
 disp(e) ;
 break;
 }
 else if(choice==2)
 {
 disp(f);
 break;
 }
 else if(choice==3)
 {
 disp(g);
 break;
 }
 else if(choice==4)
 {
 disp(h);
 break;
 }
 }
 }
 else if(lang_s==3)
 { printf("\n Enter 1 for TITANIC");
 printf("\n Enter 2 for AVENGERS");
 printf("\n Enter 3 for AVATAR");
 printf("\n Enter 4 for THE JUNGLE BOOK");
 printf("\n Enter 5 for SPIDER MAN");
 printf("\n CHOOSE A MOVIE TO BOOK\n ");
 scanf("%d",&choice);
 while(1)
 {
 if(choice==1)
 {
 disp(i) ;
 break;
 }
 else if(choice==2)
 {
 disp(j);
 break;
 }
 else if(choice==3)
 {
 disp(k);
 break;
 }
 else if(choice==4)
 {
 disp(l);
 break;
 }
 else if(choice==5)
 {
 disp(m);
 break;
 }
 }
}
 getch();
}