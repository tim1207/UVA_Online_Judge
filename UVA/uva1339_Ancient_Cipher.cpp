// uva1339_Ancient_Cipher.cpp

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;


int main()
{
    string s1,s2;
    while(cin >>s1>>s2){
        vector <int> a(26,0);
        vector <int> b(26,0);
        // for(int i =0;i<a.size();i++)
        //     cout<<a[i]<<endl;
        if(s1.size() == s2.size()){
            for(int i =0;i<s1.size();i++){
                a[s1[i]-'A']++;
                b[s2[i]-'A']++;
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int flag = true;
            for(int i =0;i<a.size();i++){
                if(a[i] != b[i]){
                    flag = false;
                    break;
                }
            }
            if(flag)    cout<<"YES\n";
            else    cout<<"NO\n";
        }
            
        else    cout<<"NO\n";

    }
    
}


