#include <bits/stdc++.h>
#define ll unsigned long long int
#define mod 10e9 + 7
#define endl "\n"
#define re(x, n) for(ll x = 0; x < n; ++x)
#define pb push_back
#define mk make_pair
#define F first
#define S second
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "


//void solve(ll arr[], ll n) {
	//re(i, n) {
		//bool flag = false;
		//for(ll j = i + 1; j < n; ++j) {
			//if(arr[i] <= arr[j]) {
				//flag = true;
				//break;
			//}
		//}
		//if(flag == false) {
			//cout << arr[i] << " ";
		//}
	//}
//}

void solve(ll arr[], ll n) {
	ll ci = arr[n - 1];
	cout << ci << " ";
	for(int i = n - 2; i >= 0; --i) {
		if(ci < arr[i]) {
			ci = arr[i];
			cout << ci << " ";
		}
	}  
}

signed main() {
	ll n;
	cin >> n;
	ll arr[n];
	re(i, n) {
		cin >> arr[i];
	}
	solve(arr, n);
	cout << endl;
}

static const auto speedup = [](){
  ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  return 0;
}();