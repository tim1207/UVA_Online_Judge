//uva10041_Vito's_Family.cpp
// 中位數
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >>N;
    while(N--){
        int num;
        cin >>num;
        vector<int> v ;
        for(int i =0;i<num;i++){
            int a;
            cin >>a;
            v.push_back(a);
        }
        
        // for(int i =0;i<num;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        sort(v.begin(),v.end());
        int l  = v.size();
        int sum = 0;
        for (int i = 0; i < l; i++){
            sum += abs(v[i] - v[l/2]);
        }
        cout << sum << "\n";
        
    }
}
