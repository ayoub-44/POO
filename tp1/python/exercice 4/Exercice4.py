from Etudiant import Etudiant

e = Etudiant("R130456789", "El Idrissi", "Amine")
e.ajouter_note(12.5)
e.ajouter_note(9.0)
e.ajouter_note(14.0)

print(e.affichage())
print(f"Moyenne : {e.moyenne():.2f} - admis : {'oui' if e.est_admis() else 'non'}")

try:
    e.ajouter_note(25)
except ValueError as ex:
    print(f"Erreur : {ex}")

e._notes.append(25.0)
print(f"Nouvelle moyenne après modification directe : {e.moyenne():.2f}")