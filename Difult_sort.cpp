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

void solve() {
    // code here 
    vector<pii>v;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    for (auto x:v){
        cout<<"("<<x.first<<" "<<x.second<<")\n";
    }
}

int main() {
    //fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}