#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int ch;
 cout<<"Enter your Choice\n1.C\n2.C++\n3.PYTHON\n4.JAVA\n5.Advance JAVA\n";
 cin>>ch;
 switch(ch)
 {
  case 1:
  cout<<"You selected C programming\nThank You!\n";
  break;
  case 2:
  cout<<"You selected C++ programming\nThank You!\n";
  break;
  case 3:
  cout<<"You selected PYTHON programming\nThank You!\n";
  break;
  case 4:
  cout<<"You selected JAVA programming\nThank You!\n";
  break;
  case 5:
  cout<<"You selected Advance JAVA programming\nThank You!\n";
  break;
  default :
  cout<<"Sorry! Invalid Choice\n";
  break;
 }
 getch();

}