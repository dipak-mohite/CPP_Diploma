#include<iostream.h>
#include<conio.h>

class student
{
    int rollno;
    int marks;
 public :
    void accept();
    void display();
};`
void student :: accept()
{
 cout<<"Enter Rollno and Marks:\n";
 cin>>rollno>>marks;
}
void student:: display()
{
 cout<<"Roll No. : "<<rollno<<"\n"<<"Marks : "<<marks;
}
void main()
{
 student s1, s2;
 s1.accept();
 s2.accept();
 s1.display();
 s2.display();


}