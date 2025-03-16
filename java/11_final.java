
// final = keyword, non-access modifier applicable on class , method , class

import javax.swing.*;
import java.util.Arrays;

class Details{
    Details(){}
    String name;
    int roll;
    Details(String name, int roll){
        this.name = name;
        this.roll = roll;
    }

    final void printDetails(){ // final method and it can't override
        System.out.println(name +" "+ roll);
    }

}
class DerivedDetails extends Details{
    /*

        @Override
        final void printDetails(){
            System.out.println("Mr " +name +" "+ roll);
        }
        // since this method is final in base class we can't override this
     */

}



final  class  A { // final class and it can't inherit by any other class
    // class body
}

//class B extends  A{}  // A is final class, so we can't be inherits



 class Final {

    final int MAX_VALUE = 2000000000; // we must to initialise variable at time of declaration , In variable final is used to make a variable constant ,A final variable can be assigned value later, but only once and then can't be change again
    static  final  int MIN_VALUE = -2000000000; // with static
    final int CAPACITY; // blank final variable
    {
        CAPACITY = 25; // initialisation of final variable using instance-initializer-block
    }
    static final int  MINIMUM;
    static{ // static block
        MINIMUM = 4;// initialisation of final variable using instance-initializer-block
    }
    final int Cost;
//    static  final  int Cost2;
    Final(int _final){
        Cost = _final;// initialisation of final variable using constructor
//        Cost2 = _final; // static final variable can't initialize using constructor


        final  int value; // it treated as local variable
        value = 50;
    }


    public static void main(String[] args) {
        final  int mainFinal ;
        mainFinal= 432;
//        mainFinal = 5; // we can't change once it initialized/assign some value
        System.out.println(mainFinal);



        // Behavior of final with object and arrays
        final int [] arr = new int[]{1, 2, 3,4, 5};
        System.out.println(Arrays.toString(arr));
//        arr = new int[]{12,1,53,53,2} // we can't re-assign to final variable
        arr[4] = 20; // but we can change the value inside of it because of stack and heap memory and reference feature
        System.out.println(Arrays.toString(arr));
        final Details  details= new Details("Abhishek", 21);
        System.out.println(details.roll);
        details.roll = 10;
        System.out.println(details.roll);

    }
}

