//uva10929_You_can_say_11.cpp
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    string s;
    while(cin>>s && s!="0"){
        int sum =0;
        for(int i =0;i<s.size();i++){
            if(i%2==1) sum = sum -(s[i]-'0');
            else sum = sum +(s[i]-'0');
        }
        if(sum%11==0){
            cout<<s <<" is a multiple of 11."<<endl;
        }
        else    cout<<s <<" is not a multiple of 11."<<endl;
        
    }
    return 0;
    
}