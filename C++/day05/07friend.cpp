#include<iostream>
using namespace std;

class A
{
public:
    A(int x,int y,int z)
        :x_(x),y_(y),z_(z)
    {}
    friend void dis(A &t);
private:
    int x_;
    int y_;
    int z_;
};

void dis(A &t)
{
    cout<<t.x_<<" "<<t.y_<<" "<<t.z_<<endl;
}

int main()
{
    A a(1,2,3);
    dis(a);
    return 0;
}
