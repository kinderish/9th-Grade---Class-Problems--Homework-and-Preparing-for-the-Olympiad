#include <iostream>

using namespace std;

int main()
{
    int v[100];
    int m[100][100], n
    ;
    cin >> n;
   /* for (int i = 1; i <=n; i++){
        cin >>v[i];
    }*/ //vector
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cin >> m[i][j];
        }
    }// matrice
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << m[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;

}
