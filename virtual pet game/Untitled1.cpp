#include <iostream>
#include <string>
using namespace std;
class VirtualPet {
private:
    string name;
    int hunger;
    int energy;
    int happiness;
public:
    VirtualPet(string petName) : name(petName), hunger(50), energy(50), happiness(50) {}
    void feed() {
        hunger += 10;
        cout << name << " has been fed. Hunger is now " << hunger << ".\n";
    }
    void play() {
        if (energy > 10) {
            happiness += 10;
            energy -= 10;
            cout << name << " is playing. Happiness is now " << happiness << ", energy is " << energy << ".\n";
        } else {
            cout << name << " is too tired to play.\n";
        }
    }
    void sleep() {
        energy += 10;
        cout << name << " is sleeping. Energy is now " << energy << ".\n";
    }
    void status() {
        cout << "\nStatus of " << name << ":\n"
             << "Hunger: " << hunger << "\n"
             << "Energy: " << energy << "\n"
             << "Happiness: " << happiness << "\n\n";
    }
};
int main() {
    VirtualPet myPet("Fluffy");
    char choice;
    do {
        cout << "What would you like to do with your pet?\n"
             << "1. Feed\n"
             << "2. Play\n"
             << "3. Sleep\n"
             << "4. Check Status\n"
             << "5. Quit\n"
             << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case '1': myPet.feed(); break;
            case '2': myPet.play(); break;
            case '3': myPet.sleep(); break;
            case '4': myPet.status(); break;
            case '5': cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '5');
    return 0;
}

//You have a pet on your computer that seems alive but is just a drawing or animation.
//The pet gets hungry, sleepy, and wants to play, just like a real pet.
//You use buttons to feed the pet, play with it, or put it to sleep.
//When you do these things, the pet becomes happier and healthier.
//If you forget to take care of the pet, it can become sad or tired.
//The game keeps going as long as you keep taking care of your pet.
