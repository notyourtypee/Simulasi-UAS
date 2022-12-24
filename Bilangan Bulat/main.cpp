// Program untuk membaca 10 data bilangan bulat
// By: Muhammad Atha Nassa
// Nim: A11.2022.14287
// Kelompok: A11.2022.14287
#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int arr_sorted[10];

    cout << "Masukkan 10 data bilangan bulat : " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Bilangan : ";
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}
