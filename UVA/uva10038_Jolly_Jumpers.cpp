//uva10038_Jolly_Jumpers.cpp

#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;
int main (){

    int n;
    while(cin>>n){
        int pre;
        cin >>pre;
        vector <int> v;
        for(int i =1;i<n;i++){
            int input;
            cin >>input;
            v.push_back(abs(pre-input));
            pre = input;
        }
        sort(v.begin(),v.end());
        bool isJolly = true;
        // for(int i =0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for(int i =0;i<v.size();i++){
            if(v[i] != i+1){
                isJolly = false;
                break;
            }
        }
        if(isJolly) cout<<"Jolly\n";
        else    cout<<"Not jolly\n";
        
        
    }
    
    
    return 0;

}
