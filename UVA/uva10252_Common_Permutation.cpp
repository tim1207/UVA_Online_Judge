//uva10252_Common_Permutation.cpp
// 注意要吃整行
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;


int main (){

    string s1,s2;
    
    while(getline(cin, s1)&& getline(cin, s2)){
        vector <int> v1,v2;
        for(int i =0;i<26;i++){
            v1.push_back(0);
            v2.push_back(0);
        }
        for(int i =0;i<s1.size();i++){
            v1[int(s1[i]-'a')]++;
        }
        for(int i =0;i<s2.size();i++){
            v2[int(s2[i]-'a')]++;
        }
        for(int i =0;i<26;i++){
            int temp = min(v1[i],v2[i]);
            for(int j =0;j<temp;j++){
                cout<<char(97+i);
            }
            
        }
        cout<<endl;
        
        
        
    }
    
    
    
    
    return 0;

}
