//uva10931_Parity.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a;
	while(cin >>a){
	    if(a == 0)  break;
	    // dec to bin 
	    string s;
	    while(a>0){
	        s += to_string(a%2);
	        a/= 2;
	    }
	    reverse(s.begin(),s.end());
	   // cout<<s<<endl;
	   int count =0;
	   for(int i =0;i<s.size();i++){
	       if(s[i]=='1')    count++;
	   }
	   cout<<"The parity of "<<s<<" is "<<count<<" (mod 2)."<<endl;
	}
	return 0;
}