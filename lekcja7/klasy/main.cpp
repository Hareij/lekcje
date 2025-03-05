#include <iostream>

class Car
{
private:
    int acceleration;

public:
    // KONSTRUKTOR
    Car(int x)
    {
        this->acceleration = x;
    }

    // METODY
    int calculate_speed_after(int t)
    {
        return this->acceleration * t;
    }

    // GTTER
    int get_acceleration()
    {
        return this->acceleration;
    }

    // SETTER
    void set_acceleration(int x)
    {
        if (x < 0)
        {
            throw std::invalid_argument("Acceleration must be positive");
        }
        this->acceleration = x;
    }
};

int main()
{
    Car audi(10);
    Car bmw(20);
    Car toyota(30);

    try
    {
        audi.set_acceleration(-10);
    }
    catch (std::invalid_argument e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Car acceleration: " << audi.get_acceleration() << std::endl;
    std::cout << "Car speed after 5 seconds: " << audi.calculate_speed_after(5) << std::endl;
    return 0;
}