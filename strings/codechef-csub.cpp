// Problem
// https://www.codechef.com/problems/CSUB

#include <bits/stdc++.h>


using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tc,n; cin >> tc;
    while(tc--) {
        long long ones=0;
        string in;int size; cin >> size;
        long long count=0;
        cin >> in;
        for(int i = 0 ; i < size; i++) {
            if(in.at(i) == '1') {
               ones++;
               count += ones;
            }
        }
        cout <<count << endl; // or count = ones*(ones+1)/2;
       
    }
}