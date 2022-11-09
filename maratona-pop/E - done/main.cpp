#include <bits/stdc++.h>
// #define f first
// #define s second
#define sz size
#define pb push_back
#define mp make_pair
using namespace std;
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

template < class T >
ostream& operator << (ostream& os, const vector<T>& v) {
  int quantity = 0;
  for (typename vector<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii){
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
  int a, b, c, d, e, f, g, h;
  int n;
  cin >> n;
  int count = 1;
  while(n--){
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int q1 = min({a, b, c});
    int l1 = max({e, f, g, h});
    int c1 = (q1 == 1 ? 0 : q1+1);
    int c2 = (d == 1 ? 0 : d+1);
    int l2 = max({c1, c2});
    int q2 = min({c2, l1});
    int x = (l2 == 1 ? 0 : l2+1);
    int z = (q2 == 1 ? 0 : q2+1);
    cout << "Caso " << count << ": " << x << " " << c2 << " " << z << endl;
    count++;
  }
  return 0;
}

// g++ -Wall -std=c++17 maincpp -o main && ./main < in