#include <string>

class Shops {
    public:
        // Установка названия
        void set_name(std::string shop_name)
        {
            name = shop_name;
        }
        // Получение названия
        std::string get_name()
        {
            return name;
        }
        // Установка формы собственности
        void set_ownership(std::string shop_ownership)
        {
            ownership = shop_ownership;
        }
        // Получение формы собственности
        std::string get_ownership()
        {
            return ownership;
        }
        // Установка промежуточной цены
        void set_prices(int shop_price[])
        {
            for (int i = 0; i < 3; ++i) {
                price[i] = shop_price[i];
            }
        }
        // Установка средней цены
        void set_average_price(float price)
        {
            average_price = price;
        }
        // Получение средней цены
        float get_average_price()
        {
            return average_price;
        }

    private:
        int price[3];
        float average_price;
        std::string name;
        std::string ownership;
};
