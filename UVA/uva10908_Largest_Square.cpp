// uva10908_Largest_Square.cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <math.h>  
using namespace std;

int main() {
    int Case;
    cin >>Case;
    while(Case--){
        int m,n,nCase;
        cin >>m>>n>>nCase;
        cout<<m<<" "<<n<<" "<<nCase<<endl;
        vector <string> v;
        string s;
        for(int i =0;i<n+2;i++){
            s+="0";
        }
        v.push_back(s);
        for(int i =0;i<m;i++){
            string input ;
            cin >>input;
            v.push_back("0"+input+"0");
        }
        
        v.push_back(s);
        // for(int i =0;i<v.size();i++){
        //     cout<<v[i]<<"\n";
        // }
        
        
        while(nCase--){
            int x,y;
            cin >>x>>y;
            x+=1;
            y+=1;
            bool flag = true;
            int ans = 1;
            while(flag){
                if(x+ans > m+1 || y+ans > n+1 || x-ans <0 || y-ans <0){
                    flag = false;
                    break;
                }
                else{
                    for(int i =-ans;i<=ans;i++){
                        for(int j =-ans;j<=ans;j++){
                            if(v[x+i][y+j] != v[x][y]){
                               flag = false;
                            }
                        }
                    }
                    if(flag){
                        ans++;
                    }
                }
            }
            cout <<  (ans-1) *2 + 1<<"\n";
            
        }
        
    }
}