// uva10050_Hartals.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>


using namespace std;


int main()
{
    int Case;
    cin >> Case;
    while(Case--){
        int Day;
        cin >>Day;
        int num;
        cin >> num;
        int Days[Day+1];
        memset(Days,0,sizeof(Days));
        for(int i =0;i<num;i++){
            int a;
            cin >>a;
            for(int j =0;j<Day+1;j++){
                if(j%a==0)  Days[j] = 1;
            }
            
        }
        // 0 1 7 8
        for(int i =0;i<Day+1;i++){
            if(i%7==0 || i%7==6)    Days[i] = 0;
        }
            
        
        
        // for(int i =0;i<Day;i++){
        //     if(i<10)    cout<<"  "<<i;
        //     else    cout<<" "<<i;
        // }
        // cout<<endl;
        
        // for(int i =0;i<Day;i++)
        //     cout<<"  "<<Days[i];
        // cout<<endl;
        
        cout<<count(Days,Days+Day+1,1)<<endl;
    }

    return 0;
}
