

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
// Every thing in java is pass by reference


// Variable are like container that hold some data
class Variable {
    // Type of variable
        // local variable -> declared in a method and has scope in that method
        // Instance variable -> declared in a class without static keyword that is accessible by instance and different value for different instance of that class if it is not private
        // static variable -> declared in a class it can be accessible to all the and same for each variable, but it should call using with class name Ex = ClassName.variableName is must be static


    // All below variable are instance variable
    // All below are primitive data type
    private byte age = 21; // 8-bit integer and by default 0
    int ages = 125343; // 32-bit integer and by default 0
    short myage = 43;  // 16-bit
    long myages = 3428329852L; // L literals is compulsory  64-bit  and by defaul value is 0
    char ch = 'a'; // 16-bit // unicode and letters and (integers that start with 0 and value less than 256 are type cast using ASCII code
    float f = 5.6f; // f literals is compulsory and 64-bit
    double d = 5.6; // 64-bit
    boolean bool = true; // 1-bit
    static int hell = 4324; // static variable accessible by ClassName dependent not dependent on the instance  if any instance change this value then this value change will reflect to other instance too. it is on class level only, we can't create local static variable

    void  fun(){
        // local variable
        int abhi = 23;
    }

    // Some literals and rules

    // for int
    int octal = 0234; // if value of int variable start with 0 without x and b then it is consider as octal number
    int hex = 0x4334; // if value of int variable start with 0 followed by x then it is consider as hexa-decimal number;
    int binary = 0b101010; //  if value of in variable start 0 followed by b and other digit are 0 or 1 are consider as binary number


// Type conversion
    // Automatic Type Conversion Ex = byte -> short -> int -> long -> float -> double
    // explicit Type Conversion Ex =  byte <- short <- int <- long <- float <- double
    int a = (int)'a';
    int b = (int)4.3f;
// Type Promotion in Expressions
    double result = (f * b) + (age / ages) - (d * ch); // here all type is promoted to double





    // Non-primitive data type
        // String
        // Array
        // Class/Object/Interface etc is used to make own user defined data type



    // every java program is start to run from main function
    public static void main(String[] args) throws IOException {
        // to print on console
        System.out.println(hell + "rupees"); // print and add new line
        System.out.print(hell); // print without adding new line

        // we ca use print statement as c style also
        System.out.printf("%d",hell);

        Scanner sc = new Scanner(System.in); // object of scanner class is used to input in java
        int input = sc.nextInt();
        System.out.println(input);



        // BufferReader for input
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String a = br.readLine(); // input single line as string further we can convert in any other type



//        static String name = "A"; // we can't create local static variable
    }
}


// JVM / JDK / JRE / JIT

// JDK = Java Development Kit is a software development environment consist tool and libraries and JRE
// JRE = Java Runtime Environment provide requirement for execution of code and it consist JVM and core classes and supporting files
// JVM = Java Virtual Machine is responsible of executing the java program


// compilation process
    // .java file compile and converted into .class(byteCode) file that execute on any platform using JVM



// Operators are same as c++ so all operator i know