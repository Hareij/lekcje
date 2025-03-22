#include<iostream>
#include "pokemon.hpp"

int main()
{
    Pokemon charizard(charizard);
    Pokemon venusaur(venusaur);
    Pokemon pokedex(pokedex);

    pokedex.pok_add(charizard);
    pokedex.pok_add(venusaur);

    std::cout << pokedex.get_pokemon_name() << std::endl;
    return 0;
}