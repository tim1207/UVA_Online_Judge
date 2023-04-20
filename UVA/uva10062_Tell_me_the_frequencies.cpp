// uva10062_Tell_me_the_frequencies.cpp

#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <string.h>
#include <vector>
using namespace std;


bool cmp(pair<char,int> a ,pair<char,int> b){
    if(a.second==b.second)   return (a.first>b.first);
    else return a.second < b.second;
}

 
int main() {
    string s;
    int count=0;
    while(getline(cin,s)){
        if(count)
            cout<<endl;
        count++;
        vector <pair<char,int>> v;
        for(int i =0;i<s.size();i++){
            bool needAdd = true;
            for(int j =0;j<v.size();j++){
                if(v[j].first == s[i]){
                    v[j].second++;
                    needAdd = false;
                    break;
                }
            }
            if(needAdd) v.push_back(make_pair(s[i],1));
        }
        sort(v.begin(),v.end(),cmp);
        for(int i =0;i<v.size();i++){
            cout<<(int)v[i].first<<" "<<v[i].second<<endl;
        }
        
    }
}
