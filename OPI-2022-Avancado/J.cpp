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

char matrix[1005][1005];
int n, m;

pii getTopRight(int i, int j){
    int top = 0;
    if(i > 0){
        for(int k = i-1; k >= 0; k--){
            if(matrix[k][j] == '*') top++;
        }
    }
    int right = 0;
    if(j < m-1){
        for(int k = j+1; k < m; k++){
            if(matrix[i][k] == '*') right++;
            
        }
    }
    return mp(top, right);
}

pii getRightBottom(int i, int j){
    int right = 0;
    if(j < m-1){
        for(int k = j+1; k < m; k++){
            if(matrix[i][k] == '*') right++;
            
        }
    }
    int bottom = 0;
    if(i < n-1){
        for(int k = i+1; k < n; k++){
            if(matrix[k][j] == '*') bottom++;
        }
    }
    return mp(right, bottom);
}

pii getBottomLeft(int i, int j){
    int bottom = 0;
    if(i < n-1){
        for(int k = i+1; k < n; k++){
            if(matrix[k][j] == '*') bottom++;
        }
    }
    int left = 0;
    if(j > 0){
        for(int k = j-1; k >= 0; k--){
            if(matrix[i][k] == '*') left++;
            //cout << i << " " << k << endl;
        }
    }
    return mp(bottom, left);
}

pii getLeftTop(int i, int j){
    int left = 0;
    if(j > 0){
        for(int k = j-1; k >= 0; k--){
            if(matrix[i][k] == '*') left++;
           // cout << i << " " << k << endl;
            
        }
    }
    int top = 0;
    if(i > 0){
        for(int k = i-1; k >= 0; k--){
            if(matrix[k][j] == '*') top++;
        }
    }
    return mp(left, top);
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    ll quantity = 0;
    pii aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            //cout << matrix[i][j];

            if(matrix[i][j] == '*'){
                aux = getTopRight(i, j);
                quantity += (ll) (aux.f * aux.s);
                //cout << aux.f << " " << aux.s << endl;
                aux = getRightBottom(i, j);
                quantity += (ll) (aux.f * aux.s);
                //cout << aux.f << " " << aux.s << endl;

                aux = getBottomLeft(i, j);
                quantity += (ll) (aux.f * aux.s);
                //cout << aux.f << " " << aux.s << endl;

                aux = getLeftTop(i, j);
                quantity += (ll) (aux.f * aux.s);
                //cout << aux.f << " " << aux.s << endl;

                //cout << "-------" << endl;
            }
        }
        //cout << endl;

    }

    cout << quantity << endl;

    return 0;
}
// g++ -Wall -std=c++17 a.cpp -o main && ./main < in
