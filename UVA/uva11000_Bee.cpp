//uva11000_Bee.cpp
#include <iostream>

using namespace std;

int main()
{
    int N;
    while(cin >>N && N != -1){
        long long int fbee =1;
        long long int mbee = 0;
        for(int i = 1;i<=N;i++){
            if(i ==1){
                mbee = 1;
            }
            else{
                long long int tfbee = fbee;
                long long int tmbee = mbee;
                long long int nmbee = tmbee+tfbee;
                long long int nfbee = 1+tmbee;
                mbee=nmbee;
                fbee = nfbee;
            }
        }
        cout<<mbee<<" "<<mbee+fbee<<endl;
    }
}
