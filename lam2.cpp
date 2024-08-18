#include<bits/stdc++.h>
using namespace std;

int fun(int num)
{
    vector<int> digits;
    while(num>0)
    {
        digits.push_back(num%10);
        num /= 10;
    }
    if(digits.size()<=2)
    return 0;
    int sum=0;
    int min=*min_element(digits.begin(),digits.end());
    int max=*max_element(digits.begin(),digits.end());
    for(int digit:digits)
    {
        if(digit!=min && digit!=max)
            sum += digit;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += fun(arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
