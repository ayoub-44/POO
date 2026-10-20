#include <iostream>
#include "Etudiant.hpp"

void bonusParValeur(Etudiant e) {
    e.ajouterNote(20.0);
}

void bonusParReference(Etudiant& e) {
    e.ajouterNote(20.0);
}
int main() {

    Etudiant e1("R130456789", "El Idrissi", "Amine");
    e1.ajouterNote(12.0);

    // Etape 1 :
    Etudiant e2 = e1;
    e2.ajouterNote(15.0);
    std::cout << "Etape 1 -> e1: " << e1.nombreNotes() << ", e2: " << e2.nombreNotes() << std::endl;
    std::cout << "Meme objet ? " << (&e1 == &e2 ? "oui" : "non") << std::endl;

    // Etape 2 :
    Etudiant& e3 = e1;
    e3.ajouterNote(18.0);
    std::cout << "Etape 2 -> e1: " << e1.nombreNotes() << ", e3: " << e3.nombreNotes() << std::endl;

    // Etape 3a :
    bonusParValeur(e1);
    std::cout << "Etape 3 (par valeur) -> e1: " << e1.nombreNotes() << std::endl;

    // Etape 3b 
    bonusParReference(e1);
    std::cout << "Etape 3 (par reference) -> e1: " << e1.nombreNotes() << std::endl;

    return 0;
}