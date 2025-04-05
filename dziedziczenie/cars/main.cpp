#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Car
{
protected:
    std::string name;
    double combustion; // liters per 100 km
    double fuel_level;

public:
    Car(double combustion, std::string name)
    {
        this->combustion = combustion;
        this->fuel_level = 0.0;
        this->name = name;
    };

    void fuel_up(double ammount)
    {
        this->fuel_level += ammount;
    };

    void drive(int distance)
    {
        this->fuel_level -= (double(distance) / 100.0) * this->combustion;
    };

    double get_fuel_level()
    {
        return this->fuel_level;
    };

    std::string get_name()
    {
        return this->name;
    }

    virtual ~Car() = default;
};

class BMW : public Car
{
public:
    BMW() : Car(10.0, "BMW") {};
};

class Audi : public Car
{
public:
    Audi() : Car(8.0, "Audi") {};
};

class Mercedes : public Car
{
public:
    Mercedes() : Car(6.0, "Mercedes") {};
};

int main()
{
    std::vector<std::unique_ptr<Car>> cars;
    cars.push_back(std::make_unique<Audi>());
    cars.push_back(std::make_unique<BMW>());
    cars.push_back(std::make_unique<Mercedes>());
    for (auto &car : cars)
        car->fuel_up(40);

    int delta_distnace = 50;
    int total_distance = 0;

    while (cars.size() > 0)
    {
        std::cout << "Cars will drive 50 km" << std::endl;

        // jadą
        for (auto &car : cars)
            car->drive(50);
        total_distance += delta_distnace;

        // sprawdzamy poziom paliwa
        for (int i = 0; i < cars.size(); i++)
        {
            double fuel_level = cars[i]->get_fuel_level();
            if (fuel_level < 0)
            {
                std::cout << "Car " << cars[i]->get_name() << " is out of fuel!" << std::endl;
                cars.erase(cars.begin() + i);
            }
        }

        // wypisujemy kto ma <0 i usuwamy z listy
        std::cout << "Total distace: " << total_distance << std::endl;
    }

    return 0;
}