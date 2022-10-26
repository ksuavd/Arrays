// Shift

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
    //Вывод исходного массива на экран:
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    //Циклический сдвиг массива 

    int number_of_shifts;
    cout << "Введите кол-во сдвигов: "; cin >> number_of_shifts;
    for (int i = 0; i < number_of_shifts; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {

        }
        arr[n - 1] = buffer;
    }
    
    //Вывод сдвинутого массива на экран: 
    
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

}

