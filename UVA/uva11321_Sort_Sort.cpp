//uva11321_Sort_Sort.cpp
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
if (a.second < b.second) return true;
if (a.second == b.second){
	if((a.first+b.first)%2){
		// 一奇一偶
		if(a.first%2 ==1) return true;
		else return false;
	}
	if(a.first%2 ==1 && b.first%2 == 1){
		// 2奇
		if(a.first > b.first ) return true;
		else return false;
	}
	if(a.first%2 ==0 && b.first%2 == 0){
		// 2偶
		if(a.first < b.first ) return true;
		else return false;
	}
}
return false;
}

int main() {
int n,m;
while(	cin >> n >> m){
	if(n==0 && m==0){
		cout<<n<<" "<<m<<"\n";
		break;
	} 
	vector <pair<int,int>> v;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		v.push_back(pair<int,int>(temp,temp%m));
	}
	sort(v.begin(),v.end(),cmp);
	cout<<n<<" "<<m<<"\n";
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<"\n";
	}
}

return 0;
}