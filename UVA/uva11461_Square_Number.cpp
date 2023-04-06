// uva11461_Square_Number.cpp

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 

 
int main() {
	int a,b;
    while(cin>>a>>b &&(a!=0||b !=0)){
        if((sqrt(a)) == (int)(sqrt(a)))
            cout<<(int)sqrt(b)-sqrt(a)+1<<endl;
        else
            cout<<(int)sqrt(b)-floor(sqrt(a))<<endl;
    }
    return 0;
}