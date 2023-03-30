//uva00100_The_3n_+_1_problem.cpp
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    long long int a,b;
    while(cin>>a>>b){
        int ans =0 ;
        for(int i = min(a,b);i<=max(a,b);i++){
            int n = i;
            int count=1;
            while(n!=1){
                if(n%2==1)  n = 3*n+1;
                else n/=2;
                count++;
            }
            ans = max(ans,count);
        }
        cout<<a<<" "<<b<<" "<<ans<<endl;
    }
    return 0;
    
}
