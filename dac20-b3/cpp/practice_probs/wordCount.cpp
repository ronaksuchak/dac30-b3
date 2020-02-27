#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
   string s;
   getline(cin,s);
    int counter = 0;
   for (char const &c: s) {
		if(c == ' '){
            counter++;
        }
	}
    cout<<counter+1;
   

}