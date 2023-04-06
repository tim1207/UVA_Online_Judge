// uva10812_Beat_the_Spread.cpp

#include <iostream>
using namespace std;

int main(){
    int Case;
    cin >>Case;
    for(int i =1;i<=Case;i++){
        int s,d;
        cin>>s>>d;
        // a+b a-b
        if((s+d)%2){
            cout<<"impossible\n";
        }
        else{
            int a,b;
            a = (s+d)/2;
            b = s-a;
            if(b>a){
                int temp = b;
                b =a;
                a = temp;
            }
            if(a<0 || b<0){
                cout<<"impossible\n";
            }
            else    cout<<a<<" "<<b<<endl;
        }
        
    }
}