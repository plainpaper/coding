#include<bits/stdc++.h>
using namespace std;
int main()
{
    // unordered_map<string,int> m;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     m[s]++;
    // }
    // cout<<m.size()<<" "<<endl;
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // cout<<"Frequwncy of each alplabet\n";
    // string s;
    // cout<<"Emter the string\n";
    // cin>>s;
    // int hsh[26];
    // for(int i=0;i<26;i++)
    // hsh[i]=0;
    // for(int i=0;i<s.size();i++)
    // {
    //     hsh[s[i]-'a']++;
    // }
    // for(int i=0;i<26;i++)
    // {
    //     if(hsh[i]!=0)
    //     {
    //         char temp=i+97;
    //         cout<<temp<<" - "<<hsh[i]<<endl;
    //     }
    // }

    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<" - "<<hsh[s[i]-'a']<<endl;
    // }
    // multiset<int> s;
    // s.insert(2);
    // s.insert(1);
    // s.insert(7);
    // s.insert(4);
    // s.insert(2);
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" "<<endl;
    // }
    // int t;
    // cin>>t;
    // int n,k;
    // cin>>n>>k;
	int n;
	cin>>n;
	map<string,int> m;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		int te;
		cin>>te;
		m[s]=te;
	}
	//multimap<int,string> mul;
	for(auto it=m.begin();it!=m.end();++it)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
    string c;
    cin>>c;
    auto it=m.upper_bound(c);
    //cout<<*it.first<<endl;
    //cout<<(*it)<<endl;
    return 0;
}