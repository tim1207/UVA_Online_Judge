//uva10101_Bangla_Numbers.cpp
#include <iostream>
#include <string> 
#include <vector>
using namespace std;



string solve (long long int input){
    if(input == 0)  return " 0";
    string ans;
    if(input>=10000000){
        ans = solve(input/10000000);
        ans +=" kuti";
        input%=10000000;
    }
    if(input>=100000){
        ans += " "+to_string(input/100000);
        ans +=" lakh";
        input%=100000;
    }
    if(input>=1000){
        ans += " "+to_string(input/1000);
        ans +=" hajar";
        input%=1000;
    }
    if(input>=100){
        ans += " "+to_string(input/100);
        ans +=" shata";
        input%=100;
    }
    if(input != 0)
        ans += " "+to_string(input);
    return ans;
    
    

}

int main (){

    long long int input;
    int i =1;
    while (cin >> input){
        string s =solve(input);
        cout<<" "<<i++<<"."<<s<<endl;
    }
    
    
    return 0;

}
