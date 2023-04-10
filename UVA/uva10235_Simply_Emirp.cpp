// uva10235_Simply_Emirp.cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <math.h>  
using namespace std;

bool isPrime(long long int n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main() {
   string n;
   while (cin >> n ){
   		string m = n ;
   		long long int a = stoi(n);
   		reverse(n.begin(),n.end());
   		long long int b= stoi(n);
   		if(isPrime(a) && isPrime(b) && (a!=b)){
   			cout<<m<<" is emirp."<<endl;
   		}
   		else if(isPrime(a) ){
   			cout<<m<<" is prime."<<endl;
   		}
   		else{
   			cout<<m<<" is not prime."<<endl;
   		}

    }
}