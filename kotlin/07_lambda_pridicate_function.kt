// Function type
fun sumOftwoNumber(a:Int, b:Int):Int = a+b
//sumOfTwoNumber has type (Int, Int) -> Int
fun sayHelloBuddy() {
    println("Hello")
}
//sayHelloBuddy has type () -> Unit



// Function reference as object
// both are same
val sumObject = ::sumOftwoNumber
val sumObject2: (Int, Int) -> Int = ::sumOftwoNumber
// function reference with class
class Person(val name: String, val lastname: String) { // primary constructor
    fun printFullName(): String {
        return("full name: $name $lastname")
    }
}
val classFunref = Person::printFullName


//Functions returning other functions
fun getRealGrade(x: Double) = x
fun getGradeWithPenalty(x: Double) = x - 1
fun getScoringFunction(isCheater: Boolean): (Double) -> Double {
    if (isCheater) {
        return ::getGradeWithPenalty
    }
    return ::getRealGrade
}

//Function references as function parameters
fun applyAndSum(a: Int, b: Int, transformation: (Int) -> Int): Int {
    return transformation(a) + transformation(b)
}


// lambda expression
val multiplyTwoNumber = fun(a:Int, b:Int)=a*b
val mutiplyTwoNumber = { a: Int, b: Int -> a * b }

// closure
fun placeArgument(value: Int, f: (Int, Int) -> Int): (Int) -> Int {
    return { i -> f(value, i) }
}


// Receivers
val reciverSum: Int.(Int) -> Int = { a -> this + a }
fun Int.opp(f: Int.() -> Int): Int = f()



fun main(){
    println(reciverSum(1, 2)) // 3
    println(1.reciverSum(2)) // 3 ..
    println(10.opp{this.times(2)}) // return 20


    //Predicate_function used to filter objects from collection
    val strings = arrayOf("Navin" , "a", "nanan", "Abhishek")
    // we want to getPalindrome from strings
    val getPalindrome: (String)-> Boolean= {x->x.reversed()==x} // lambda function
    for (i in strings)
        println(getPalindrome(i))

    val numbers = listOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    println(numbers.any { x -> x % 2 == 0 })
    println(numbers.none { x -> x % 2 == 0 })
    println(numbers.all { x -> x % 2 == 0 })





}


/*

Type	                   Function reference

Reference to a function	      ::functionName
Reference by Class	        Class::functionName
Reference by Object	        object::functionName
Reference to a constructor	     ::Class



 */