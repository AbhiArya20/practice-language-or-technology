 // package declared using package keyword

class Inheritance {

    // simple inheritance
    static class Base {
        Base(){
            System.out.println("Base");
        }
        public void print_base()
        {
            System.out.println("Base method");
        }
        public void overloading(){
            System.out.println("overloading 1");
        }
        public void overloading(int a){
            System.out.println("overloading "+a);
        }
        public void overloading(int a, int b){
            System.out.println("overloading "+a);
        }


        @Override
        public int hashCode() {
            System.out.println("Overriding internal method");
            return 2349;
        }

        public void  overriding(){
            System.out.println("base");
        }
    }


    static class Derived extends Base { // extends keyword is used to inherit a class

        Derived(){
            super(); // to call base class constructor,it must be first in derived constructor it is reference of immediate super_class/parent_class object
            System.out.println("derived");
            this.print_derived(); // call another method of same class
        }
        public void print_derived() { System.out.println("Derived method"); }

        @Override // this is known as annotation which is used to provide additional information there is lots of annotation like @Deprecated, @Inherited, @Target, @SafeVarArgs and many more
        public void overloading() {
            super.overloading(); // to call derived class method
            System.out.println("overrided in derived class");
        }
    }
    public static void main(String[] args)
    {
        Derived g = new Derived();
        g.print_base();
        g.print_derived();
        g.print_base();

// reference-variable = object of derived class
        Base base     = new Derived(); // this concept is known as the Dynamic Method Dispatch, this is very useful in collections framework
        // Here we create object of Derived class using reference of base class
        // if base and derived class has method with same name or override, and then if that method is called then derived class method is called and execute otherwise base class method is called and execute normally and other method which is specific to derived class will not accessible

    }
}


//  Note: In Java, constructor of the base class with no argument gets automatically called in the derived class constructor. in top-up manner from base class to derived class
// whenever inherit a class then base has a construct that called using super() or  a default construct should provided which automaticaly calls


// Super keyword = The super keyword in java is a reference variable that is used to refer parent class objects
    // Used to access parents_class variable,methods,call super constructor



// Packages
    // Package in Java is a mechanism to encapsulate a group of classes, sub packages and interfaces
    // Used for preventing naming conflicts
    // Providing controlled access
    // import package.name.*;
    // package creation  =  javac Welcome.java && javac -d . Welcome.java && java FirstPackage.Welcome
    // there is many in-build packages such as java.lang or java.utils or java.io or java.awt etc