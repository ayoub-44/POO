import java.util.Arrays;

public class Exercice7 {


    public static double calculerSomme() {
        long n = 10000000L;
        
        long debut = System.nanoTime();

        long somme = 0;
        for (long i = 1; i <= n; i++) {
            somme += i;
        }

        long fin = System.nanoTime();

        double dureeMs = (fin - debut) / 1_000_000.0;

        System.out.println("Somme calculée : " + somme);
        System.out.printf("Durée d'exécution : %.3f ms%n%n", dureeMs);

        return dureeMs;
    }
    public static void main(String[] args){
        double[] durees = new double[3];
        calculerSomme();
        for (int i=0;i<3;i++){
            System.out.println("Exécution "+i);
            durees[i]=calculerSomme();
        }
            Arrays.sort(durees);
            System.out.println("le valeur médiane est :"+durees[1]+" ms");
        
    }
    
}
