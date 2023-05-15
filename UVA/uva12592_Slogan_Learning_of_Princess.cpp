// uva12592_Slogan_Learning_of_Princess.cpp
#include <iostream>
#include <cstring>
#include <string>
#include <map>
using namespace std;


int main() {
	int N;
	cin >>N;
	string s,s1;
	getline(cin,s);
	map<string,string> mp;
	for(int i =0;i<N;i++){
	    getline(cin,s);
	    getline(cin,s1);
	    mp[s]=s1;
	}
	int Case;
	cin>>Case;
	getline(cin,s);
	for(int i =0;i<Case;i++){
	    getline(cin,s);
	    cout<<mp[s]<<endl;
	}
	
	

	return 0;
}