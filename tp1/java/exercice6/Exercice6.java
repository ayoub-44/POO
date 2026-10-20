package exercice6;

import java.util.HashSet;

public class Exercice6 {
    public static void main(String[] args){
        Etudiant a=new Etudiant("R125487452","Amhaouch","ayoub");
        Etudiant b=a;
        Etudiant c=new Etudiant(a);
        Etudiant d=new Etudiant("R135551234", "Amhaouch", "ayoub");
        System.out.println("a == b : " + (a == b));
        System.out.println("a == c : " + (a == c));
        System.out.println("a == d : " + (a == d));
        System.out.println("a equals b : "+a.equals(b));
        System.out.println("a equals c : "+a.equals(c));
        System.out.println("a equals d : "+a.equals(d));
        HashSet<Etudiant> set = new HashSet<>();
        set.add(a);
        set.add(b);
        set.add(c);
        set.add(d);
        System.out.println("Taille du HashSet : " + set.size());
        String s1 = "Hello";
        String s2 = new String("Hello");
        System.out.println("s1 == s2 : " + (s1 == s2));
        System.out.println("s1.equals(s2) : " + s1.equals(s2));
    }
    
}

