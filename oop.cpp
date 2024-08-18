#include<bits/stdc++.h>
using namespace std;

// class hero{
//     private:
//     int health;
//     int level;
//     public:
//     int name;
//     static int timetocom;
//     hero(){
//         cout<<"Constructor\n";
//     }
//     hero(int health)
//     {
//         this->health=health;
//     }
//     hero(hero& temp)
//     {
//         this->health=temp.health;
//     }

//     void sethealth(int health)
//     {
//         cout<<this<<endl;
//         this->health=health;
//     }
//     int gethealth()
//     {
//         return health;
//     }
    // ~hero() //destructor will be called automatically for static object
    // {       //but for dynamically created object destructor must be called manually
    //     cout<<"Destructor....."<<endl;//syntax "delete obj;"
    // }
//};
//intialization of static data member

//int hero::timetocom=10; static member are belong to class there no need to creat any object inordered to access that static member 
//

class human{
    public:
    int height;
    human(){
        cout<<"human constructor is called\n";
    }
    void setheight(int height)
    {
        this->height=height;
    }
    int getheight(){
        return this->height;
    }
};

class male:private human{
    public:
    int age;
    male()
    {
        cout<<"male constructor is called\n";
    }
    string color;
    void seth(int height)
    {
        this->height=height;
    }
    void output(){
        cout<<height<<endl;
    }
};

int main()
{
    male obj;
    obj.seth(78);
    obj.output();
    //obj.setheight(6);
    //cout<<"height of the male is "<<obj.getheight()<<endl;
    // hero h1;
    // cout<<sizeof(hero)<<endl;
    // h1.sethealth(78);
    // cout<<&h1<<endl;
    // cout<<"h1 health is "<<h1.gethealth()<<endl;
    // hero *h2 =new hero();
    // h2->sethealth(90);
    // cout<<h2<<endl;
    // cout<<"h2 health is "<<h2->gethealth()<<endl;
    // hero h3(h1);
    // cout<<h3.gethealth()<<endl;
    // hero h4;
    // delete h2;
    // cout<<hero::timetocom<<endl;
}