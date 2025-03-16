

// before Exception handling let's learn about Throwable Class

// Throwable class extends Object class directly
// Throwable class is the superclass of every error and exception

import java.util.Scanner;

// we can create own Throwable class
class  myThrowable extends Throwable{
    myThrowable(){
//        super(); // there in many constructor in Throwable class
//        super("Error");
        super(new ArithmeticException());


        // class inherit many method that we can override

    }
}


//Exception Handling in Java is one of the effective means to handle the runtime errors so that the regular flow of the application can be preserved
//Exception is an unwanted or unexpected event, which occurs during the execution of a program

//Type of exception
    // User-Defined
    // Build-In
        // Checked
            //ClassNotFound
            //Interruption
            //SQLException etc.
        // Unchecked
            //ArithmeticException
            //NullPointerException
            //ArrayIndexOutOfBoundsException etc.

// keywords used in Exception handling
    // try: The try block contains a set of statements where an exception can occur.
    // catch: The catch block is used to handle the uncertain condition of a try block. A try block is always followed by a catch block, which handles the exception that occurs in the associated try block.
    // throw: The throw keyword is used to transfer control from the try block to the catch block and it is used to rise the exception
    // throws: The throws keyword is used for exception handling without try & catch block. It specifies the exceptions that a method can throw to the caller and does not handle itself.
    // finally: It is executed after the catch block. We use it to put some common code (to be executed irrespective of whether an exception has occurred or not ) when there are multiple catch blocks.

// we can use nested exception handling
// we can chain the catch block
// we can create custom Exception as well



class ExceptionHandling {

    public static  int  div(int a, int b) throws ArithmeticException{ // used of throws
        return a/b;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int result = 0;
        try { // try block
            result = a / (b - c);
            System.out.println("result" + result);
            try { // nested exception handling
                result = a*b*c;
                System.out.println("result" + result);
            }catch (ArithmeticException e){
                System.out.println("Integer out of bound value runtime Error");
            }
        }
        catch (ArithmeticException e) { // catch block always after try block
            System.out.println("Exception caught:Division by zero");
        }
        catch (NullPointerException e){
            System.out.println("Exception caught:null point");
        }
        finally { // finally block code always execute ether there is exception or not always after catch block
            System.out.println("I am in final block");
        }
        System.out.println(div(a,b));

        try {
            if(a<4){
                throw new MyException();
            }
            System.out.println(a);
        }catch (MyException e){
            System.out.println(e);
        }

    }
}

// creating user-defined exception
class MyException extends Exception{
    MyException(){
        super();
    }
    @Override
    public String getMessage() {
        return  "Exception message";
    }

    @Override
    public String toString() {
        return super.toString();
    }
}



// Exception handling while overriding

// If The SuperClass doesn’t declare an exception
    // subclass declare checked exception -> gives error
    // SubClass declare Unchecked exception -> no problem
// If The SuperClass declares an exception
    // SubClass declares exceptions other than the child exception of the SuperClass declared Exception -> error
    // SubClass declares a child exception of the SuperClass declared Exception. -> No problem
    // SubClass declares without exception. -> No problem
