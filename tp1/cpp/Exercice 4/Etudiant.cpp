#include "Etudiant.hpp"
#include <stdexcept>

// Constructeur
Etudiant::Etudiant(const std::string& cne, const std::string& nom, const std::string& prenom)
    : cne(cne), nom(nom), prenom(prenom) {}

void Etudiant::ajouterNote(double note) {
    if (note < 0.0 || note > 20.0) {
        throw std::invalid_argument("La note doit etre comprise entre 0 et 20.");
    }
    notes.push_back(note);
}

int Etudiant::nombreNotes() const {
    return static_cast<int>(notes.size());
}

double Etudiant::moyenne() const {
    if (notes.empty()) {
        return 0.0;
    }
    double somme = 0.0;
    for (double note : notes) {
        somme += note;
    }
    return somme / notes.size();
}

bool Etudiant::estAdmis() const {
    return moyenne() >= SEUIL_VALIDATION;
}

std::string Etudiant::affichage() const {
    return "Etudiant " + cne + " : " + prenom + " " + nom;
}