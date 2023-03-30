//uva10008_What's_Cryptanalysis.cpp
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<char,int> a,pair<char,int> b){
    if(a.second ==b.second){
        return a.first <b.first;
    }
    return a.second >b.second;
}

int main (){

    int n;
    cin >>n;
    string s;
    getline(cin,s);
    vector <pair<char,int>> v;
    //cout<<char((int)'a'-32)<<" "<<(int)'Z';
    // 97-122 65 90
    
    while(n--){
        getline(cin,s);
        //cout<<s<<endl;
        for(int i =0;i<s.size();i++){
            bool isUpper = false;
            bool isChar = false;
            if((int)s[i]<=90 && (int)s[i]>=65){
                isChar = true;
                isUpper = true;
            }
            if((int)s[i]<=122 && (int)s[i]>=97){
                isChar = true;
            }
            if(isChar){
                char temp = s[i];
                if(!isUpper){
                    temp = char((int)s[i]-32);
                }
                bool find = false;
                for(int j =0;j<v.size();j++){
                    if(v[j].first == temp){
                        find = true;
                        v[j].second++;
                    }
                }
                if(!find){
                    v.push_back(make_pair(temp,1));
                }
                
            }
        }
        
    }
    sort(v.begin(),v.end(),cmp);
    for(int j =0;j<v.size();j++){
        cout<<v[j].first<<" "<<v[j].second<<endl;
    }
    
    
    
    
    return 0;

}
