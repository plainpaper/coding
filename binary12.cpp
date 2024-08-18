#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		return true;
	return false;
}

int bintodec(string &s)
{
	int ans=0,a=1;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='1')
			ans+=a;
		a*=2;
	}
	return ans;
}

int main()
{
	string s;
	getline(cin,s);

	string temp="";
	for(int i=0;i<s.size();i++)
	{
		if(isVowel(s[i]))
			temp+='0';
		else
			temp+='1';
	}


	int res=bintodec(temp);
	cout<<res<<endl;
	return 0;
}