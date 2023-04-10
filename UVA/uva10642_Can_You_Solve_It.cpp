// uva10642_Can_You_Solve_It.cpp

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  for (int  i = 1; i <=N; i++)
  {
    long long int ans = 0;
    int x,y,x1,y1;
    cin >>x>>y>>x1>>y1;
    for (int j = 1; j <= x1+y1; j++)
    {
        // from 0 0 
        ans+=j;
    }
    for (int j = 1; j <= x+y; j++)
    {
        // from 0 0 
        ans-=j;
    }


    cout << "Case " << i <<": "<< ans + x1 - x <<"\n" ;
  }
  
}