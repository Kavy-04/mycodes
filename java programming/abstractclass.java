abstract class Annimal {

    public abstract void sound ();
    
    public void sleep(){
        System.out.println("this annimal is sleeping");
    }    
}

 class Dog extends Annimal {


    public void sound(){
        System.out.println("this is barks" );
    }
    public void sleep(){
        System.out.println("this dog is sleeping");
    }    
}
 class Cat extends Annimal {
    public void sound(){
        System.out.println("this is meows");
        
    }
    public void sleep(){
        System.out.println("this cat is sleeping");
    }    
}
public class abstractclass {
    public static void main(String[] args) {
        
        Annimal dog= new Dog();
        Annimal cat= new Cat();

        dog.sound();
        dog.sleep();

        cat.sound();
        cat.sleep();
    }
}
