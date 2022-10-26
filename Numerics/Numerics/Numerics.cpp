// Numerics
#include <iostream>
#include <windows.h>

using namespace std;

//#define DEC_2_BIN
//#define SDVIG
//#define DEC_2_HEX

int main()
{
    setlocale(LC_ALL, "rus");
#ifdef DEC_2_BIN
    const int n = 32;
    bool bin[n] = {};
    int decimal; //десятичное число введенное с клавиатуры
    cout << "Введите десятичное число: "; cin >> decimal;
    cout << decimal << endl;
    int i = 0;// номер разряда
    //for (Start;Stop;Step)
    for (/*Пустое выражение*/; decimal; i++, decimal /= 2)
    {
        bin[i] = decimal % 2;//Получаем младший разряд двоичного числа
      // decimal /= 2;        //убираем полученый младший разряд из десятичного числа
     //   i++;                 //переходим к следующему разряду
    }
    //Выводим остатки от деления в обратном порядке:
    for (i--; i >= 0; i--)
    {
        cout << bin[i];
        if (i % 8 == 0)cout << " ";
        if (i % 4 == 0)cout << " ";
    }
#endif //DEC_2_BIN
#ifdef SDVIG
	const int n = 10; int v;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shifts;
	cout << "Ввести количество сдвигов: "; cin >> number_of_shifts;
    number_of_shifts = n - number_of_shifts;
    for (int i = 0; i < number_of_shifts; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = buffer;
        system("cls");
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    Sleep(500);
    }
#endif //SDVIG
#ifdef DEC_2_HEX
    const int n = 8;
    int bin[n] = {};
    int decimal; 
    cout << "Введите десятичное число: "; cin >> decimal; cout << endl;
    cout << "Ваше число в шестнадцатеричной системе: ";
    int i = 0;
    for (; decimal; i++)
    {
        bin[i] = decimal % 16;
        decimal = decimal / 16;
    }
    for (i--; i >= 0; i--)
    {
        switch (bin[i])
        {
        case 10: cout << "a"; break;
        case 11: cout << "b"; break;
        case 12: cout << "c"; break;
        case 13: cout << "d"; break;
        case 14: cout << "e"; break;
        case 15: cout << "f"; break;
        default: cout << bin[i];
        }
    }
    cout << endl;
#endif
    const int n = 8;// для хранения 16-тириченого числа (2 разрядное число занимает 1 байт (у нас 16 символов(16/2)), в инте 4 байта 2*4=8)
    char hex[n] = {};
    int decimal;
    int i = 0;
    cout << "Введите десятичное число: "; cin >> decimal; cout << endl;
    for (; decimal; decimal/=16, i++)
    {
        hex[i] = decimal % 16;
        //decimal /= 16 - в цикле тоже самое, сокращает визуально запись кода 
        hex[i] += hex[i] < 10 ? 48 : 55;
        cout << hex[i];
    }
    for (i--/*int i=n-1*/; i >= 0; i--)
    {
       /* switch (hex[i])
        {
        case 10: cout << "A"; break;
        case 11: cout << "B"; break;
        case 12: cout << "C"; break;
        case 13: cout << "D"; break;
        case 14: cout << "E"; break;
        case 15: cout << "F"; break;
        default:cout << hex[i];
        }*/
       // if (hex[i] < 10)cout << hex[i]; else cout << char(hex[i] + 55/*код аски буквы + остаток от деления = +55*/);
       // cout << char (hex[i] < 10 ?  hex[i]+48 :   hex[i] + 55);
       // cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
      
    }
    cout << endl;
}

