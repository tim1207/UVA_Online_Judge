// uva10336_Rank_the_Languages.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<string> &world, vector<vector<int>> &isVisited ,int i,int j){
    isVisited[i][j] = 1;
    // down right up left 
    if (world[i + 1][j] == world[i][j] && !isVisited[i + 1][j]) {
        dfs(world, isVisited, i + 1, j);
    }
    if (world[i][j + 1] == world[i][j] && !isVisited[i][j + 1]) {
        dfs(world, isVisited, i, j + 1);
    }
    if (world[i - 1][j] == world[i][j] && !isVisited[i - 1][j]) {
        dfs(world, isVisited, i - 1, j);
    }
    if (world[i][j - 1] == world[i][j] && !isVisited[i][j - 1]) {
        dfs(world, isVisited, i, j - 1);
    }
}


bool cmp(pair<char,int> a, pair<char,int> b){
    if(a.second ==b.second){
        if(a.first<b.first) return true;
        else return false;
    }
    return a.second >b.second;
}

int main()
{
    int N;
    cin >>N;
    for(int i =1;i<=N;i++){
        int a,b;
        vector<string> world;
        vector<vector<int>> isVisited;
        vector<pair<char,int>> count;
        cin >> a >>b;
        
        world.push_back(string(b+2,'0'));
        isVisited.push_back(vector<int>(b+2,1));
        for(int j =1;j<a+1;j++){
            string s;
            cin >>s;
            vector<int> v;
            world.push_back("0"+s+"0");
            v.push_back(1);
            for(int k =0;k<s.size();k++)
                v.push_back(0);
            v.push_back(1);
            isVisited.push_back(v);
        }
        world.push_back(string(b+2,'0'));
        isVisited.push_back(vector<int>(b+2,1));
        
        for(int j =1;j<a+1;j++){
            for(int k =1;k<b+1;k++)
                if(!isVisited[j][k]){
                    int find = 0;
                    for(int l =0;l<count.size();l++){
                        if(count[l].first == world[j][k]){
                            find = 1;
                            count[l].second++;
                            break;
                        }
                    }
                    if(!find)
                        count.push_back(make_pair(world[j][k],1));
                    dfs(world,isVisited,j,k);
                }
        }
        sort(count.begin(),count.end(),cmp);
        
        /*
        for(int j =0;j<world.size();j++){
            cout<<world[j]<<endl;
        }
        
        for(int j =0;j<a+2;j++){
            for(int k =0;k<b+2;k++){
                cout<<isVisited[j][k];
            }
            cout<<endl;
        }
        */
        cout<<"World #"<<i<<endl;
        for(int j =0;j<count.size();j++){
            cout<<count[j].first<<": "<<count[j].second<<endl;
        }
        
        
    }

    return 0;
}
