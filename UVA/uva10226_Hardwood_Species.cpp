// uva10226_Hardwood_Species.cpp

#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;


int main() {
    int Case;
    cin >>Case;
    string s;
    getline(cin,s);
    getline(cin,s);
    while(Case--){
        float num = 0;
        map <string , float> treeMap;
        while(getline(cin,s) && s != ""){
            num ++;
            treeMap[s]++;
        }
        for ( auto it : treeMap ) {
            cout<<it.first<<" "<<fixed<<setprecision(4)<<it.second*100/num<<endl;
        }
        cout<<endl;
    }
    return 0;
}
