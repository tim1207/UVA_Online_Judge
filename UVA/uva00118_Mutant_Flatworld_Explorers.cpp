// uva00118_Mutant_Flatworld_Explorers.cpp

#include <iostream>
#include <map>
#include <cstring>
using namespace std;


int main(){
    map <char,int> mp;
    mp['N'] = 0;
    mp['E'] = 1;
    mp['S'] = 2;
    mp['W'] = 3;
    map <int,char> mpd;
    mpd[0] = 'N';
    mpd[1] = 'E';
    mpd[2] = 'S';
    mpd[3] = 'W';
    
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    int a,b;
    cin >>a>>b;
    int map[a+1][b+1];
    int x,y;
    char d;
    memset(map,0,sizeof(x));
    while(cin>>x>>y>>d){
        int nd = mp[d];
        string s;
        cin >> s;
        int islost = 0;
        for(int i =0;i<s.size();i++){
            
            if(s[i]=='R'){
                nd+=1;
                nd%=4;
            }
            if(s[i]=='L'){
                nd+=3;
                nd%=4;
            }
            if(s[i]=='F'){
                int nx = x + dx[nd];
                int ny = y + dy[nd];
                if(nx > a || ny > b || nx < 0 || ny < 0){
                    if(map[x][y] ==1)   continue;
                    else{
                        map[x][y] = 1;
                        cout<<x<<" "<<y<<" "<<mpd[nd]<<" LOST"<<endl;
                        islost = 1;
                        
                    }
                }
                else{
                    x = nx;
                    y = ny;
                }
                
            }
        }
        if(!islost)
            cout<<x<<" "<<y<<" "<<mpd[nd]<<endl;
        
        
    }
    
    
    
    return 0;
}