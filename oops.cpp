#include<bits/stdc++.h>
using namespace std;

class B{
    public:
    int a;
    B(){
        cout<<"Default constructor\n";
    }
    B(int a){
        cout<<"Consrtuctor";
        this->a=a;
    }
    void show()
    {
        cout<<a<<" "<<endl;
    }
};

class A: private B{
    public:
    int b;
    A(){
        cout<<"default constructor\n";
    }
    A(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    //B b1;
    B b(3);
    b.show();
    cout<<endl;
    A a;
    return 0;
}