#include <iostream>

#include "person.hpp"

int main()
{
    Person janek("Janek", "Pies", 1);
    Person mateusz("Mateusz", "Kot", 2);
    Person marcel("MARCEL", "GRASLIN", 16);
    Person julek("Julek", "Piec", 34);

    julek.add_friend(marcel);
    julek.add_friend(janek);
    julek.add_friend(mateusz);

    std::cout << julek.get_friends_names() << std::endl;
    std::cout << julek.get_friends_surnames() << std::endl;

    // std::cout << "Wiek julka za 23 lata: " << julek.age_in(23) << std::endl;
    // std::cout << "Wiek za 5 lat: " << marcel.age_in(5) << std::endl;
    // std::cout << marcel.get_greeting();

    return 0;
}