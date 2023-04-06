//uva10268_498_bis.cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
 

 
int main() {
	string s;
	int x;
	vector <int> v;
    while (cin >> x){
        getline(cin, s);// 吃空白
		getline(cin, s);
        stringstream ss(s);
        v.clear();
        while (ss >> s){
            v.push_back(stoi(s));
        }
        //cout<<"\n";
        v.pop_back();
        reverse(v.begin(), v.end());
        long long mul = 1;
        int ans = 0;
        for (int i = 0; i < v.size(); i++){
            //cout << "i: " << i << " " << v[i] << " " << ans << " " << mul << "\n";
            ans += v[i]*(i+1)*mul;
            mul *= x;
        }
        cout << ans << "\n";
    }
}