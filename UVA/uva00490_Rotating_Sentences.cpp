//uva00490_Rotating_Sentences.cpp
// 注意 space
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;


int main (){

    //string s[];
    vector<string> v;
    int ncol =0;
    int nrow = 0;
    string s;
    while(getline(cin, s)){
        v.push_back(s);
        if(s.size()>nrow)   nrow = s.size();
        //nrow = max(nrow,s.size());
        ncol++;
    }
    for(int i =0;i<nrow;i++){
        for(int j =ncol-1;j>=0;j--){
            if(i>=v[j].size())   cout<<" ";
            else    cout<<v[j][i];
        }
        cout<<endl;
    }
    
    
    
    
    
    
    return 0;

}
