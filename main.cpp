/******************************************************************************

Sasha Zhardetskaya university task

*******************************************************************************/

#include <iostream>
#include "shops.h"

int main()
{
    // Создание объекта класса Shops
    Shops shop1;

    // Сохранение названия магазина в объект класса Shops
    shop1.set_name("Ashan");
    // Сохранение формы собственности магазина в объект класса Shops
    shop1.set_ownership("ПАТ");

    // Количество товаров с ценами
    int shop1_prices[5];
    // стоимость всех товаров (вся выручка)
    int shop1_sum = 310;

    // Сохраняем цену каждой единицы товара в объект класса Shops
    shop1.set_scores(shop1_prices);

    // Сохраняем среднюю цену товара в объект класса Shops
    shop1.set_average_ball(shop1_sum / 5.0);
    // Выводим данные по магазину
    std::cout << "Average price for single item in " << shop1.get_last_name() << " "
         << shop1.get_name() << " is "
         << shop1.get_average_ball() << std::endl;






    // Создание объекта класса Shops
    Shops shop2;

    // Сохранение имени и фамилии в объект класса Students
    shop2.set_name("Vasya");
    shop2.set_ownership("Petechkin");

    // Оценки
    int prices[5];

    // Сохраняем промежуточные оценки в объект класса Student
    shop2.set_scores(prices);

    // Сохраняем средний балл в объект класса Students
    shop2.set_average_ball(200 / 5.0);
    // Выводим данные по студенту
    std::cout << "Average ball for " << shop2.get_name() << " "
         << shop2.get_last_name() << " is "
         << shop2.get_average_ball() << std::endl;






    // Создание объекта класса Student
    Shops student;

    std::string name;
    std::string last_name;

    // Ввод имени с клавиатуры
    std::cout << "Name: ";
    getline(std::cin, name);

    // Ввод фамилии
    std::cout << "Last name: ";
    getline(std::cin, last_name);

    // Сохранение имени и фамилии в объект класса Students
    student.set_name("vasya");
    student.set_ownership("last_name");

    // Оценки
    int scores[5];
    // Сумма всех оценок
    int sum = 0;

    // Ввод промежуточных оценок
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        // суммирование
        sum += scores[i];
    }

    // Сохраняем промежуточные оценки в объект класса Student
    student.set_scores(scores);
    // Считаем средний балл
    float average_ball = sum / 5.0;
    // Сохраняем средний балл в объект класса Students
    student.set_average_ball(average_ball);
    // Выводим данные по студенту
    std::cout << "Average ball for " << student.get_name() << " "
         << student.get_last_name() << " is "
         << student.get_average_ball() << std::endl;





    return 0;
}
