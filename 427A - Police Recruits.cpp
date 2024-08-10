#include <iostream>
using namespace std;

int main() {
    int ev;
    cin >> ev;

    int arr[ev];

    for(int i = 0; i < ev; i++) {
        cin >> arr[i]; // Legge i valori nell'array
    }

    int conta = 0;
    int pos = 0;

    for(int i = 0; i < ev; i++){
        if(arr[i] > 0){
            // Significa che ho trovato un poliziotto
            pos += arr[i];
        }else{
            // Significa che c'è un crimine (-1)
            if(pos == 0){
                // Nessun poliziotto disponibile per risolvere il crimine
                conta++;
            }else{
                // Un poliziotto risolve il crimine
                pos -= 1;
            }
        }
    }

    cout << conta << endl;

    return 0;
}
