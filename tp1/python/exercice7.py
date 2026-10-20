import statistics
import time

def calculer_somme(n: int = 10_000_000):
    debut = time.perf_counter()

    somme = 0
    for i in range(1, n + 1):
        somme += i

    fin = time.perf_counter()

    duree_ms = (fin - debut) * 1000

    print(f"Somme : {somme}")
    print(f"Durée d'exécution : {duree_ms:.3f} ms\n")

    return duree_ms

print("=== ÉTAPE 2 : Mesures sur 3 exécutions ===")
durees = []

for i in range(1, 4):
    print(f"--- Exécution {i} ---")
    duree = calculer_somme()
    durees.append(duree)

mediane = statistics.median(durees)
print(f" Durée médiane : {mediane:.3f} ms ")