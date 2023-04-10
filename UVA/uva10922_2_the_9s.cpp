// uva10922_2_the_9s.cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <math.h>  
using namespace std;

int AddAll(string a){
    long long int b = 0;
    for(int i =0;i<a.size();i++){
        b += a[i]-'0';
    }
    return b;
}






int main() {
    string n;
    while (cin >> n &&n !="0"){
        int now = AddAll(n);
        int degree = 1;
        bool is9 = false;
        if(now%9 == 0){
            is9 = true;
        }
        while(now > 9 && is9){
            now = AddAll(to_string(now));
            degree++;
        }
        if(is9){
             cout<<n<<" is a multiple of 9 and has 9-degree "<<degree<<".\n";
        }
        else{
            cout<<n<<" is not a multiple of 9.\n";
        }
       	
    
    }
}