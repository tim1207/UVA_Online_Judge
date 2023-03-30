//uva12019_Doom's_Day_Algorithm.cpp

#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;
//2011/1/1 = friday
int main (){

    int n;
    cin >>n;
    int MD[] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int DD[] ={0,0,31,59,90,120,151,181,212,243,273,304,334,365};
    string week[] ={"Friday", "Saturday", "Sunday","Monday", "Tuesday", "Wednesday", "Thursday"};
    while(n--){
        int month;
        int date;
        cin >>month>>date;
        int totalDays =DD[month]+date;
        cout<<week[totalDays%7]<<endl;
    }
    
    
    return 0;

}
