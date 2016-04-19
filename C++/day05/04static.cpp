#include<iostream>
#include<string.h>
using namespace std;
//static 修饰成员函数，他的作用只有一个，用于管理static成员
//static 修饰的成员函数，既属于类也属于对象，但终归属于类
//static 修饰的成员函数，因为它属于类，所以没有this指针,不能访问非static数据成员及成员函数

class School
{
public:
    string& getPower()
    {
        return power;
    }
    string& getLake()
    {
        return lake;
    } 
    static string& getLib()
    {
        return lib;
    }
private:
    string power;
    string lake;
    static string lib;
};

string School::lib=" ";

int main()
{
    School a,b,c;
    //a.power="aaa";
    //b.power="bbb";  //私有成员函数，不能访问
    a.getPower()="aaa";
    cout<<a.getPower()<<endl;
    b.getLib()="bbb";
    cout<<b.getLib()<<endl;
    School::getLib()="school";
    cout<<School::getLib()<<endl;
    cout<<b.getLib()<<endl;
    cout<<c.getLib()<<endl;
    return 0;
}