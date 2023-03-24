// 11824 - A Minimum Land Price

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int Case;
    cin >>Case;
    while(Case--){
        int input;
        vector <int> v;
        while(cin >> input){
            if(input ==0)    break;
            v.push_back(input);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        long long int total = 0;
        int flag = 0;
        for(int i =0;i<v.size();i++){
            total += 2*pow(v[i],i+1);
            if(total > 5000000) {
                flag = 1;
                break;
            }
            //cout<<2*pow(v[i],i+1)<<" ";
        }
        if(flag){
            cout<<"Too expensive"<<endl;
        }
        else
            cout<<total<<endl;
        
    }
    

    return 0;
}
