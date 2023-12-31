﻿// Prokofev chisla.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int sum_of_odd_numbers(int arr[], int size) 
{
    setlocale(LC_ALL, "");
    // Инициализируем переменную для хранения суммы
    int total = 0;

    // Перебираем элементы массива
    for (int i = 0; i < size; i++) {
        // Проверяем, является ли число нечетным
        if (arr[i] % 2 != 0) {
            // Если число нечетное, добавляем его к сумме
            total += arr[i];
        }
    }

    return total;
}

int main() {
    int my_array[] = { 1, 2, 3, 4, 5, 6, 7 };
    int size = sizeof(my_array) / sizeof(my_array[0]); // Определяем размер массива

    int result = sum_of_odd_numbers(my_array, size);
    cout << "Сумма нечетных чисел в массиве: " << result << endl;

    return 0;
}