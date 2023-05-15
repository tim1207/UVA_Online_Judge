// uva12908_The_book_thief.cpp

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int inputNum;
    vector <int> v;
    for(int i =0;i<20000;i++){
        v.push_back(((1+i)*i)/2);
    }

    while(cin>>inputNum &&inputNum !=0 ){
        auto it = upper_bound(v.begin(), v.end(), inputNum);
        std::cout << *it-inputNum << " "<<it-v.begin()<<std::endl;
    }
    return 0;
}



