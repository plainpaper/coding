#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    int b;
    // void sayhello()
    // {
    //     cout<<"hello chandan anusha\n";
    // }
    // int sayhello(char a)
    // {
    //     cout<<"charector is "<<a<<endl;
    //     return 0;
    // }
    // int sayhello(string name)
    // {
    //     cout<<"Name is "<<name<<endl;
    //     return 0;
    // }
    void operator + (A &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<"addition of "<<value1<<" and "<<value2<<" is "<<(value1+value2)<<endl;
    }
    void operator - (A &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<"substraciton of "<<value1<<" and "<<value2<<" is "<<(value1-value2)<<endl;
    }
    
};

int main()
{
    A obj,obj1;
    obj.a=90;
    obj1.a=100;
    obj+obj1;
    obj-obj1;
    // obj.sayhello();
    // obj.sayhello("chandan");
    // obj.sayhello('p');
    return 0;
}