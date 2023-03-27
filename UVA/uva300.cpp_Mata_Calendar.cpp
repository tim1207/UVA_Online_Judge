// uva300.cpp_Mata_Calendar.cpp

#include <iostream>
#include <map>

using namespace std;

map<string, int> Haab{
        {"pop", 0},  {"no", 1},     {"zip", 2},    {"zotz", 3},    {"tzec", 4},
        {"xul", 5},  {"yoxkin", 6}, {"mol", 7},    {"chen", 8},    {"yax", 9},
        {"zac", 10}, {"ceh", 11},   {"mac", 12},   {"kankin", 13}, {"muan", 14},
        {"pax", 15}, {"koyab", 16}, {"cumhu", 17}, {"uayet", 18}};
string Day[] ={
    "imix", "ik", "akbal", "kan", "chicchan",
"cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau" };


// h 365
// t 260
int main()
{
    int Case;
    cin >>Case;
    cout<<Case<<endl;
    while(Case--){
        int hday,hyear;
        char dot;
        string hMonth;
        int sum ;
        cin >>hday>>dot>>hMonth>>hyear;
        //cout<<hday<<hMonth<<hyear<<endl;
        sum = hyear*365 + 20*Haab[hMonth]+hday;
        // sum %=260;
        
        // int tMonth = sum / 20;
        // string tDay = Day[sum %13 +1];
        cout<<sum %13 +1<<" "<<Day[sum%20]<<" "<<sum / 260<<endl;
        
        
        
    }

    return 0;
}
