#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"speaking......\n";
    }
};
class B: public A{
    public:
    void sayhello()
    {
        cout<<"barking......  "<<endl;
    }
};
int main()
{
    B ob;
    ob.A::sayhello();
    return 0;
}