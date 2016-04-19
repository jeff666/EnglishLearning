#include<iostream>
using namespace std;

class Widget
{
public:
    Widget()
    {
        p[0]=&Widget::f;
        p[1]=&Widget::g;       
        p[2]=&Widget::h;
        p[3]=&Widget::j; 
    }
    void select(int idx,int v)
    {
        (this->*p[idx])(v);//需要this，不然只是偏移量
    }
private:
      void f(int val){cout<<"void f()"<<val<<endl;}    
      void g(int val){cout<<"void g()"<<val<<endl;}
      void h(int val){cout<<"void h()"<<val<<endl;} 
      void j(int val){cout<<"void j()"<<val<<endl;}
      
      enum {cnt=4};   //类中使用常量定义,只能在类中使用
      void (Widget::*p[cnt])(int);      
};

int main()
{
    Widget w;
    for(int i=0;i<4;++i)
        w.select(i,2);
    return 0;
}