// 11240 - Antimonotonicity

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int Case;
    cin >>Case;
    while(Case--){
        vector<int> v;
        int n ;
        cin >>n;
        for(int i =0;i<n;i++){
            int k;
            cin >>k;
            v.push_back(k);
        }
        int flag = 0;
        int sum =1;
        for(int i =1;i<n;i++){
            if(flag == 0 && v[i-1]>v[i]){
                sum ++;
                flag =1;
            }
            else if(flag == 1 && v[i-1]<v[i]){
                sum ++;
                flag = 0;
            }
        }
        
        
        cout<<sum<<endl;
        
        
        //cout<<"\n";
    }
    

    return 0;
}
