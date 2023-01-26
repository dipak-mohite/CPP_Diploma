#include<iostream.h>
#include<conio.h>

struct Emp
{
  int emp_id;
  char emp_name[30];
 public :
  void getdata()
  {
   cout<<"Enter Id and Name of Employee :\n";
   cin>>emp_id>>emp_name;
  }
  void putdata()
  {
   cout<<"\nID : "<<emp_id;
   cout<<"\nName : "<<emp_name;
  }
};
class uni
{
 public :
  int m_id;
  void accept()
  {
   cout<<"Enter the member id :\n";
   cin>>m_id;
  }
  void display()
  {
   cout<<"\nMember ID :"<<m_id;
  }
};
class Emp_Info : public Emp, public uni
{
 float sal;
 public:
 void recieve()
 {
  cout<<"Enter Salary :\n";
  cin>>sal;
 }
 void show()
 {
  cout<<"\nSalary : "<<sal;
 }
};

void main()
{
 Emp_Info e;
 clrscr();
 e.getdata();
 e.accept();
 e.recieve();
 e.putdata();
 e.display();
 e.show();
 getch();

}