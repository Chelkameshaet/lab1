// Prokofev 1.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

bool isValidPassword(const std::string& password) {
    {
        setlocale(LC_ALL, "");

        bool hasUpper = false;
        bool hasLower = false;
        bool hasSpecial = false;

        for (char c : password) {
            if (isupper(c)) {
                hasUpper = true;
            }
            else if (islower(c)) {
                hasLower = true;
            }
            else if (ispunct(c)) {
                hasSpecial = true;
            }
        }

        return hasUpper && hasLower && hasSpecial;
    }
}

std::string generateRandomPassword(int length) {
    std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%&*+?.";
    std::string password;

    srand(time(0));

    for (int i = 0; i < length; ++i) {
        password += characters[rand() % characters.length()];
    }

    return password;
}

int main() {
    int passwordLength;
    std::cout << "Введите длину пароля: ";
    std::cin >> passwordLength;

    std::string password = generateRandomPassword(passwordLength);
    std::cout << "Сгенерированный пароль: " << password << std::endl;

    if (isValidPassword(password)) {
        std::cout << "Пароль валидный." << std::endl;
    }
    else {
        std::cout << "Пароль не соответствует требованиям." << std::endl;
    }

    return 0;
}