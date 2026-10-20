package Exercice5;
import java.util.ArrayList;
public class Etudiant {
    private String cne;
    private String nom;
    private String prenom;
    private ArrayList<Double> notes = new ArrayList<>();
    double SEUIL_VALIDATION = 10.0;

    public Etudiant(String c,String n,String p){
        this.cne=c;
        this.nom=n;
        this.prenom=p;
    }
    public Etudiant(Etudiant autre){
        this.cne=autre.cne;
        this.nom=autre.nom;
        this.prenom=autre.prenom;
        this.notes=new ArrayList<>(autre.notes);
    }
    public void ajouterNote(Double note){
        if (note>0 && note<=20){
            this.notes.add(note);
        }
   
        
        else {
            System.out.println( "La note doit être comprise entre 0 et 20");
        }
        
    }
    public int nombreNotes(){
        return notes.size();
    }
    public double moyenne(){
        double somme=0.0;
        if (this.notes.isEmpty()){
            return 0.0;
        }
        for (double note :this.notes){
            somme+=note;
        }
        return somme/this.notes.size();
    }
    public boolean estAdmis(){
        return this.moyenne() >= SEUIL_VALIDATION;
        }
    public void affichage(){
        System.out.println("Etudiant "+this.cne+" : "+this.prenom+" "+this.nom);
    }

}