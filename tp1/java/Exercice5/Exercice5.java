package Exercice5;
public class Exercice5 {
    public static void bonus(Etudiant e){
        e.ajouterNote(20.00);
    }
    public static void main(String[] args){
        Etudiant e1=new Etudiant("R120254154","Amhaouch","Ayoub");
        e1.ajouterNote(12.00);
        Etudiant e2=e1;
        e2.ajouterNote(15.00);
        System.out.println("Le nombre des notes pour e1 : "+e1.nombreNotes()+" et e2 : "+e2.nombreNotes());
        System.out.println("est ce que e1 et e2 meme objet ? : "+(e1==e2));
        Etudiant e3=new Etudiant(e1);
        e3.ajouterNote(18.00);
        System.out.println("le nombre des notes de e3 est : "+e3.nombreNotes());
        bonus(e1);
        System.out.println("le nomre des notes e1 est : "+e1.nombreNotes());
    }
}
