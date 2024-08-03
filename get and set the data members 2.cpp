#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(const string &name, const string &species, int age)
        : name(name), species(species), age(age) {}
    string getName() const { return name; }
    string getSpecies() const { return species; }
    int getAge() const { return age; }
    void setName(const string &name) { this->name = name; }
    void setSpecies(const string &species) { this->species = species; }
    void setAge(int age) { this->age = age; }
};
class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(const string &name, const string &species, int age, const string &color, const string &breed)
        : Animal(name, species, age), color(color), breed(breed) {}
    string getColor() const { return color; }
    string getBreed() const { return breed; }
    void setColor(const string &color) { this->color = color; }
    void setBreed(const string &breed) { this->breed = breed; }
};
class Dog : public Animal {
private:
    double weight;
    string breed;
public:
    Dog(const string &name, const string &species, int age, double weight, const string &breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}
    double getWeight() const { return weight; }
    string getBreed() const { return breed; }
    void setWeight(double weight) { this->weight = weight; }
    void setBreed(const string &breed) { this->breed = breed; }
};
int main() {
    Cat cat("Whiskers", "Cat", 3, "Black", "Persian");
    cout << "Cat Name: " << cat.getName() <<endl;
    cout << "Cat Species: " << cat.getSpecies() <<endl;
    cout << "Cat Age: " << cat.getAge() <<endl;
    cout << "Cat Color: " << cat.getColor() <<endl;
    cout << "Cat Breed: " << cat.getBreed() <<endl;
    Dog dog("Buddy", "Dog", 5, 30.5, "Labrador");
    cout << "Dog Name: " << dog.getName() <<endl;
    cout << "Dog Species: " << dog.getSpecies() <<endl;
    cout << "Dog Age: " << dog.getAge() <<endl;
    cout << "Dog Weight: " << dog.getWeight() <<endl;
    cout << "Dog Breed: " << dog.getBreed() <<endl;
    return 0;
}