

import java.util.Scanner;

class Conditionals {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();


        // flow control of if--else-if--else if similar to c++.
        // you can use nested if--else-if--else too.
        if(a>=18){
            System.out.println("You are eligible");
        }else if(a<18 && a>10){
            System.out.println("You are not eligible");
        }else{
            System.out.println("You Should not think about this");
        }



        // switch statement
        switch (a){
            case 18: System.out.println("You are eligible");
            break; // this will cover loop section
            case 10: System.out.println("You are not eligible");
            break;
            default:System.out.println("You are may or may not eligible");
        }
        // enhance switch statement
        // this not require the break
        switch (a){
            case 10,40 -> System.out.println("You are eligible");
            case 18 -> System.out.println("You are not eligible");
            default -> System.out.println("You are may or may not eligible");
        }

        //you can also use ternary operator
    }

}
