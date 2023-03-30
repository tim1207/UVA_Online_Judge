//uva00272 - TEX Quotes.cpp

#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;


int main (){

    string s;
    int count = 0;
    while(getline(cin, s)){
        for(int i =0;i<s.size();i++){
            if(s[i] == '"')    {
                count++;
                if(count%2==0){
                    cout<<"''";
                }
                else    cout<<"``";
            }
            else    cout<<s[i];
        }
        cout<<"\n";
    }
    
    return 0;

}
