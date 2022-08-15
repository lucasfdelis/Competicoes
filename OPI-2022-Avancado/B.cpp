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
    string s;
    int countUpper = 0, countLower = 0;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++){
        if(isupper(s[i])){
            countUpper++;
        }else{
            countLower++;
        }
    }
    for(int i = 0; i < (int)s.size(); i++){
        if(countUpper > countLower){
            cout << (char)toupper(s[i]);
        }else{
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;

    return 0;
}
// g++ -Wall -std=c++17 a.cpp -o main && ./main < in
