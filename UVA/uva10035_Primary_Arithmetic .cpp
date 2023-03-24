//10035: Primary Arithmetic 

#include <iostream>
using namespace std;
int main()
{
    long int a,b;    
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        int count = 0;
        int carry = 0;
        while(a!=0 || b!=0){
            if ((a%10+b%10+carry)>=10){
                carry=1;
                count++;
            }
            else{
                carry=0;
            }
            a/=10;
            b/=10;
        }
        switch (count)
        {
        case 0:
            cout<<"No carry operation."<<endl;
            break;
        case 1:
            cout<<"1 carry operation."<<endl;
            break;
        
        default:
            cout<<count<<" "<<"carry operations."<<endl;
            break;
        }
    }
    return 0;
}
