// uva11150_Cola.cpp

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;


int main(){
    int n;
    while(cin >>n){
        int ans = n;
        while(n>=3){
            ans += n/3 ;
            n = n/3+n%3;
        }
        ans += (n==2) ;
        cout<<ans<<endl;
    }
    

}