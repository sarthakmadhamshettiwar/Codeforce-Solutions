#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
#define pb push_back
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define gcd(a,b) __gcd(a,b)
#define cin(v) for(ll i=0; i<v.size(); i++){	cin>>v[i]; }
#define all(v) (v).begin(),(v).end()
#define cout(v)	for(ll i=0; i<v.size(); i++){	cout<<v[i]<<" ";	}

 void solve(){
 	ll n;
 	cin>>n;
 	vll v(n);
 	cin(v);

 	/*vll b(n);
 	ll cnt=0;
 	b[3]=0;
 	rep(i,4,n){
 		b[i] = ((b[i-1]/v[i])+1)*v[i]; 
 		cnt += b[i]/v[i];
 	}
 	for(int j=2; j>=0; j--){
 		b[j] = (abs(b[j+1]/v[j]) + 1)*(-1)*v[j];
 		cnt += abs(b[j]/v[j]);
 	}
 	cout<<cnt<<"\n";
 	cout(b);*/
 	vll b(n);
 	ll cnt=0;
 	ll ans = INF;
 	rep(k,0,n){
 		//i-th element will be kept as 0
 		rep(i,0,n){
 			b[i]=0;
 		}
 		cnt=0;
 		rep(i,k+1,n){
 		b[i] = ((b[i-1]/v[i])+1)*v[i]; 
 		cnt += b[i]/v[i];
 		}

 		for(ll j=k-1; j>=0; j--){
 		b[j] = (abs(b[j+1]/v[j]) + 1)*(-1)*v[j];
 		cnt += abs(b[j]/v[j]);
 		}
 		//cout(b);
 		//cout<<"\n";
 		ans = min(cnt,ans);
 		//cout<<" ->"<<ans<<"\n";
 		
 	}
 	cout<<ans;
 }
 
 
int main()
{
	/*int t;
	//cin>>t;
	t=1;
	while(t--){
		solve();
		cout<<"\n";
	}*/
	solve();
	return 0;
}