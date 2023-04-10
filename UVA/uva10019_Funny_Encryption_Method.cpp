// uva10019_Funny_Encryption_Method.cpp

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int decToBin(int a){
    vector<int> ans;
    while(a>=1){
        ans.push_back(a%2);
        a/=2;
    }
    
    
    return count(ans.begin(),ans.end(),1);
}

int main()
{
    int Case;
    cin>>Case;
    while(Case--){
        string input;
        cin>>input;
        int ans = 0;
        for(int i =0;i<input.size();i++){
            ans+=decToBin((int)input[i]-48);
        }
        cout<<decToBin(stoi(input))<<" "<<ans<<endl;
    }

    return 0;
}
