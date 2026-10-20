#include <iostream>
#include <iomanip>
#include "Etudiant.hpp"

int main() {
    Etudiant e("R130456789", "El Idrissi", "Amine");
    e.ajouterNote(12.5);
    e.ajouterNote(9.0);
    e.ajouterNote(14.0);

    std::cout << e.affichage() << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Moyenne : " << e.moyenne() << " - admis : " << (e.estAdmis() ? "oui" : "non") << std::endl;

    try {
        e.ajouterNote(25.0);
    } catch (const std::invalid_argument& ex) {
        std::cout << "Erreur : " << ex.what() << std::endl;
    }

    // e.notes.push_back(25.0); 
    // -> Erreur de compilation : 'notes' est un membre privé !

    return 0;
}