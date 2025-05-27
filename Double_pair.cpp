/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 21 / 2025
   Time  : 15:54
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

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // code here 
    pair<int,pair<int,string>>p; // input 3 value
    // assigning values 
    // p.first=1;
    //p.second={10,4};
    cin>>p.first>>p.second.first>>p.second.second;
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<nl;

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
