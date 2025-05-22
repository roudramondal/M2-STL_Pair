/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 22 / 2025
   Time  : 14:21
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


int main() {
    fast_io;
    // set<pair<string,string>>v;
    // int n;
    // cin>>n;
    // for (int i=0;i<n;i++){
    //     string a,b;
    //     cin>>a>>b;
    //     v.insert({a,b});
    // }
    // cout<<v.size()<<nl;
    cout<<nl;
    int n;
    cin>>n;
    map<pair<string,string>,int>m;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        m[{a,b}]=1;
    }
    cout<<m.size()<<nl;
    for (auto x:m){
        cout<<x.first.first<<" "<<x.first.second<<"->"<<x.second<<nl;
    }

    return 0;
}
