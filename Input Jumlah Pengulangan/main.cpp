// Program untuk input jumlah pengulangan
// By: Muhammad Atha Nassa
// Nim: A11.2022.14287
// Kelompok: A11.2022.14287
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int jumlah;

    cout << "Input jumlah pengulangan (n) = ";
    cin >> jumlah;

    for (int i = 1; i < jumlah * 2; i += 2)
    {
        n += i;
        cout << n << endl;
    }

    return 0;
}
