//渲染树，不断向后插入节点
#include<iostream>
using namespace std;

class Student
{
public:
    Student(int n):name(n)
    {
        this->next=head;
        head=this;
    }
    static void traverse()
    {
        Student *ph=head;
        while(ph)
        {
            cout<<ph->name<<endl;
            ph=ph->next;
        }
    }
private:
    int name;
    Student *next;
    static Student *head; 
};
Student* Student::head=NULL;
int main(void)
{
    for(int i=1;i<100;++i)
        new Student(i);
    Student::traverse();
    return 0;
}