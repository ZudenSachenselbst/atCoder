#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		v.push_back(make_pair(a,i+1));
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	
	cout << v[1].second << endl;
}