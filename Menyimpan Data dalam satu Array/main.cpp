// Program untuk membaca 10 data bilangan bulat
// By: Muhammad Atha Nassa
// Nim: A11.2022.14287
// Kelompok: A11.2022.14287
#include <iostream>

using namespace std;

int main()
{
    int arr[10];

    cout << "Masukkan deret angka : ";

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " : ";

        for (int j = 0; j < arr[i]; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
