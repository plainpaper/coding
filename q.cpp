#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	map<int,multiset<string>> m;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		int marks;
		cin>>marks;
		m[marks].insert(s);
	}
	//multimap<int,string> mul;
	auto it=--m.end();
	while(true)
	{
		auto students=it->second;
		auto marks=it->first;
		for(auto student:students)
		{
			cout<<student<<" "<<marks<<endl;
		}
		if(it==m.begin()) break;
		it--;
	}
}