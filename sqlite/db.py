import sqlite3 //importuje bazę danych


def init_db(): //funkcja inicjalizuje bazę danych
    conn = sqlite3.connect("pokedex.db") // łączy się z bazą danych 
    cur = conn.cursor() // ustawienie wskażnika?

    cur.execute("CREATE TABLE IF NOT EXISTS pokemons(name)") // nie wiem
    conn.commit() // zapisuje zmiany


def add_pokemon_name(name: str): // funkcja dodaje pokemony
    conn = sqlite3.connect("pokedex.db") // lączy się z bazą danych
    cur = conn.cursor() // ustawienie wskażnika?

    cur.execute(f"INSERT INTO pokemons VALUES ('{name}')") //  nie wiem
    conn.commit() // zapisuje zmiany


def get_pokemon_names() -> list[str]: // wypisuje nasze pokemony
    conn = sqlite3.connect("pokedex.db") // łączy się z bazą danych
    cur = conn.cursor() // zapisuje zmiany

    res = cur.execute("SELECT name FROM pokemons")// nie wiem
    return [elem[0] for elem in res.fetchall()] // nie wiem
