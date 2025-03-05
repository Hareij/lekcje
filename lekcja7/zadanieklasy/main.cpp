#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    std::string surname;
    int age;

public:
    Person(std::string name_arg, std::string surname_arg, int age_arg)
    {
        this->name = name_arg;
        this->surname = surname_arg;
        this->age = age_arg;
    }

    int age_in(int x)
    {
        return age + x;
    }
};

int main()
{
    Person marcel("MARCEL", "GRASLIN", 16);
    Person julek("Julek", "Piec", 34);
    std::cout << "Wiek julka za 23 lata: " << julek.age_in(23) << std::endl;
    std::cout << "Wiek za 5 lat: " << marcel.age_in(5) << std::endl;

    return 0;
}