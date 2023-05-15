// uva10415_Eb_Alto_Saxophone_Player.cpp

#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <vector>
using namespace std;


int main() {
    int Case;
    cin >>Case;
    string s;
    getline(cin,s);
    map <char,vector<int>> table;
    table['c'] = {0,0,1,1,1,0,0,1,1,1,1};
    table['d'] = {0,0,1,1,1,0,0,1,1,1,0};
    table['e'] = {0,0,1,1,1,0,0,1,1,0,0};
    table['f'] = {0,0,1,1,1,0,0,1,0,0,0};
    table['g'] = {0,0,1,1,1,0,0,0,0,0,0};
    table['a'] = {0,0,1,1,0,0,0,0,0,0,0};
    table['b'] = {0,0,1,0,0,0,0,0,0,0,0};
    table['C'] = {0,0,0,1,0,0,0,0,0,0,0};
    table['D'] = {0,1,1,1,1,0,0,1,1,1,0};
    table['E'] = {0,1,1,1,1,0,0,1,1,0,0};
    table['F'] = {0,1,1,1,1,0,0,1,0,0,0};
    table['G'] = {0,1,1,1,1,0,0,0,0,0,0};
    table['A'] = {0,1,1,1,0,0,0,0,0,0,0};
    table['B'] = {0,1,1,0,0,0,0,0,0,0,0};
    
    while(Case--){
        vector <int> finger_status(11,0);
        vector <int> ans(11,0);
        getline(cin,s);
        for(int i = 0;i<s.size();i++){
            for(int j =0;j<finger_status.size();j++){
                if(table[s[i]][j] ==1 && finger_status[j] ==0){
                    ans[j]++;
                }
            }
            finger_status = table[s[i]];
        }
        for(int j =1;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}



