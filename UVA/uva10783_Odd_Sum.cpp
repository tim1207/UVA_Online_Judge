// uva10783_Odd_sum.cpp
#include <iostream>
using namespace std;

int main(){
    int Case;
    cin >>Case;
    for(int i =1;i<=Case;i++){
        int a,b;
        cin>>a>>b;
        if(a%2 == 0)    a+=1;
        if(b%2 == 0)    b-=1;
        cout<<"Case "<<i<<": ";
        long long int ans;
        for(int j =a;j<=b;j+=2){
            ans+=j;
        }
        cout<<ans<<endl;
    }
}