//Just Believe in God, he'll make everyone believe in you :>

#include <bits/stdc++.h>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

// if(x & y) = z then x&z = z and y&z = z <- always true but reverse may not as it can x and y are supermasks of z but together can't make z
//-------------------------------------------------------------------------------------------------
#define int                                          long long
#define Yes                                          cout <<"Yes\n";
#define No                                           cout <<"No\n";
#define YES                                          cout <<"YES\n";
#define NO                                           cout <<"NO\n";
#define sp                                           <<" "<<
#define ndl                                          "\n"
#define pb                                           push_back
#define pp                                           pop_back
#define len(x)                                       ((int)(x).size())
#define nlin                                         cout <<"\n";
#define r_deci(x)                                    <<fixed<<setprecision(x)<< //for setting a fixed number of decimal places
#define gcd(a,b)                                     __gcd(a,b)
#define all(x)                                       (x).begin(), (x).end()
#define ff                                           first
#define ss                                           second
#define minus1                                       cout <<"-1"<< endl;
#define one                                          cout <<"1" << endl;
#define zero                                         cout <<"0" << endl;
#define forf(k,n)                                    for(int i = k; i<n; i++)
#define forb(n,k)                                    for(int i = n-1; i>=k; i--)
#define read(arr)                                    for(int i =0; i<n; i++)cin>>(arr)[i];
#define tc(t)                                        int (t); cin >> (t); while((t)--)
#define take(v)                                      forf(0,n){int x; cin >> x; (v).pb(x);}
#define put(x)                                       cout <<(x)<<" ";
#define print(arr)                                   for(int i =0; i<n; i++){cout << (arr)[i] <<" ";} nlin 

#ifndef ONLINE_JUDGE
#define dbg(x)  cerr << #x << " ";_print(x); cerr << endl;
#else
#define dbg(x)
#endif


// typedef tree<int, null_type, less<int>/*greater<int>*/, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

typedef vector<int>                                   vi;
typedef set<int>                                      si;
typedef unordered_set<int>                            usi;
typedef pair<int, int>                                pii;
typedef map<int, int>                                 mii;
typedef unordered_map<int, int>                       umii;
typedef unsigned long long                            ull;

const int M=1e9+7;

void _print(int a){cerr << a;}
void _print(char a){cerr << a;}
void _print(string a){cerr << a;}
void _print(double a){cerr << a;}
void _print(bool a){cerr << a;}

template <class T > void _print(vector<T> v){cerr << "[ ";for(T i : v){_print(i); cerr << " ";} cerr << "]";}
template <class T > void _print(set<T> v){cerr << "[ ";for(T i : v){_print(i); cerr << " ";} cerr << "]";}
template<class T, class V>void _print(pair<T, V> p){cerr <<"[ "; _print(p.first); cerr <<" "; _print(p.second); cerr <<"]";}
template<class T , class V> void _print(map < T, V> m){cerr <<"{ ";for(auto i : m){_print(i) ; cerr <<" ";} cerr <<"}";}
template<class T> void _print(multiset <T> mst){cerr << "[ ";for(T i : mst){_print(i); cerr << " ";} cerr << "]";}
//-------------------------------------------------------------------------------------------------

int g (int n){
    return n ^(n >> 1);
}

string decimalToBinary(int decimal) {
    string binary;
    
    if (decimal == 0) {
        binary = "0";
    } else {
        while (decimal > 0) {
            binary = (decimal % 2 == 0 ? "0" : "1") + binary;
            decimal /= 2;
        }
    }
    
    return binary;
}
void solve(){
    //Gray code -> binary numbers differs in 1 bit only
    int n;
    cin >> n;
    int x = pow(2, n);
    string ans = decimalToBinary(g(x-1));
    for(int i =0; i< x; i++){
        string t = decimalToBinary(g(i));
        dbg(len(t))
        for(int j = len(t); j < len(ans); j++){
            t = '0' + t;
        }
        cout << t <<"\n";
    }
}
signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
   // tc(t) {
      // cout <<"Case #"<<t<<"\n";
      solve();
   // }
   return 0;
}
