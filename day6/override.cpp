#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};

class Duck : public Animal {
public:
    void makeSound() override {
        cout << "Quack! Quack!" << endl;
    }
};

int main() {
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
    Animal *animal3 = new Duck();

    cout << "Dog sound: ";
    animal1->makeSound();
    
    cout << "Cat sound: ";
    animal2->makeSound();
    
    cout << "Duck sound: ";
    animal3->makeSound();

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
