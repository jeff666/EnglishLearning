#include<iostream>
using namespace std;

class A;//前向性声明，只能声明引用和指针
class B
{
public:
    void dis(A &t);//不要去实现，实现中会访问到类A的私有成员变量
};

class A
{
public:
    A(int x,int y,int z)
        :x_(x),y_(y),z_(z)
    {}
    friend class B;
private:
    int x_;
    int y_;
    int z_;
};

void B::dis(A &t)
{
    cout<<t.x_<<" "<<t.y_<<" "<<t.z_<<endl;
}

int main()
{
    A a(1,2,3);
    B b;
    b.dis(a);
    return 0;
}