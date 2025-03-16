

//Wrapper Class = wrapper class provides additional features over primitive data type
    // wrapper classes are final and immutable

//concepts of wrapper class
    // Autoboxing = process of converting primitive value to an object of the corresponding wrapper class. Ex = int to Integer
    // Unboxing = process of converting object of wrapper type to ist corresponding primitive value. Ex = Integer to int


import java.util.Calendar;

// Use of wrapper class
    // Data structures in the Collection framework, such as ArrayList and Vector, store only objects (reference types) and not primitive types
    // An object is needed to support synchronization in multithreading.
    // They convert primitive data types into objects and vice-versa.
class WrapperClass {
    public static void main(String[] args) {
//        Integer num = new Integer(5) // instance creation using object creation
//        Integer num = Integer.valueOf(5); // instance created using valueOf method
        // both above method are not used nowadays

        // AutoBoxing
        Integer i = 5;
        Character c = '5';
        System.out.println(i);
// These wrapper class give some methods
//   Character
        boolean isD = Character.isDigit('4');
        int isC = Character.compare('a','v');
        boolean isL = Character.isLetter('f'); // and so on
//    Interger
        int b = Integer.parseInt("343234"); // it take staring of digits and return primitive integer value
        Integer a = Integer.valueOf("3434"); // it take any suitable data type and return Integer object
        System.out.println(a.toString());
    }
}
