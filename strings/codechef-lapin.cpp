// Problem
// https://www.codechef.com/problems/LAPIN

#include <bits/stdc++.h>


using namespace std;


int arr[30];

bool fn(string str,int size,int odd) {
    for(int i =0 ; i < size ; i++) {
        arr[str[i]-'a']++;
    }
    for(int i = size+odd ; i < str.size() ; i++) {
     arr[str[i]-'a']--;   
    }

    for(int i = 0 ; i <30 ; i++)
        if(arr[i]) {
            return false;
        }
    return true;
}
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tc;cin >> tc;
    while(tc--) {
        string in; cin >> in;
        memset(arr,0,sizeof(arr));
        int sz = in.size();
        int strsz = sz/2;
        if(in.size()%2) {
            if(fn(in,strsz,1))
                cout << "YES" <<endl;
            else
                cout << "NO" << endl;
        } else {
            if(fn(in,strsz,0))
                cout << "YES" <<endl;
            else
                cout << "NO" << endl;
        }

   }

}