from dataclasses import dataclass

liczba = 10.12945
tekst = "abc"
print(tekst)
tekst = f"liczba to: {liczba:.2f}"
print(tekst)

lista = [1, 2, "abc"]
print(lista)
print(repr(lista))


class TestClass:
    def __init__(self):
        self.a = 10


test = TestClass()
print(test)

# Klasy


class Employee:
    def __init__(self, name: str, base_salary: float):
        self.name = name
        self.salary = base_salary

    def __str__(self):
        return f"name: {self.name}, salary: {self.salary}"


class Manager(Employee):
    def __init__(self, name: str, base_salary: float):
        base_salary *= 2
        super().__init__(name, base_salary)


e = Employee("Jan", 1000)
m = Manager("Adam", 1000)

print(e)
print(m)


@dataclass
class Employee:
    name: str
    salary: str


class Manager(Employee):
    def __init__(self, name: str, base_salary: float):
        base_salary *= 2
        super().__init__(name, base_salary)


e = Employee("Jan", 1000)
print(e)
m = Manager("Adam", 1000)
print(m)


from typing import Literal


@dataclass
class Car:
    mark: Literal["BMW", "Audi", "Mercedes"]
    speed: float


bmw = Car("BMW", 100)
audi = Car("Audi", 80)
mercedes = Car("Mercedes", 120)
print(bmw)
print(audi)
print(mercedes)

if bmw.mark == "BMW":
    print("To jest BMW")

if not audi.mark == "Audi":
    print("To nie audi")


if 1 == 1 and 2 == 2:
    print("prawda")

if 1 == 1 or 1 == 2:
    print("prawie prawda")


lista = [1, 2, 3, 4, 5, 6]

for elem in lista:
    print(elem)

print("-----------------")
for i in range(1, 10, 2):
    print(i)


a = 101

if a > 100:
    print("a")
else:
    print("b")

while a > 0:
    print(a)
    a -= 1

print(lista)
