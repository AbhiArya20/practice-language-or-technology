
// Before Lambda Expression we should know about functional Interface. you are know what is interface.
// Functional interface is also normal interface with only single abstract method.

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;
import java.util.function.Consumer;

// Lets quick revision of normal interface with single abstract class
// Interface
interface OurInterface {
    int ourSumMethod(int a, int b); // abstract method
}

class InterfaceImplementation implements OurInterface {
    @Override
    public int ourSumMethod(int a, int b) { // override the method interface
        return a + b;
    }
}

class WhereWeCalled {
    public static void main(String[] args) {
        InterfaceImplementation obj = new InterfaceImplementation(); // creating object of that class
        int ans = obj.ourSumMethod(5, 2); // calling that method
        System.out.println(ans);
    }
}

// now do the same thing with lambda expression
interface OurInterface2 {
    int ourSumMethod(int a, int b);
}

class Lambda {
    public static void main(String[] args) {
        OurInterface2 obj = (a, b) -> a + b;
        int ans = obj.ourSumMethod(1, 4);
        System.out.println(ans);
        // you just achieve same functionality without implementation step

        // some use case of lambda expression that we implemented before

        // 1 Thread
        // lets break it into two steps, so it is easy to understand
        // please revisit file where we create threads.
        new Thread(() -> { // here lambda expression represents runnable interface instance
            System.out.println("Thread generated");
        }).start();

        // 2 Comparator
        ArrayList<ArrayList<Integer>> arr = new ArrayList<>();
        Random random = new Random();
        for (int i = 1; i < 10; i++) {
            ArrayList<Integer> temp = new ArrayList<>();
            temp.add(random.nextInt(100));
            temp.add(random.nextInt(100));
            arr.add(temp);
        }
        Collections.sort(arr, (ArrayList<Integer> a, ArrayList<Integer> b) -> a.get(1) - b.get(1)); // here lambda
                                                                                                    // function
                                                                                                    // represent
                                                                                                    // comparator
                                                                                                    // interface

        // To print ArrayList
        arr.forEach((value -> System.out.println(value.get(0) + " " + value.get(1))));
        arr.forEach(n -> {
            if (n.get(0) % 2 == 0)
                System.out.println(n);
        });
        // there is lots of use cases of lambda Expressions

    }
}