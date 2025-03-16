// if else is similar to the java without ternary operator we use a special case of if-else in kotlin instead of ternary operator
fun main() {
    val value = readln()
    val isExelent = if(value=="Abhi"){ // it works as ternary operator
        println("$value is a good person")
        "Yes" // the value store in isExelent if condition is true
    }else{
        println("$value is bad person")
        "NO" //// the value store in isExelent if above condition is false
    }
    println(isExelent)

    val firstInt = "5"
    val secondInt = "5"
    if(firstInt === secondInt){ // === check the address/reference of the variable pointing to while == check for value only
        println(true)
    }

    // when == switch statement
    //simple
    when(value) {
        "Sun" -> print("Sun is a Star")
        "Moon" -> print("Moon is a Satellite")
        "Earth" -> print("Earth is a planet")
        else -> print("I don't know anything about it")
    }
    // mutliple checking
    val value2 = readln()
    when(value2.toInt()) {
        in 4..6 -> print("Sun is a Star")
        in 62..95 -> print("Moon is a Satellite")
        843,242 -> print("Earth is a planet")
        else -> print("I don't know anything about it")
    }


    // assigning to a variable
    val (firstInput, operator , secondInput) = readln().split(" ")
    val first=firstInput.toInt()
    val second = secondInput.toInt()
    val ans = when (operator){
        "+", "plus" , "PLUS"-> first+second
        "-", "minus", "MINUS"-> first-second
        "*", "multiply", "MULTIPLY"-> first*second
        "/", "divide", "DEVIDE" -> first/second
        else->{
            println("Invalid operator $operator")
            "Invalid operator"
        }
    }
    println(ans)

    // assigning with fuction
    fun calculate(operator:String) = when(operator){
        "+", "plus" , "PLUS"-> first+second
        "-", "minus", "MINUS"-> first-second
        "*", "multiply", "MULTIPLY"-> first*second
        "/", "divide", "DEVIDE" -> first/second
        else->{
            println("Invalid operator $operator")
            "Invalid operator"
        }
    }
    println(calculate(operator))


    // print direct
    println(when(operator){
        "+", "plus" , "PLUS"-> first+second
        "-", "minus", "MINUS"-> first-second
        "*", "multiply", "MULTIPLY"-> first*second
        "/", "divide", "DEVIDE" -> first/second
        else->{
            println("Invalid operator $operator")
            "Invalid operator"
        }
    })








    // Loops

    // repeat() function
    val n = readln().toInt()
    repeat(n){ // n should be positive and this function run n time  if n is negative or zero kotlin ignores this function
        println(n)
    }
    repeat(n , { println(n)}) // using lambada expression both function do the same work we will learn lambda expression later


    // while and do while loop is same as java


    // for loops

    // iterate through range
    for (i in 1..10)
        print("$i ")
    //iterate through char
    for (i in 'a'..'z')
        print("$i ")
    // iterate through string
    for (i in "hello")
        print("$i ")
    for (i in "hello".reversed())
        print("$i ")
    // iterate through collection or list
    val arr = mutableListOf <Int>(2,4, 5, 6, 7)
    for (i in arr)
        print("$i ")
    for (i in arr.indices)
        print("$i ")
    // upper limit
    for (i in 1 until 5) // upper limit not included
        print("$i ")
    // steps jump
    for (i in 1..15 step 2)
        print("$i ")
    // down ward loop
    for (i in 10 downTo 1 step 2) // by default step=1
        print("$i ")
    for (i in 10..1) // this is not works you must have to downTo and step
        print("$i ")



    // JUMPS and RETURNS
    // break and continue is similar to the java but kotlin provide labels too

    // break and continue with labels
    firstLoop@ for (i in 1..5) {
        for (j in 1..6) {
            println("$i $j")
            if (i==2)
                break@firstLoop  // it specifies that loop which has label firstLoop@ is break, not the that loop in which the condition is written
        }
    }

    firstLoop@ for (i in 1..3) {
        secondLoop@for (j in 1..3) {
            thirdLoop@for (k in 1..3) {
                if(k == 2) continue@thirdLoop
                if (j==2) continue@secondLoop
                if (i == 2) continue@firstLoop // it specifies that loop which has label firstLoop@ is continues, not the that loop in which the condition is written
                println("i = $i, j = $j, k = $k")
            }
        }
    }

    // with when
    Loop@for (i in 1..10) {
        when (i) {
            3 -> continue@Loop
            6 -> break@Loop
            else -> println(i)
        }
    }

    for (i in 1..10) {
        for (j in 1..10) {
            println("i = $i, j = $j")
            if (j == 3) return
        }
    }
}