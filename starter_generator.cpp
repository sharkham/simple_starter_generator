#include <iostream>
using namespace std;

void intro() {
    cout << "Welcome to the Pokémon Protection Society's online portal!" << endl;
    cout << "The PPS was founded to care for and find homes for unwanted or abandoned Pokémon." << endl;
}

void goodbye() {
    cout << "Thank you for visiting us today!" << endl;
}

void congratulations(string pokemon) {
    cout << "Congratulations! You are now the proud trainer of " << pokemon << ". Treat them well!" << endl;
}

void adoption() {
    cout << "Would you like to adopt Charmander, Bulbasaur, or Squirtle? (c/b/s)" << endl;
    bool adopted = false;
    char input = NULL;
    while(adopted == false) {
        cin >> input;
        switch(input) {
            case 'c':
                congratulations("Charmander");
                adopted = true;
                break;
            case 'b':
                congratulations("Bulbasaur");
                adopted = true;
                break;
            case 's':
                congratulations("Squirtle");
                adopted = true;
                break;
            case 'p':
                cout << "Oh! This Pikachu just came in, but of course you can have it!" << endl;
                congratulations("Pikachu");
                adopted = true;
                break;
            default:
                cout << "I'm sorry, what was that? Please type 'c', 'b', or 's'" << endl;
        }
    }
    goodbye();
}

void wantToAdopt() {
    cout << "Would you like to adopt a Pokémon? (y/n)" << endl;
    char input = NULL;
    while(input != 'y' && input != 'n') {
        cin >> input;
        if(input == 'y') {
            adoption();
        } else if(input == 'n') {
            goodbye();
        } else {
            cout << "What was that? Please type 'y' or 'n'" << endl;
        }
    }
}




int main() {

    intro();
    wantToAdopt();

    return 0;
}

