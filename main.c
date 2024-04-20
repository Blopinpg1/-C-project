#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
int prdR=5,prR=10,dxR=15,totalrevs=0;//prdR=Presidential suite,prR=premium room,dxr=deluxe room
struct Booking
{
  char cusname[40],roomtype;
  int rD,rM,rY,perday,no_of_person,rever_ID,no_of_room;
  float bill_amount;
}bk[90];
void gotoxy(int x,int y)// creation of gotoxy function for position of cursor
{
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);//1.Handle 2.COORD
}
void show()       //initial page view
{
  int i,j;
  gotoxy(9,3);//(X,Y)
  printf("----------------------------------------------------------------------------------");
    for(j=4;j<=23;j++)
    {
    gotoxy(9,j);
    printf("%c",4);
    }
    for(j=4;j<=22;j++)
    {
    gotoxy(90,j);
    printf("%c",4);
    }
     gotoxy(9,20);
     printf("----------------------------------------------------------------------------------");
     gotoxy(9,12);
     printf("%c                      $$  WELCOME TO HOTEL PARADISE  $$                       ",4);
     gotoxy(9,21);
     printf("%c         please visit us %c at: www.hotel paradise.com                        ",4,3);
     gotoxy(9,22);
     printf("----------------------------------------------------------------------------------");
     gotoxy(9,23);
     printf("                         Press any key to enter!!!");
     getch();
}

void headerfooter()
{
  system("cls");
  int i;
  for(i=9;i<=90;i++)
  {
  gotoxy(i,5);
  printf("=");
  }
  gotoxy(9,6);
  printf("                              HOTEL PARADISE Pvt.LTD                                  ");
  for(i=9;i<=90;i++)
  {
  gotoxy(i,7);
  printf("=");
  }
  for(i=9;i<=90;i++)
  {
  gotoxy(i,25);
  printf("_");
  }
  gotoxy(9,26);
  printf("           please visit us %c at: www.hotel paradise.com                         ",3);
  for(i=9;i<=90;i++)
  {
  gotoxy(i,27);
  printf("_");
  }
  

}
char choice()
{
  int i,x;
  headerfooter();
  for(i=29;i<=70;i++)
  {
  gotoxy(i,9);
  printf("_");
  }
  gotoxy(30,10);
  printf("|  A: Book room now ");
  for(i=29;i<=70;i++)
  {
  gotoxy(i,11);
  printf("_");
  }
  gotoxy(30,12);
  printf("|  B: Use our financial services ");
  for(i=29;i<=70;i++)
  {
  gotoxy(i,13);
  printf("_");
  }
  gotoxy(30,14);
  printf("|  C: Future Bookings ");
  for(i=29;i<=70;i++)
  {
  gotoxy(i,15);
  printf("_");
  }
  gotoxy(30,16);
  printf("|  D: Already have a reservation ");
  for(i=29;i<=70;i++)
  { 
  gotoxy(i,17);
  printf("_");
  }
  gotoxy(30,18);
  printf("|  E: For Employees only ");
  for(i=29;i<=70;i++)
  {
  gotoxy(i,19);
  printf("_");
  }
  gotoxy(30,20);
  printf("|  F: About us ");
  for(i=29;i<=70;i++)
  {
  gotoxy(i,21);
  printf("_");
  }
  gotoxy(30,22);
  printf("|  G: Exit ");
  for(i=29;i<=70;i++)
  {
  gotoxy(i,23);
  printf("_");
  }
  
  gotoxy(30,24);
  printf("Enter the choice\n");
  return (getche());
}


int main()
{
  system("cls");
  system("color 2F");
  show();
  choice();
 
 return 0;
}