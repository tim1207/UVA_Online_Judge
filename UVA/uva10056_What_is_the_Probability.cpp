//uva10056_What_is_the_Probability.cpp
//https://yuihuang.com/zj-e510/
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){

    int s;
	cin>>s;
	while(s--){
    	int n,i;
    	double p;
    	cin >>n>>p>>i;
    	if (p == 0) {
            cout << "0.0000\n";
            continue;
        }
	    else{
	        double ans = p * pow(1-p,i-1) / (1-pow(1-p,n));
	        //等比級數 
		    cout<<fixed<<setprecision(4)<<ans<<endl;
	    }
	    
	}
    
    
    return 0;

}
