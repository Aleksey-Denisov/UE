#include <iostream>
//Parent class Animal
class Animal
{
public:
    virtual void makeSound() const = 0;
};
//Child class Cat
class Cat : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Meow\n";
    }
};
//Child class Dog
class Dog : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Woof\n";
    }
};
//Child class Cow
class Cow : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Moo\n";
    }
};



int main()
{
    Animal* animals[4];
    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Cow();
    animals[3] = new Cat();

    for (Animal* animal : animals)
    {
        animal->makeSound();
    }

    return 0;
}