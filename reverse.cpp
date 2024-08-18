#include<bits/stdtr1c++.h>
using namespace std;

void reverse1(string &str,int i,int n,char a,char b,int mid)
{
    if(i>=mid)
        return;
        //cout<<"i  is "<<i;
    //cout<<"asdsfd";
    str[i]=b;
    str[n]=a;
    i=i+1;
    n=n-1;
    reverse1(str,i,n,str[i],str[n],mid);
}
int main()
{
    string str;
    cout<<"Enter the string\n";
    getline(cin,str);
    int n=str.size()-1;
    //int mid=(n+1)/2;
    // cout<<"Using Iteration\n";
    // for(int i=0;i<mid;i++)
    // {
    //     char temp=str[i];
    //     str[i]=str[n];
    //     str[n]=temp;
    //     n--;
    // }
    // cout<<"Resverse of string is "<<str<<endl;
    cout<<"Using recursion\n";
    int mid=(n+1)/2;
    int i=0;
    cout<<"size of string is "<<n<<endl;
    reverse1(str,i,n,str[i],str[n],mid);
    cout<<"Reverse of string is ";
    cout<<str;
}