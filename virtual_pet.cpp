#include <iostream>
#include <string>
using namespace std;

class Pet {
private:
    string name;
    int hunger;
    int happiness;

public:
    Pet(string n) {
        name = n;
        hunger = 5;
        happiness = 5;
    }

    void feed() {
        if (hunger > 0) hunger--;
        cout << name << " has been fed 🍖. Hunger: " << hunger << "\n";
    }

    void play() {
        if (happiness < 10) happiness++;
        cout << name << " played with you 🎾. Happiness: " << happiness << "\n";
    }

    void checkStatus() {
        cout << "\n📋 Status of " << name << ":\n";
        cout << "Hunger: " << hunger << " /10\n";
        cout << "Happiness: " << happiness << " /10\n\n";
    }
};

int main() {
    string petName;
    int choice;

    cout << "🐶 Welcome to Virtual Pet Simulator 🐱\n";
    cout << "Name your pet: ";
    getline(cin, petName);

    Pet myPet(petName);

    do {
        cout << "\n1. Feed " << petName;
        cout << "\n2. Play with " << petName;
        cout << "\n3. Check Status";
        cout << "\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: myPet.feed(); break;
            case 2: myPet.play(); break;
            case 3: myPet.checkStatus(); break;
            case 4: cout << "👋 Goodbye!\n"; break;
            default: cout << "❌ Invalid option.\n";
        }
    } while (choice != 4);

    return 0;
}
