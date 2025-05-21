/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 21 / 2025
   Time  : 18:07
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define pll pair<<ll ,ll>

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

bool cmp(pii x, pii y) {
    // code here 
   
    if  (x.first==y.first){
         if (x.second<y.second) return true;
         else return false;
    }
    if (x.first >y.first) return true;
    else return false;
    
}

int main() {
    fast_io;
    // int t;
    // cin >> t;
    // while (t--) {
     vector<pii>v;
    
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    for (auto c:v){
        cout<<c.first<<" "<<c.second<<nl;
    }
        
    //}
    return 0;
}