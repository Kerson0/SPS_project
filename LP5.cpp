#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int s, flag = 0,
    arr_s[8], arr_k[8], 
    arr[8][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {2, 2, 3, 4, 5, 6, 7, 2},
        {3, 2, 3, 4, 5, 6, 7, 3},
        {4, 2, 3, 4, 5, 6, 7, 4},
        {5, 2, 3, 4, 5, 6, 7, 5},
        {6, 2, 3, 4, 5, 6, 7, 6},
        {7, 2, 3, 4, 5, 6, 7, 7},
        {8, 2, 3, 4, 5, 6, 7, 8},
        
    };

    for (int i = 0; i <= 8; i++) arr_s[i] = 0;
    for (int i = 0; i <= 8; i++) arr_k[i] = 0;

    /*cout << "Заполните массив: \n";
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            cin >> arr[i][j];
        }
        cout << "Переход на следующую строку \n";
    }*/

    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (arr[i][j] == arr[j][i]) flag += 1;            
        }
        if (flag == 8) arr_k[i] = 1;
        flag = 0;         
    }

    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (arr[i][j] < 0)
            {
               for (int k = 0; k <= 8; k++) arr_s[i] += arr[i][k];               
            }
        }
    }

    for (int i = 0; i <= 8; i++) if (arr_k[i] == 1) cout << i + 1 << "  ";
    cout << "\n";
    for (int i = 0; i <= 8; i++) if (arr_s[i] != 0) cout << arr_s[i] << "  ";

    
}
