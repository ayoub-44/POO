import copy
from Etudiant import Etudiant

a = Etudiant("G123456789", "Alami", "Simo")
b = a
c = Etudiant("G123456789", "Alami", "Simo")
d = Etudiant("R135551234", "Alami", "Simo")
print("=== TESTS D'IDENTITÉ (is) ===")
print("a is b :", a is b)  
print("a is c :", a is c) 
print("a is d :", a is d) 

print("TESTS D'ÉGALITÉ")
print("a == b :", a == b)  
print("a == c :", a == c)  
print("a == d :", a == d)  

print("TAILLE DU SET (set)")

groupe = {a, b, c, d}
print("Taille du set :", len(groupe)) 

s1 = "AETHER"
s2 = "".join(["A", "E", "T", "H", "E", "R"])
print("s1 is s2 (Identité) :", s1 is s2) 
print("s1 == s2 (Égalité)  :", s1 == s2)  