//uva10222_Decode_the_Mad_man.cpp
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;


int main (){

    string s;
    string a = "!@#$%^&*()_+1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    getline(cin,s);

    for(int i =0;i<s.size();i++){
        bool flag = false;
        if(s[i]<=90 && s[i] >=65)   s[i]+=32;
        for(int j = 0;j<a.size();j++){
            if(s[i] == a[j])    {
                cout<<a[j-2];
                flag = true;
                break;
            }
        }
        if(!flag)   cout<<s[i];
    }
    cout<<endl;
    
    
    
    
    return 0;

}
