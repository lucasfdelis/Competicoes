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

  int l, c;
  char aux;
  vector<vector<char>> m;

  cin >> l >> c;
  for(int i = 0; i < l; i++){
    vector<char> line;
    for(int j = 0; j < c; j++){
      cin >> aux;
      line.push_back(aux);
    }
    cout << line;
    m.push_back(line);
  }

 
  return 0;
}

// g++ -Wall -std=c++17 resolutions/uri/prob.cpp -o main && ./main < in