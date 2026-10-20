import copy
from Etudiant import Etudiant

def bonus(e: Etudiant) -> None:
    e.ajouter_note(20.0)

# Initialisation
e1 = Etudiant("R130456789", "El Idrissi", "Amine")
e1.ajouter_note(12.0)

# Etape 1 :
e2 = e1
e2.ajouter_note(15.0)
print(f"Etape 1 -> e1: {e1.nombre_notes()}, e2: {e2.nombre_notes()}")
print(f"Meme objet ? {e1 is e2}")

# Etape 2 :
e3 = copy.copy(e1)
e3.ajouter_note(18.0)
print(f"Etape 2 -> e1: {e1.nombre_notes()}, e3: {e3.nombre_notes()}")

# Etape 3 :
bonus(e1)
print(f"Etape 3 -> e1: {e1.nombre_notes()}")