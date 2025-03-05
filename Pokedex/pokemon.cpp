#include "pokemon.hpp"
#include <string>
#include <sstream>

Pokemon::Pokemon(std::string name_argument , std::string type_argument){
    this->pok = name_argument;
    this->type = type_argument;
}
Pokemon:: void pok_add(Pokemon pokemon){
      this->cont.pushback(pokemon);
}

std::string Pokemon::get_pokemon_name(){
        std::stringstream ss;
    for(auto &f :this->pok){
        ss << f.pok_add() << " ";

    }
    ss << std::endl;
    return ss.str();
}
