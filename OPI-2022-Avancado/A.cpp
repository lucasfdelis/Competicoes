#include<bits/stdc++.h>
#define f first
#define s second
#define sz size
#define mp make_pair
#define endl "\n"

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

template <class T>
ostream& operator << (ostream& os, const vector<T>& v){
    int quantity = 0;
    for(typename vector<T>::const_iterator ii = v.begin(); ii != v.end(); ii++){
        quantity == 0 ? os << *ii : os << " " << *ii;
        quantity++;
    }
    os << endl;
    return os;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(0);

    ll k, n, w;
    cin >> k >> n >> w;
    ll An = k + (w-1)*k;
    ll t = (((ll) k + (ll) (An))* (ll) w)/(ll)2;


    if((t - n) > 0){
        cout <<(t - n) << endl;
    }else{
        cout << 0 << endl;
    }
    

    return 0;
}
// g++ -Wall -std=c++17 a.cpp -o main && ./main < in
