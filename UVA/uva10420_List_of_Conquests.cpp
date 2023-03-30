//uva10420_List_of_Conquests.cpp
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;


int main (){

    int n;
    cin >>n;
    vector <pair<string,int>> v;
    string s,country;
    getline(cin,s);
    for(int i =0;i<n;i++){
        getline(cin,s);
        //cout<<s<<endl;
        stringstream ss;
        ss<<s;
        ss>>country;
        
        // cout<<country<<endl;
        bool find = false;
        for(int j =0;j<v.size();j++){
            if(v[j].first == country){
                find = true;
                v[j].second++;
            }
        }
        if(!find){
            v.push_back(make_pair(country,1));
        }
        
        
    }
    sort(v.begin(),v.end());
    for(int j =0;j<v.size();j++){
        cout<<v[j].first<<" "<<v[j].second<<endl;
    }
    
    
    
    return 0;

}
