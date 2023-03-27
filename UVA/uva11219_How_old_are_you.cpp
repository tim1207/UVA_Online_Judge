// uva11219_How_old_are_you.cpp

#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;


int main()
{
    int Case;
    cin >>Case;
    for(int i =1;i<=Case;i++){
        int day,month,year;
        int day1,month1,year1;
        char c;
        string s;
        getline(cin,s);
        cin >>day>>c>>month>>c>>year;
        cin >>day1>>c>>month1>>c>>year1;
        // cout<<day<<month<<year<<endl;
        // cout<<day1<<month1<<year1<<endl;
        cout<<"Case #"<<i<<": ";
        if(year1>year){
            printf("Invalid birth date\n");
        }
        else if(year1 == year ){
            if(month1>month){
                printf("Invalid birth date\n");
            }
            else if(month1 == month ){
                if(day1>day) printf("Invalid birth date\n");
                else    printf("0\n");
            }
            else{
                cout<<"0"<<endl;
            }
            
        }
        else{
            if(month1 > month){
                if(year-year1-1>130)    cout<<"Check birth date\n";
                else    cout<<year-year1-1<<endl;
            }
            else if (month1 == month){
                if(day1>day){
                    if(year-year1-1>130)    cout<<"Check birth date\n";
                    else  cout<<year-year1-1<<endl;
                }
                else if (year - year1 > 130)
                        printf("Check birth date\n");
                else    cout<<year-year1<<endl;
            }
            else{
                if(year-year1>130)    cout<<"Check birth date\n";
                else    cout<<year-year1<<endl;
            }
        }
    }
}