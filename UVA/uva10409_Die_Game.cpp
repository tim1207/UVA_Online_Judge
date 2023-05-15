// uva10409_Die_Game.cpp

#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;


int main() {
    int n;
    while(cin>>n &&n!=0){
        map <string, int> mp;
        mp["top"] = 1;
        mp["north"] = 2;
        mp["west"] = 3;
        mp["east"] = 4;
        mp["south"] = 5;
        mp["bottom"] = 6;
        string s;
        for(int i = 0;i<n;i++){
            cin >>s;
            if (s == "east"){
                int tmp = mp["east"];
                mp["east"] = mp["top"];
                mp["top"] = mp["west"];
                mp["west"] = mp["bottom"];
                mp["bottom"] = tmp;
            }
            if (s == "south"){
                int tmp = mp["south"];
                mp["south"] = mp["top"];
                mp["top"] = mp["north"];
                mp["north"] = mp["bottom"];
                mp["bottom"] = tmp;
            }
            if (s == "west"){
                int tmp = mp["west"];
                mp["west"] = mp["top"];
                mp["top"] = mp["east"];
                mp["east"] = mp["bottom"];
                mp["bottom"] = tmp;
            }
            if (s == "north"){
                int tmp = mp["north"];
                mp["north"] = mp["top"];
                mp["top"] = mp["south"];
                mp["south"] = mp["bottom"];
                mp["bottom"] = tmp;
            }
        }
        cout << mp["top"] << "\n";
    }
    return 0;
}



