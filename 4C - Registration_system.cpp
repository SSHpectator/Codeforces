#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> database; // Mappa per tenere traccia dei nomi gia' registrati

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;

        if(database.find(name) == database.end()){
            // Il nome non esiste ancora nel database
            database[name] = 0;
            cout << "OK" << endl;
        }else{
            // Il nome esiste gia', genera un nuovo nome
            int count = ++database[name]; // Incrementa il contatore associatio a name
            string newName = name + to_string(count);

            while(database.find(newName) != database.end()){
                // Se il nuovo nome generato esiste gia' incrementa il contatore count
                count = ++database[name];
                newName = name + to_string(count);
            }

            database[newName] = 0; // Inserisco il nuovo nome nel database
            cout << newName << endl;
        }
    }


    return 0;
}
