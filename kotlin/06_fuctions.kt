fun sum(num1:Int=0, num2:Int=0):Int{ // default argument
    return num1+num2
}


// if function return nothing there is two type of declaration
fun printAB(a: Int, b: Int) {
    println(a)
    println(b)
}
fun printSum(a: Int, b: Int): Unit { // we have discuse before
    println(a + b)
}



//If a function returns a single expression, you can write it without curly braces:
fun sum1(a: Int, b: Int): Int = a + b
fun sayHello(): Unit = println("Hello")
fun isPositive(number: Int): Boolean = number > 0

//Specifying the return type is optional, as it can be inferred automatically:
fun sum2(a: Int, b: Int) = a + b // Int
fun sayHello1() = println("Hello") // Unit
fun isPositive1(number: Int) = number > 0 // Boolean




fun main(){
    sum(83, 83) // simple call order matters
    sum(num2 = 2, num1 = 4) // specify the value of parameter here order does not matters if you writer name of all the parameters
//    sum(2, num1 = 4) // it will not work because is takes first argument as num1 and you are also passing the 2nd argument as num1 too so there is no value for the num1
    sum(2, num2 = 5)// ok


    // tail recursion
    val n = 4;
    tailrec fun name(n: Int): Int{
        return if(n==0 || n==1)  1
        else name(n-1)
    }
    println(name(n))

//    and other recursion are same as java
}