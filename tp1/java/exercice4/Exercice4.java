
public class Exercice4 {
        public static void bonus(Etudiant e){
        e.ajouterNote(20.00);
    }
    public static void main(String[] args){
        Etudiant etu1=new Etudiant("R130456789","El Idrissi","Amine");
        etu1.ajouterNote(12.5);
        etu1.ajouterNote(9.0);
        etu1.ajouterNote(14.0);
        etu1.affichage();
        System.out.printf("moyenne : %.2f - admis : %s \n",etu1.moyenne(),etu1.estAdmis() ? "oui" : "non");
        etu1.ajouterNote(25.0);
        //etu1.notes.add(12.0); "provo  ue un erreur car l'attribut notes est privee"
        Etudiant e1 = new Etudiant("R13014587","amhaouch","ayoub");
        e1.ajouterNote(16.00);
        Etudiant e2 =e1;
        e2.ajouterNote(17.00);
        System.out.println("e1 :"+e1.nombreNotes()+" et e2 : "+e2.nombreNotes());
        System.out.println("Meme objet ? : "+(e1==e2));
        Etudiant e3=new Etudiant(e1);
        e3.ajouterNote(18.00);
        System.out.println("Le nombre des notes de e3 est : "+e3.nombreNotes());
        bonus(e1);
        System.out.println(e1.nombreNotes());

    }
}
