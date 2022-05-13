#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
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
	vector<bool> check(n+1,false);
	cin(v);
	vll b, c;
	// b is the vector of duplicates and out of range elements.
	ll cnt = 0;
	rep(i,0,n){
		if(v[i]<=n && check[v[i]]==false){
			check[v[i]]=true;
		}
		else{
			// if element is out of range or repeated then push it into b.
			b.pb(v[i]);
		}
	}
	rep(i,1,n+1){
		if(check[i]==false){
			//all the elements which are not present in the array but should be present in permutations
			// are pushed in vec c.
			c.pb(i);
		}
	}
	sort(all(b));	//part of greedy algorithm
	/*cout(b);
	cout<<"\n";
	cout(c);
	cout<<"\n";*/
	bool ch=true;
	rep(i,0,b.size()){
		//size of b and size of c will always remain same.
		//THINK !!!
		if(b[i] > 2*c[i]){
			cnt++;
		}
		else{
			cout<<"-1";
			ch=false;
			break;
 
		}
	}
	if(ch){
		cout<<b.size();
	}
	/*cout(b);
	cout<<"\n";
	cout(c);*/
 
}
 
 
int main()
{
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
	return 0;
}