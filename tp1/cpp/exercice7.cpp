#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>
#include <algorithm>
#include <iomanip>

double calculerSomme() {
    long long n = 10000000LL; 

    auto debut = std::chrono::steady_clock::now();

    long long somme = 0;
    for (long long i = 1; i <= n; ++i) {
        somme += i;
    }

    // Fin du chrono
    auto fin = std::chrono::steady_clock::now();

    std::chrono::duration<double, std::milli> dureeMs = fin - debut;

    std::cout << "Somme calculee : " << somme << std::endl;
    std::cout << "Duree d'execution : " << std::fixed << std::setprecision(3) 
              << dureeMs.count() << " ms\n\n";

    return dureeMs.count();
}

int main() {
    std::vector<double> durees(3);

    std::cout << " ETAPE 2 : Mesures sur 3 executions \n";

    for (int i = 0; i < 3; ++i) {
        std::cout << " Execution " << (i + 1) << " \n";s
        durees[i] = calculerSomme();
    }

    std::sort(durees.begin(), durees.end());
    double mediane = durees[1]; 

    std::cout << "Duree mediane : " << std::fixed << std::setprecision(3) 
              << mediane << " ms \n";

    return 0;
}