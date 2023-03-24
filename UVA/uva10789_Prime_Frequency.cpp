// uva10789_Prime_Frequency.cpp

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
    std::vector<int> primes;
    std::vector<bool> isPrime(2002,true);
    primes.push_back(2);
    isPrime[0] = false;
    isPrime[1] =false;
    for(int i=3; i < 2001; i++)
    {
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(i % primes[j] == 0)
            {
                isPrime[i]=false;
                break;
            }
        }
        if(isPrime[i]) 
        {
            primes.push_back(i);
        }
    }
    /*
    for(int i =0;i<primes.size();i++){
        cout<<primes[i]<<" ";
    }
    */
    int Case;
    cin >>Case;
    for(int i =1;i<=Case;i++){
        string s;
        cin >>s;
        vector <pair<char,int>> v;
        v.push_back(make_pair(s[0],1));
        for(int j =1;j<s.size();j++){
            int find = 0;
            for(int k =0;k<v.size();k++){
                if(v[k].first == s[j]){
                    find = 1;
                    v[k].second++;
                }
            }
            if(!find)
                v.push_back(make_pair(s[j],1));
        }
        // for(int j =0;j<v.size();j++){
        //     cout<<v[j].first<<" ";
        // }
        // cout<<endl;
        // for(int j =0;j<v.size();j++){
        //     cout<<v[j].second<<" ";
        // }
        // cout<<endl;
        
        sort(v.begin(),v.end());
        cout<<"Case "<<i<<": ";
        bool isEmpty = true;
        for(int j =0;j<v.size();j++){
            if(isPrime[v[j].second]){
                isEmpty = false;
                cout<<v[j].first;
            }
        }
        if(isEmpty)    cout<<"empty";
        cout<<endl;
        
    }
    

    return 0;
}