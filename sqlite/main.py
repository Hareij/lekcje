from actions import find_pokemon
from pokedex import Pokedex
from db import init_db

init_db()

pokedex = Pokedex.from_database()

while True:
    user_guess = input("Type your guess [0-6]: ")
    # find pokemon
    # if you found a pokemon - add it to pokedex and show the pokedex
    # if not say "Not found"
    found_pokemon = find_pokemon(int(user_guess))
    if found_pokemon:
        print(f"Found {found_pokemon}!")
        pokedex.add_pokemon(found_pokemon)
        pokedex.print_all_pokemons_name()
    else:
        print("Not found")
