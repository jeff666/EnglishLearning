#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    Student(string name,int num)
        :name_(name),num_(num){}
    void dis()
    {
        cout<<"name="<<name_<<" num="<<num_<<endl;
    }
private:
    string name_;
    int num_;  
};
int main()
{
    Student s1("zhang",80);
    Student s2("jeff",90);
    
    Student *ph=new Student("li",100);
    //string Student::*p1=&Student::name_;
  //  cout<<s1.*p1<<endl;  public
    
  //  cout<<ph->*p1<<endl; public
  
  void (Student::*pp)()=&Student::dis;
  (ph->*pp)();
  (s1.*pp)();
  
    
    return 0;
}