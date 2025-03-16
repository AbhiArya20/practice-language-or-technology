import java.util.function.IntBinaryOperator
// kotlin has know static keyword
// class declaration
// we cannot use primary and secondary constructor in same class without calling primary constructor or delegation
class H_oops (_width: Int = 1, _height: Int =1){// primary constructor with default parameter
    var width: Int = _width
    var height: Int = _height
    var lenght:Int = 0;
    var area: Int = width * height
    init{ // it used to initialize if logic complex topic with primary constructor
        println("init call")
        width = if (_width >= 0) _width else {
            println("Error, the width should be a non-negative value")
            0
        }
        height = if (_height >= 0) _height else {
            println("Error, the height should be a non-negative value")
            0
        }
    }


    constructor(width: Int, height: Int, _lenght:Int) : this(width, height) { // in delegation primary constructor call then secondary constructor is called
        this.lenght = _lenght
    }


    class InnerClassCanAccessToUsingOuterClassName{ // this is not bounded to this outer class it can be access by using outer-class name and this class cannot have access to the other members of the outer class

    }
    inner class ActualInnerClass{ // this cannot be access using outer-class-name you need to create object of the outer class and access using that objec,t and we have access to the member of the outer class

    }

}
class H_Oppps{
    val width:Int;
    val height:Int;
    constructor(_width: Int, _height: Int, _type: String) { // secondary constructor
        width = _width
        height = _height
    }
}
// getter and setter
class H_Oppps2{
    var name = "Abhishek"
        get() {
            println("Somebody wants to know $field name")
            return field
        }
        set(value) {
            println("The name is changing. Old value is $field. New value is $value.")
            field = value
        }
    var roll = 23
        get() {
            println("Somebody wants to know $field name")
            return field
        }
        set(value) {
            field = value
        }

    object he{ // this not in scoped in class but we can create as many object in a class

    }
    companion object Hello{ // scoped in class and we cannot create more than one companion object
        val d = 5
    }



}

// single line classes
class Size(val width: Int, val height: Int) // val key word is require in this class constructor parameter


// data class
data class Clients(val name:String, val Id:Int){ // val key word is require in this class constructor parameter
    val count = 0
}



// extension functions = you can add new function in existing class
class Client(val name: String, val age: Int)
fun Client.getInfo() = "$name $age"




// enum class
//enum inside enum etc concept of java is also applicable here
enum class Rainbow {
    RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET
}

// initialization
enum class Rainbow1(val color: String) {
    RED("Red"),
    ORANGE("Orange"),
    YELLOW("Yellow"),
    GREEN("Green"),
    BLUE("Blue"),
    INDIGO("Indigo"),
    VIOLET("Violet")
}
enum class Rainbow2(val color: String, val rgb: String) {
    RED("Red", "#FF0000"),
    ORANGE("Orange", "#FF7F00"),
    YELLOW("Yellow", "#FFFF00"),
    GREEN("Green", "#00FF00"),
    BLUE("Blue", "#0000FF"),
    INDIGO("Indigo", "#4B0082"),
    VIOLET("Violet", "#8B00FF");

    fun printFullInfo() {
        println("Color - $color, rgb - $rgb")
    }

    enum class InnerRainbow{ // inner
        SubRed,

    }

}

// Pair
val pairOne = Pair("Hi", "I am a Pair")
val pairTwo = "Hi" to "I am another Pair"

// Triple
val triple = Triple(1, "A", true)



// singleton class in java is same as object declaration in kotlin
object PlayingField { // constructor in not available its done internally
    var count = 0
    fun getAllPlayers(): Unit {
        println(count)
    }

    object  innerObject{ // nested object this can be used as simple nested class using the outer object name

    }
    /*
    // we can't use companion object inside an object
        companion object {

        }
     */

}


fun main() {
    // object

    val obj: H_oops = H_oops(5, 5)
    val obj1 = H_oops(3, 6)
    val obj2 = H_oops(3, 6, 6)

    val obj3 = H_Oppps(2, 5, "cube")

    val cl = Client("Abhishek", 23)
    println(cl.getInfo())


    println(Rainbow1.RED.color) // enum call
    println(Rainbow2.RED.rgb) // enum call
    val rgb = Rainbow2.RED
    rgb.printFullInfo()
//    enum class provide some useful variable and method


    // pair call
    println(pairOne.first)
    println(pairOne.second)
    println(pairTwo.component1())
    println(pairTwo.component2())

    // triple call -> we can use toString() and toList()
    println(triple.first)
    println(triple.second)
    println(triple.third)
    println(triple.component1())
    println(triple.component2())
    println(triple.component3())


    // Data class call
    val abhishek = Clients("Abhishek", 31)
    val (name, id) = abhishek // destructuring in data class in non-data class we have to implement "operator fun componentN()" method which return some value
    println(name)
    println(id)


    // lazy initialization
    val a: String by lazy {
        print("Variable a is initialized. ")
        "I love Hyperskill!"
    }
    println("Hello")
    println(a) // when this line execute the lambda function in lazy fuction is called and value a is initialized and print // // Variable a is initialized. I love Hyperskill!
    println(a) // if will print the only value initialize if above line // I love Hyperskill!

/*
// another way of lazy initialization
    lateinit var b: String
    fun initA(b: String) {
        this.b = b
    }
 */

// singleton class /  object call
    val pl = PlayingField
    pl.getAllPlayers()
    pl.count=6
    val pl2 = PlayingField
    pl2.getAllPlayers()


    // companion object
    val v = H_Oppps2()
    println(H_Oppps2.Hello.d)
    println(H_Oppps2.d)
}





