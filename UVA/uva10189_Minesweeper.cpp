//10189	Minesweeper

#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    
    int row ,col;
    int flag = 0;
    int Case = 0;
    while(cin >>row>>col){
        if(row == 0 || col ==0) break;
        if(flag>0)  cout<<endl;
        flag++;
        
        char Map[row+2][col+2];
        memset(Map,'0',sizeof(Map));
        
        for(int i =1;i<row+1;i++){
            for(int j =1;j<col+1;j++){
                char a;
                cin >> a;
                Map[i][j] = a;
            }
        }
        // for(int i =0;i<row+2;i++){
        //     for(int j =0;j<col+2;j++){
        //         cout<<Map[i][j];
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        int ans[row+2][col+2];
        memset(ans,0,sizeof(ans));
        
        for(int i =1;i<row+1;i++){
            for(int j =1;j<col+1;j++){
                if(Map[i][j] =='*'){
                    ans[i-1][j-1]++;
                    ans[i-1][j]++;
                    ans[i-1][j+1]++;
                    ans[i][j-1]++;
                    //ans[i][j]++;
                    ans[i][j+1]++;
                    ans[i+1][j-1]++;
                    ans[i+1][j]++;
                    ans[i+1][j+1]++;
                }
            }
        }
        
        
        // for(int i =0;i<row+2;i++){
        //     for(int j =0;j<col+2;j++){
        //         cout<<ans[i][j];
        //         }
            
        //     cout<<endl;
        // }
        // cout<<endl;
        
        std::cout << "Field #"<<++Case<<":"<< std::endl;
        for(int i =1;i<row+1;i++){
            for(int j =1;j<col+1;j++){
                if(Map[i][j] =='*'){
                    cout<<'*';
                }
                else{
                    cout<<ans[i][j];
                }
            }
            cout<<"\n";
        }
        //cout<<"\n";

    }
    

    return 0;
}
