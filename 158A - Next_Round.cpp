#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    int i;
    int conta = 0;

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    int kvalue = arr[k-1];
    for(i = 0; i < n; i++){
        if(arr[i] >= kvalue && arr[i] > 0){
            conta++;
        }
    }
    cout << conta << endl;
    return 0;
}
