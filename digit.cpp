#include<bits/stdc++.h>

using namespace std;

void plusOne(vector<int>& digits) {
        long long temp=0;
        long long res=0;
        for(int i=0;i<digits.size();i++)
        {
            res = digits[i] + res*10;
        }
        res++;
        temp=res;
        vector<int> arr;
        int rev=0,div=0;
        while(res!=0)
        {
            div = res%10;
            arr.push_back(div);
            res=res/10;
        }
        int n=arr.size()-1;
        int temp1=0;
        for(int i=0;i<arr.size()/2;i++)
        {
            temp1=arr[i];
            arr[i]=arr[n];
            arr[n]=temp1;
            n--;
        }
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main()
{
    vector<int> digits;
    int n,ele;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the elements for an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        digits.push_back(ele);
    }
    plusOne(digits);
    return 0;
}