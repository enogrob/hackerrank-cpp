#include <iostream>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int qa[q], qe[q];
    int arrsize;
    int arr[100000][300000];
    for(int i=0;i<n;i++){
        cin >> arrsize;
        for(int j = 0;j<arrsize;j++){
            cin >> arr[i][j];
        }
        cout << arr[i] << endl;
    }
    for(int i=0;i<q;i++){
        cin >>  qa[i] >> qe[i];
    }
    for(int i=0;i<q;i++){
        cout << arr[qa[i]][qe[i]] << endl;
    }
    return 0;
}

