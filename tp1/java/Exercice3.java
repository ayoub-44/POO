import java.util.ArrayList;
import java.util.List;
public class Exercice3 {
    static public double moyenne(ArrayList<Double> notes){
        double somme=0;
        for (double note : notes){
                somme+=note;
            };
            return somme/notes.size();
        }

    static  public String mention(double m){
        if(m<10){
            return "Ajourne";
        } else if(10<=m && m<12){
            return "Passable";
        } else if(12<=m&&m<14){
            return "Assez bien";
        } else if(14<=m && m<16){
            return "Bien";
        } else if(m>=16){
            return "Tres bien";
        } else {
            return "cette note pas valide";
        }
    }
    public static void main(String[] args){
        
        ArrayList<Double> notes = new ArrayList<>(List.of(12.5, 9.0, 14.0, 16.5));
        for (int i=0;i< notes.size();i++){
            System.out.println("Note "+(i+1)+" : "+notes.get(i));
        }
       System.out.printf("Moyenne : %.2f (%s) \n",moyenne(notes),mention(moyenne(notes)));
       notes.add(11.0);
       System.out.printf("%d notes, moyenne : %.2f (%s)\n", notes.size(), moyenne(notes), mention(moyenne(notes)));
       try {
        double note11=notes.get(10);
        System.out.println("la note 11 est : "+note11);
        }
        catch (IndexOutOfBoundsException error){
            System.out.println("erreur :"+error);
        }
       
    }



}
