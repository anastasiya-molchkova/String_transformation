/* В указанной пользователем строке, вместо первого символа поставить пробел, 
   а вместо последнего — точку. */

#include <iostream>
#include <Windows.h>  // для работы с кириллицей в обоих направлениях
#include <string>

using std::string;

string transformation(const string& some_string)
{
    string new_string{ some_string };
    new_string[0] = ' ';
    new_string[new_string.length() - 1] = '.';
    return new_string;
}

int main()
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);     // чтобы общаться с пользователем на кириллице

    std::cout << "Напишите что-нибудь:\n";
    string users_input;
    std::getline(std::cin, users_input);

    std::cout << "Результат преобразования введённой строки:\n" << transformation(users_input) << std::endl;
    return 0;
}