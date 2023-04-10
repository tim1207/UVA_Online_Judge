// uva00948_Fibonaccimal_Base.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector <long long int> v;
    v.push_back(1);
    v.push_back(1);
    int index = 1;
    while(v[index]<=100000000){
        v.push_back(v[index]+v[index-1]);
        index++;
    }
    v.erase(v.begin());
    reverse(v.begin(),v.end());
    int Case;
    cin>>Case;
    
    
    for(int i =0;i<Case;i++){
        int input;
        vector <int> ans;
        cin>>input;
        cout<<input<<" = ";
        bool flag = false;
        for(int j =0;j<v.size();j++){
            if(input>=v[j]){
                flag = true;
                input -=v[j];
                ans.push_back(1);
            }
            else{
                if(flag){
                    ans.push_back(0);
                }
            }
        }
        for(int j =0;j<ans.size();j++){
            cout<<ans[j];
        }
        cout<<" (fib)"<<endl;

    }

    return 0;
}
