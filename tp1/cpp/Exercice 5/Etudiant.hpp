#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <vector>

class Etudiant {
public:
    static constexpr double SEUIL_VALIDATION = 10.0;

    Etudiant(const std::string& cne, const std::string& nom, const std::string& prenom);

    void ajouterNote(double note);
    int nombreNotes() const;
    double moyenne() const;
    bool estAdmis() const;
    std::string affichage() const;

private:
    std::string cne;
    std::string nom;
    std::string prenom;
    std::vector<double> notes;
};

#endif