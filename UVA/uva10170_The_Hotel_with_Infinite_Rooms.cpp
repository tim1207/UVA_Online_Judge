//uva10170_The_Hotel_with_Infinite_Rooms.cpp
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){

    long long int S,D;
	while(cin >>S>>D && (S!=0 || D!=0)){
	    long long int add=S,now = 0;
	    while(now<D){
	        now+=add;
	        add++;
	    }
	    cout<<add-1<<endl;
	}
    
    
    return 0;

}
