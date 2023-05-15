// uva13171_Pixel_Art.cpp

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


int main() {
    int N;
    std::map<int, std::vector<int>> myMap;

    std::vector<int> arr1 = {1, 0, 0};
    myMap.insert(std::make_pair('M', arr1));
    arr1={0,1,0};
    myMap.insert(std::make_pair('Y', arr1));
    arr1={0,0,1};
    myMap.insert(std::make_pair('C', arr1));
    arr1={1,1,0};
    myMap.insert(std::make_pair('R', arr1));
    arr1={1,1,1};
    myMap.insert(std::make_pair('B', arr1));
    arr1={0,1,1};
    myMap.insert(std::make_pair('G', arr1));
    arr1={1,0,1};
    myMap.insert(std::make_pair('V', arr1));
    arr1={0,0,0};
    myMap.insert(std::make_pair('W', arr1));
    
    
    cin>>N;
   
    while(N--){
       int ans[3];
       for(int i =0;i<3;i++){
           cin >>ans[i];
       }
       string s;
       cin >>s;
       
       for(int i =0;i<s.size();i++){
           for(int j=0;j<3;j++)
             ans[j]-= myMap[s[i]][j];
       }
       
       bool flag = true;
       for(int j=0;j<3;j++){
           if(ans[j]<0){
               flag = false;
           }
       }
       if(flag){
           cout<<"YES ";
           for(int j=0;j<2;j++)
            cout<<ans[j]<<" ";
            cout<<ans[2];
            cout<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
       

    }
   
   
}


