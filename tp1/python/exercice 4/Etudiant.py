class Etudiant:
    SEUIL_VALIDATION: float = 10.0

    def __init__(self, cne: str, nom: str, prenom: str):
        self.cne = cne
        self.nom = nom
        self.prenom = prenom
        self._notes = []

    def ajouter_note(self, note: float) -> None:
        if not (0 <= note <= 20):
            raise ValueError(f"note invalide : {int(note)}")
        self._notes.append(note)

    def nombre_notes(self) -> int:
        return len(self._notes)

    def moyenne(self) -> float:
        if not self._notes:
            return 0.0
        return sum(self._notes) / len(self._notes)

    def est_admis(self) -> bool:
        return self.moyenne() >= self.SEUIL_VALIDATION

    def affichage(self) -> str:
        return f"Etudiant {self.cne} : {self.prenom} {self.nom}"