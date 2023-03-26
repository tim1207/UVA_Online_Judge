// uva11332_Summing_Digits.cpp


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <iomanip>

using namespace std;


int main()
{
    
    
    string s;
    while(cin >>s){
        if(s=="0")  break;
        
        string ans = s;
        while(ans.size()>1){
            int n = 0;
            for(int i =0;i<s.size();i++){
                n +=s[i]-'0';
            }
            ans = to_string(n);
            s = ans;
        }
        cout<<ans<<endl;
        
        
    }
    

    return 0;
}