    #include <iostream>

    using namespace std;

    int main()
    {
        int n; // NUMBER OF WORDS ( ONE PER LINE )
        string parola; // WORD IN ITALIAN ;)
        cin >> n;
        while (n--)
        {
            cin >> parola;
            if (parola.length() > 10)
            {
                cout << parola[0] << parola.length() - 2 << parola[parola.length() - 1] << endl;
            }
            else
            {
                cout << parola << endl;
            }
        }
        return 0;
    }
