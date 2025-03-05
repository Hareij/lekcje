#include <string>
#include <vector>

class Pokemon{
    private:
    std::string pok;
    std::string type;
    sdt::vector<Pokemon> cont;
    public:

    Pokemon(std::string name_argument , std::string type_argument);

    void pok_add(Pokemon pokemon);
    
    std::string get_pokemon_name();

}
