def moyenne(notes):
    return sum(notes) / len(notes)

def mention(m):
    if m >= 16:
        return "Tres bien"
    elif m >= 14:
        return "Bien"
    elif m >= 12:
        return "Assez bien"
    elif m >= 10:
        return "Passable"
    else:
        return "Ajourne"

notes = [12.5, 9.0, 14.0, 16.5]

for i, note in enumerate(notes, start=1):
    print(f"Note {i} : {note}")

moy = moyenne(notes)
print(f"Moyenne : {moy:.2f} ({mention(moy)})")

notes.append(11.0)
print(f"{len(notes)} notes, moyenne : {moyenne(notes):.2f}")

try:
    elem11 = notes[10]
    print(f"11e élément : {elem11}")
except IndexError as e:
    print(f"Erreur : {e}")