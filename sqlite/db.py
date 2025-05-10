import sqlite3


def init_db():
    conn = sqlite3.connect("pokedex.db")
    cur = conn.cursor()

    cur.execute("CREATE TABLE IF NOT EXISTS pokemons(name)")
    conn.commit()


def add_pokemon_name(name: str):
    conn = sqlite3.connect("pokedex.db")
    cur = conn.cursor()

    cur.execute(f"INSERT INTO pokemons VALUES ('{name}')")
    conn.commit()


def get_pokemon_names() -> list[str]:
    conn = sqlite3.connect("pokedex.db")
    cur = conn.cursor()

    res = cur.execute("SELECT name FROM pokemons")
    return [elem[0] for elem in res.fetchall()]
