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
    shop1.set_prices(shop1_prices);

    // Сохраняем среднюю цену товара в объект класса Shops
    shop1.set_average_price(shop1_sum / 5.0);
    // Выводим данные по магазину
    std::cout << "Average price for single item in " << shop1.get_ownership() << " "
         << shop1.get_name() << " is "
         << shop1.get_average_price() << std::endl;


    /***************
     * second shop
    ****************/


    // Создание объекта класса Shops
    Shops shop2;

    // Сохранение названия магазина в объект класса Shops
    shop2.set_name("Velyka Kishenya");
    // Сохранение формы собственности магазина в объект класса Shops
    shop2.set_ownership("OOO");

    // Количество товаров с ценами
    int shop2_prices[8];
    // стоимость всех товаров (вся выручка)
    int shop2_sum = 711;

    // Сохраняем цену каждой единицы товара в объект класса Shops
    shop2.set_prices(shop1_prices);

    // Сохраняем среднюю цену товара в объект класса Shops
    shop2.set_average_price(shop2_sum / 8.0);
    // Выводим данные по магазину
    std::cout << "Average price for single item in " << shop2.get_ownership() << " "
         << shop2.get_name() << " is "
         << shop2.get_average_price() << std::endl;



    /***************
     * third shop
    ****************/

    // Создание объекта класса Shops
    Shops shop3;

    std::string name;
    std::string ownership;

    // Ввод названия с клавиатуры
    std::cout << "Name: ";
    getline(std::cin, name);

    // Ввод формы собственности
    std::cout << "Ownership: ";
    getline(std::cin, ownership);

    // Сохранение названия магазина в объект класса Shops
    shop3.set_name(name);
    // Сохранение формы собственности магазина в объект класса Shops
    shop3.set_ownership(ownership);

    // Количество товаров с ценами
    int shop3_prices[3];
    // стоимость всех товаров (вся выручка)
    int shop3_sum = 0;

    // Ввод промежуточных цен
    for (int i = 0; i < 3; ++i) {
        std::cout << "Price " << i+1 << ": ";
        std::cin >> shop3_prices[i];
        // суммирование
        shop3_sum += shop3_prices[i];
    }
    // Сохраняем цену каждой единицы товара в объект класса Shops
    shop3.set_prices(shop3_prices);

    // Сохраняем среднюю цену товара в объект класса Shops
    shop3.set_average_price(shop3_sum / 3.0);
    // Выводим данные по магазину
    std::cout << "Average price for single item in " << shop2.get_ownership() << " "
         << shop2.get_name() << " is "
         << shop2.get_average_price() << std::endl;




    return 0;
}
