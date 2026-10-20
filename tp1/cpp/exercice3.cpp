#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <stdexcept>

// Étape 1 : Fonction moyenne
double moyenne(const std::vector<double>& notes) {
    if (notes.empty()) return 0.0;
    
    double somme = 0.0;
    for (double note : notes) {
        somme += note;
    }
    return somme / notes.size();
}

// Étape 1 : Fonction mention
std::string mention(double m) {
    if (m >= 16.0) return "Tres bien";
    if (m >= 14.0) return "Bien";
    if (m >= 12.0) return "Assez bien";
    if (m >= 10.0) return "Passable";
    return "Ajourne";
}

int main() {
    // Étape 2 : Collection extensible std::vector
    std::vector<double> notes = {12.5, 9.0, 14.0, 16.5};

    // Étape 3 : Parcours avec condition 'i < notes.size()' (et non '>')
    for (size_t i = 0; i < notes.size(); ++i) {
        std::cout << "Note " << (i + 1) << " : " << notes[i] << std::endl;
    }

    double moy = moyenne(notes);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Moyenne : " << moy << " (" << mention(moy) << ")" << std::endl;

    // Étape 4 : Ajout de 11.0 et réaffichage
    notes.push_back(11.0);
    std::cout << notes.size() << " notes, moyenne : " << moyenne(notes) << std::endl;

    // Étape 5 : Interception de l'erreur avec .at(10)
    try {
        // L'utilisation de notes.at(10) lève std::out_of_range
        double elem11 = notes.at(10);
        std::cout << "11e élément : " << elem11 << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}