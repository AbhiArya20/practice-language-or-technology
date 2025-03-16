import java.util.Scanner
import kotlin.math.sqrt

// Most of the concept in kotlin is similar to the java so, I have to focus on the syntax of the kotlin only
// ; is option in kotlin
// we can use all the things in java
//

const val MY_STRING = "Hello this is constant variable"


class A_Variable_dataType_literals{
}

// program start from main fuction
fun main(){
    // to print
    print("Hello kotlin") // without line
    println()
    println("Hello kotlin") // with line

    // Variable -> variables can declare using two keyword var, val
    // val -> immutable variable, constant,  cannot be changed after it has been initialized. // as it is similar to final variable in java
    // var -> mutable variable, which can be changed
    val const = "can't change it"
    val const2:String;
    const2= "now variable is assigned you can't change it now"
    println(const + " "+ const2)

    var mutable = "can change it" // once a mutable variable initialise with a data type then variable is declared as that data type this also known as type inference
    println(mutable)
    mutable = "changed"
    println(mutable)

    val withTypeString:String = "this is a string variable"
    val withTypeInt: Int = 2342
    println("$withTypeInt $withTypeString")
    // const modifier with val
    // const modifier can be applied on String and primitive data type only
    // const variables need to be declared on top level, outside of any functions as i declare at top const val MY_STRING = "Hello this is constant variable"
    // it must be initialised at time of declaration

    // we can write variable name with space using back-tick ``

    val `Abhi Arya` = "Abhi Arya"
    println(`Abhi Arya`)

    // literals
    val myName = "Abhishek kumar"
    val char = 'A'
    val year = 2022
    val money = 100_000_000_000 // we can add _ in between digits so format larger numerical value to make readable we can't use _ at start and end of the number

    //Template
    val str = "$myName this is string of $char in year of $year and money $money and sum is ${year+money}" // string template. I loved this one easier than JS


    // string formatting -> my personal recommendation is don't use this
    val str2 = String.format("%s this is string of %c in year of %d and money %d and sum is %d", myName,char,year, money, year+money)
    println(str)
    println(str2)
    println("%s this is string of %c in year of %d and money %d and sum is %d".format(myName,char,year, money, year+money))
    println("%s this is string of %c in year of %d and money %d and sum is %d".format(myName,char,year, money, year+money))
    println(String.format("%S ",myName))  // %S -> if we use %S it makes string toUpperCase letter

    val str3 = "%s %c it works"
    println(str3.format(myName, char))
    println(String.format("first%nsecond%nthird%n30%%")) // %n works same as /n and if you want to use % in string you have to use %% same as escape sequences
    println("%${20}s".format(myName)) // here %${spaceSize}s use to make number of space for the string




    //Input
    val name = readLine()!! // readLine() takes complete line input always in string
    val roll = readLine()!!.toInt() // to convert into integer value
    val college = readln()
    val registration = readln().toInt() // to input
    val marks = readLine()!!.toInt()
    println(name + " " + roll + " "+college + " " + registration+ " "+marks + " " + (marks+roll));

    val (name2, roll2, college2, registration2, marks2) = readln().split(" ")
//    val (name2, roll2, college2, registration2, marks2) = readline().split(" ") // this is same
    print("\n$name2 $roll2 $college2 $registration2 $marks2 ${marks2.toInt() + roll2.toInt()}")

    // Using Java Scanner
    val sc = Scanner(System.`in`)
    val name3 = sc.next()
    val roll3 = sc.nextInt()
    val college3 = sc.next()
    val registration3 = sc.nextInt()
    val marks3 = sc.nextInt()
    print("\n$name3 $roll3 $college3 $registration3 $marks3 ${marks3 + roll3}")




    // Data types - Similar to java just difference is in className
    /*
    // primitive
          SuperType ->  SubType
        1-> Number -> Long, Int, Short, Byte, Float, Double (we have also unsigned Number data type like = ULong, UInt, UShort, UByte)
        2-> Character -> Char
        3-> Boolean -> Boolean
        // their literals is also same as java

        //Any -> is Root type used to assign any data-type(not null), but initialise with a data type then variable is declared as that data type and you can't assign it to any other type further
        //Unit -> is used if function does-not return any value similar to void in java
        //Nothing -> Nothing is a type that has no instances. For some functions in Kotlin, the concept of a return value doesn't make sense, since they never return controls. This means that any code following an expression of type Nothing is unreachable.
    //We will know about these type later
     */

    // TypeCasting
    val num = 1000
    val sqrtOfNum = sqrt(num.toDouble())
    println(sqrtOfNum)

    val charNum = 23
    println(charNum)
    val ch = charNum.toChar()
    println(ch)
    val charNum2 = ch.code
    println(charNum2)


    val doubleNumber = 1.0
//    val shortNum = doubleNumber.toShort() -> wrong way
    val shortNumber = doubleNumber.toInt().toShort() // correct way


    // Ranges checking
    val a = 5
    val b = 20
    val c = readln().toInt()
    val within = a <= c && c <= b // tradition values

    val withinNew = c in a..b // new Style to check these type of styles
    val withinMultiple = c in 5..10 || c in 20..30 || c in 40..50
    val notWithin = c !in 10..99
    val withChar = 'b' in 'a'..'c'
    println("$within $withinNew $withinMultiple $notWithin $withChar")


    // handling null using ? same as JS
    val nullString : String? = null // to make nullable
    println(nullString?.length) // working with nullables
    println(nullString!!.length) // working with nullables


    // elvis operator  ->  if the left-hand side of the expression (name?.length) is not null, return it; otherwise, the right-hand side You can also use return and throw expressions
    val length: Int = name?.length ?: throw Exception("The name is null")

    // when and apply scope
}



/*

Format specifier	Argument type	                                           Output string

%s	                Any type that implements the toString() method	              String
%d	                Int, Byte, Short, Long, BigInteger	                       Decimal integer
%o,                 %O	Int, Byte, Short, Long, BigInteger	                    Octal number
%x, %X	            Int, Byte, Short, Long, BigInteger	                      Hexadecimal number
%f	                Double, Float	                                     Decimal floating point number
%e, %E	            Double, Float	                               Floating point number in scientific notation
%g, %G	            Double, Float	                           Floating point number in decimal or scientific notation
%b, %B	            Boolean	                                                     Boolean value
%c, %C	            Char	                                                     Character
%n	                Char	                                                     Newline
%%	                Char	                                                  The % character
 */



/*

// formatting integers
    /*
        %0${noOfZeros}d -> 	add leading zero if digit of given value is less than the given noOfZeros and if you use any other number %{anyOtherNumber}${noOfZeros}d it will give space
        %,d -> add , on every thousand divisor to increase readability like 1000000 = 1,000,000
        %+d -> add leading + even if number is positive
        % d -> add leading space
        %(d -> add parentheses on negative number without sign, Ex = -123 = (123)
     */
    println("%0${10}d".format(129232)) // leading 0
    println("%5d".format(12933)) // leading space
    println("%+d".format(24321)) // leading +
    println("%+d".format(-24322)) // sign is - not positive because number is negative
    println("% d".format(832483)) // single leading space
    println("%(d".format(-123934)) // add (int) if given number is negative

    // formating octal and hexadecimal numbers
    val int1 = 3465
    val int2 = -7896

    println(String.format("%o", int1))     //6611
    println(String.format("%o", int2))     //37777760450
    println(String.format("%#o", int1))    //06611

    println(String.format("%8o", int1))    //    6611
    println(String.format("%-8o", int1))   //6611
    println(String.format("%09o", int1))   //000006611

    println(String.format("%x", int1))     //d89
    println(String.format("%X", int2))     //FFFFE128
    println(String.format("%#X", int1))    //0XD89

    println(String.format("%8x", int1))    //     d89
    println(String.format("%-8X", int1))   //D89
    println(String.format("%09X", int1))   //000000D89

    // formating floating and double numbers
    val double1 = 1234.5678
    val double2 = -1234.5678

    println(String.format("%f", double1))      //1234.567800
    println(String.format("%f", double2))      //-1234.567800
    println(String.format("% f", double1))     // 1234.567800
    println(String.format("% f", double2))     //-1234.567800

    println(String.format("%(f", double1))     //1234.567800
    println(String.format("%(f", double2))     //(1234.567800)
    println(String.format("%+f", double1))     //+1234.567800
    println(String.format("%,f", double1))     //1,234.567800

    println(String.format("%-15f", double1))   //1234.567800
    println(String.format("%015f", double1))   //00001234.567800
    println(String.format("%15.2f", double1))  //        1234.57
    println(String.format("%.3f", double1))    //1234.568
    println(String.format("%.6f", double1))    //1234.567800

    println(String.format("%e", double1))      //1.234568e+03
    println(String.format("%E", double2))      //-1.234568E+03
    println(String.format("%15.2e", double1))  //       1.23e+03
    println(String.format("%.9E", double1))    //1.234567800E+03

    val boolean = true

    println(String.format("%b",boolean))    //true
    println(String.format("%B",boolean))    //TRUE
 */