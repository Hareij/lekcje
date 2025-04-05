#include <string>
#include <iostream>
#include <memory>
#include <vector>

class Animal
{
public:
    virtual void makeSound() = 0;

    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Woof!" << std::endl;
    };
};

class Cow : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Moo!" << std::endl;
    };
};

int main()
{
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cow>());

    for (const auto &animal : animals)
    {
        animal->makeSound();
    }

    return 0;
}
