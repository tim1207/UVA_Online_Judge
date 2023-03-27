// uva10190_Divide_But_Not_Quite_Conquer.cpp

#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main()
{
    long long int n,m;
    while(cin >>n>>m){
        bool isboring = false;
        std::vector<int> v;
        if(m==0||m==1||n ==0||n==1){
            isboring = true;
        }
        else{
            while(n >1){
                if(n%m != 0){
                    isboring = true;
                    break;
                }
                else{
                    v.push_back(n);
                    n/=m;
                }
            }
        }
        if(isboring)    cout<<"Boring!\n";
        else{
            v.push_back(1);
            for(int i =0;i<v.size();i++){
                if(i != v.size()-1)
                    cout<<v[i]<<" ";
                else
                    cout<<v[i];
            }
            cout<<endl;
        }
    }
}
