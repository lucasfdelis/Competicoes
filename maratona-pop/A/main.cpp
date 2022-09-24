#include <bits/stdc++.h>
#define f first
#define s second
#define sz size
#define pb push_back
#define mp make_pair
using namespace std;
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> pii;

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

long long dist(pii a, pii b){
  return (a.f-b.f)*(a.f-b.f) + (a.s-b.s)*(a.s-b.s);
}

ll n, t, x, y, r;
bool m[305][305];
ll movX[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
ll movY[8] = {-1, 0, 1, 1, 1, 0, -1, -1};


void fillTable(pii tower, pii current, ll ratio){
  if(current.f < 0 || current.f >= n || current.s < 0 || current.s >= n) return;

  if(dist(tower, current) <= ratio){
    cout << current.f << " " << current.s << endl;
    m[current.f][current.s] = true;
    cout << current.f << " " << current.s << endl;
    for(int i = 0; i < 8; i++){
      cout << i << endl;
      if(current.f+movX[i] < 0 || current.f+movX[i] >= n || current.s +movY[i] < 0 || current.s +movY[i]>= n) continue;

      fillTable(tower, {current.f+movX[i], current.s+movY[i]}, ratio);
    }
  }

}


int main(){
  // cin.tie(NULL);
  // cout.tie(NULL);
  // ios::sync_with_stdio(0);
  memset(m,false, sizeof(m));
  cin >> n >> t;
  while(t--){
    cin >> x >> y >> r;
    cout << "Oi" << endl;
    fillTable({x, y}, {x, y}, r*r);
  }
  ll count = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(m[i][j] == false) count++;
    }
  }
  cout << count << endl;
  return 0;
}

// g++ -Wall -std=c++17 main.cpp -o main && ./main < in