/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 22 / 2025
   Time  : 14:03
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

int sum_of_digit(int n){
    int sum =0;
    while(n){
        sum+=n%10;
        n/=10;
    }
  return sum ;
}
bool cmp(int a, int b){
    return sum_of_digit(a)<sum_of_digit(b);

}

int main() {
    fast_io;
    vector<int>v;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end(),cmp);
    for (auto x:v){
        cout<<" "<<x<<" = "<<sum_of_digit(x)<<nl;
    }
    cout<<nl;
    return 0;
}