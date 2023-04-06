// uva11349_Symmetric_Matrix.cpp

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
 

 
int main() {
	int T ,n;
	char ch;
	cin>>T;
	for (int k=1;k<=T;k++){
		cin >> ch >> ch >> n;
		
		long long int a[n][n];
        bool flag = true;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                if (a[i][j] < 0) 
                	flag = false;
            }
        }
        cout << "Test #" << k << ": ";
        if (!flag){
            cout << "Non-symmetric.\n";
            continue;
        }
        
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (a[i][j] - a[n-i-1][n-j-1] != 0) 
                	flag = false;
            }
        }
        if (flag) cout << "Symmetric.\n";
        else cout << "Non-symmetric.\n";

	}
}