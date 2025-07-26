#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string &s){
    unordered_map<char,int>mpp;
    
    for(char c : s){
        mpp[c]++;
    }
    for(auto it : mpp){
        if(it.second > 1){
            cout << it.first << " - " << it.second << endl;
        }
    }
}
int main(){
    string s = "geeksforgeeks";
    printDuplicates(s);
}
