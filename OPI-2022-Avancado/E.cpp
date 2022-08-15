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

double squareOfTriangle(pii a, pii b, pii c){
    ll det = abs(a.f*(b.s-c.s) + b.f*(c.s-a.s) + c.f*(a.s-b.s));
    double square = (double)det/(double)0.5;
    return square;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(0);
    vector<pii> graph;
    pii aux;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux.f >> aux.s;
        graph.push_back(aux);
    }
    int quantity = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(squareOfTriangle(graph[i], graph[j], graph[k]) > 0){
                    quantity++;
                }
            }
        }
    }
    cout << quantity << endl;
    return 0;
}
// g++ -Wall -std=c++17 a.cpp -o main && ./main < in
