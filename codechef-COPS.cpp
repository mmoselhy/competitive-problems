//---------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;


int arr[101];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
  
	int tc,M,x,y;
    cin >> tc;
    while(tc--) {
        memset(arr,0,sizeof(arr));
        cin >> M >> x >> y;
        int range = x*y;
        for(int i =0 ; i < M ; i++) {
            int h; cin >> h;
            int start = (h-range) < 0 ? 0 : h-range ;
            int end = (h+range)>101 ? 100 : h+range;
            for(int k = start; k <= end; k++) {
                arr[k]=1;
            }
        }
        int cnt=0;
        for(int i =1 ;i <=100 ; i++)
            if(!arr[i]) cnt++;
        cout << cnt << endl;
    }
}
