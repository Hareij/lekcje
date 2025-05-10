from dataclasses import dataclass
from random import random


@dataclass
class Pokemon:
    name: str
    hp: int
    defense: int
    attack: int
    speed: int

    def do_attack(self, enemy: "Pokemon"):
        attack_proba = 1.0 - (enemy.speed - self.speed) / enemy.speed

        if random() > attack_proba:
            return

        remainder = enemy.defense - self.attack

        if remainder >= 0:
            enemy.defense = remainder
        else:
            enemy.defense = 0
            enemy.hp += remainder
