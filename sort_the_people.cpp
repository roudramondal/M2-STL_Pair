/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 21 / 2025
   Time  : 19:56
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

// void solve() {
//     // code here 
// }
bool cmp(pair<pair<string,string>,int>&a,pair<pair<string,string>,int>&b){
  if (a.first==b.first){
    if (a.second>b.second)return true;
        return false;
  }
  if (a.first.second==b.first.second){
    if(a.first.first<b.first.first)return true;
     return false;
  }
  if (a.first.second <b.first.second)return true;
   return false ;
}


int main() {
    fast_io;
    vector<pair<pair<string,string>,int>>per;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string first_p,last_p;
        int year;
        cin>>first_p>>last_p>>year;
        per.pb({{first_p,last_p},year});
    }
    cout<<nl;
    sort(per.begin(),per.end(),cmp);
    for (auto x:per){
        cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<nl;
    }
    return 0;
}