#include<iostream>

using namespace std;

#if 0
static
全局变量  外延性 static          作用域仅限于本文件
局部变量  auto                生命周期在存储位置

#endif


#if 0
static 在类内部的表现，用来实现族类对象间的 数据共享
在生成对象的时候，普通数据成员才有空间。而static成员在类生命的时候，就已经开辟了空间(data rw)

static数据成员，既属于类，也属于对象，但终归属于类

1、初始化
   类内定义，类外初始化。 type 类名::变量名=初值
2、static数据成员，既属于类，也属于对象，但终归属于类
#endif
namespace B
{
    int share =9;
}
class A
{
public:
    void func()
    {
        cout<<share<<endl;
    }
    void modify(int m=222)
    {
        share=m;
    }
private:
    int x;int y;
    static int share;//不占内存
};

int A::share=1000;
int main()
{
        A a,b,c;
        cout<<"sizeof(A)="<<sizeof(A)<<endl;
        a.func();
        b.func();
        c.func();
        
        a.modify();//共享，static数值都改变了
        a.func();
        b.modify();
        b.func();        
        c.modify();
        c.func();
        

    //    cout<<B::share<<endl;静态变量私有就不能用类名访问
        return 0;
}