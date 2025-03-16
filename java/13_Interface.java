
// I think one of the toughest topic in java

//Interface = A interface in java is a blueprint of a class. it contains static constant and abstract methods,
    // Declare using interface keyword
    // Class that implement interface should implement all method in interface
    // can't create object of an interface
    // we can implement multiple interface on same class and also implement another class or abstract class by which we are able to use multiple inheritance
    // A interface can extends another interface
    // A interface can declare in class, it is static by default because it will implement on any other class can't on the class inside it is created, it can't be private
interface Math{
    int a = 0; // public, static, and final by default
    int sum(int a, int b); //public,static, abstract by default
    static int diff(int a, int b){ // only static method declaration is allowed because it not refers any instance of class which implement this interface
        return 1;
    }
    default void doSomething(){ // default method is allowed
        System.out.println("Interfaces Default message");
    }
    int mul(int a , int b);
    int div(int a, int b);
}

interface Math2{
    int a = 0;
    int sum(int a, int b);
//    int diff(int a, int b); // this is commented because of an ambiguity arise we discussed below
    int mul(int a , int b);
    int div(int a, int b);

    interface Math2Advance{ // interface inside interface and static by default
        int sq();
        int sqrt();
        int sinx();
    }
}

interface Math3 extends Math{ // inherit another interface
    int sq(int a);
}

class ToExtendDemo{

}
class Interface extends ToExtendDemo implements Math,Math2, Math2.Math2Advance {  // there is lots of complexity, I have implemented Math and Math2 both may contain method named diff as i have created if both method is abstract then ok if one is abstract and another is static then it causes ambiguity that I mentioned in comment above.
    // all the methods in interfaces should override here
    @Override
    public int sum(int a, int b) {
        return 0;
    }

    @Override
    public int mul(int a, int b) {
        return 0;
    }

    @Override
    public int div(int a, int b) {
        return 0;
    }

    @Override
    public int sq() {
        return 0;
    }

    @Override
    public int sqrt() {
        return 0;
    }

    @Override
    public int sinx() {
        return 0;
    }

    @Override
    public void doSomething() {
        System.out.println("okkkk");
    }

    interface Hello{ // interface in class, it can't be private
        void sayHello();
        void greeting();
    }
    public static void main(String[] args) {
        Math.diff(6,3);

        Interface m = new Interface();
        m.doSomething();


        Math math = new Interface(); // Method dispatching

    }
}

// There is lots of In-Build interface