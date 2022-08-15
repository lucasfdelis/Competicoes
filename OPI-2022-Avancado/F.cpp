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

vector<int> adj[1005];
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(0);
    
    int n, Pi;
    cin >> n;
    vector<int> isLeaf(n+1, 1);
    for(int i = 1; i < n; i++){
        cin >> Pi;
        adj[Pi].push_back(i+1);
        isLeaf[Pi] = 0;
    }
    bool isEmiso = true;
    for(int i = 1; i <= n; i++){
        if(!isLeaf[i]){
            int countLeafs = 0;
            for(int j = 0; j < (int) adj[i].size(); j++){
                if(isLeaf[adj[i][j]]){
                    countLeafs++;
                }
            }
            if(countLeafs < 3){
                isEmiso = false;
            }
        }
        if(!isEmiso) break;
    }

    cout << (isEmiso ? "Yes" : "No") << endl;
    return 0;
}
// g++ -Wall -std=c++17 a.cpp -o main && ./main < in
