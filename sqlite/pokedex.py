from dataclasses import dataclass, field
from pokemon import Pokemon
from db import add_pokemon_name, get_pokemon_names
from actions import create_pokemon


@dataclass
class Pokedex:
    pokemons: dict[str, Pokemon] = field(default_factory=dict)

    def print_all_pokemons_name(self):
        print("Pokedex")
        print("-" * 10)
        for key in self.pokemons.keys():
            print(key)
        print()

    def add_pokemon(self, pokemon: Pokemon):
        assert pokemon.name not in self.pokemons.keys(), "Pokemon already in Pokedex"
        self.pokemons[pokemon.name] = pokemon
        add_pokemon_name(pokemon.name)

    @classmethod
    def from_database(cls):
        pokedex_dict = {}
        for pokemon_name in get_pokemon_names():
            pokemon = create_pokemon(pokemon_name)
            pokedex_dict[pokemon_name] = pokemon

        return cls(pokedex_dict)
