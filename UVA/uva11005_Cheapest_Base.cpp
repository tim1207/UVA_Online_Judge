// uva11005_Cheapest_Base.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


using namespace std;


int main()
{
    int Case;
    cin >> Case;
    int x=1;
    while(Case--){
        map<int,int> M;
        for(int i = 0;i<36;i++){
            int a;
            cin >> a;
            M[i] = a;
        }
        
        int n;
        cin>>n;
        cout<<"Case "<<x++<<":\n";
        
        while(n--){
            long long int input,copyInput,ans,sum=2000000000;
            cin >>input;
            vector <pair<int,int>> v;
            for(int i = 2;i<=36;i++){
                copyInput = input;
                ans = 0;
                while(copyInput>0){
                    ans +=M[copyInput%i];
                    copyInput/=i;
                }
                //cout<<i<<" "<<ans<<endl;
                v.push_back(make_pair(i,ans));
                sum = min(sum,ans);
                
            }
            //cout<<"sum ="<<sum<<endl;
            cout<<"Cheapest base(s) for number "<<input<<": ";
            for(int i =0;i<v.size();i++){
                if(v[i].second == sum)  cout<<v[i].first<<" ";
            }
            cout<<"\n";

        }
        if(Case)
            cout<<endl;
        
    }

    return 0;
}
