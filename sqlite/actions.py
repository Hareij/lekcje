import requests
from pokemon import Pokemon
from random import randrange, choice

API_ADDR = "https://pokeapi.co/api/v2/"


def create_pokemon(name: str):
    r = requests.get(f"{API_ADDR}/pokemon/{name}")
    assert r.status_code == 200, "API request failed"
    result = r.json()

    def stats_to_dict(stats: list):
        return {item["stat"]["name"]: item["base_stat"] for item in stats}

    stats_dict = stats_to_dict(result["stats"])

    return Pokemon(
        name=name,
        hp=stats_dict["hp"],
        defense=stats_dict["defense"],
        attack=stats_dict["attack"],
        speed=stats_dict["speed"],
    )


def get_all_available_pokemon_names():
    r = requests.get(f"{API_ADDR}/pokemon/?limit=1302")
    assert r.status_code == 200, "API request failed"
    result = r.json()

    pokemon_names = [pokemon["name"] for pokemon in result["results"]]

    return pokemon_names


def fight(pokemon1: Pokemon, pokemon2: Pokemon, rounds: int):
    for _ in range(rounds):
        pokemon1.do_attack(pokemon2)
        if pokemon2.hp <= 0:
            return pokemon1

        pokemon2.do_attack(pokemon1)
        if pokemon1.hp <= 0:
            return pokemon2

    return None


def find_pokemon(guess: int) -> Pokemon | None:
    """
    Find pokemon function takes argument guess [int between 0-6]
    If the random number matches the guess we get a random pokemon
    """
    assert guess in range(7), "The given guess is out o range 0-6"

    rand = randrange(7)
    if guess != rand:
        return None

    random_pokemon_name = choice(get_all_available_pokemon_names())

    return create_pokemon(random_pokemon_name)
