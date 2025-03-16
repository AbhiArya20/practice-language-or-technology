interface Animal {
    val numberOfLimbs: Int // we must have to override these methods
    fun move()
    fun communicate(): String
    val age: Int
        get() = 10
    fun printInterface(){ // this function cannot be override in the class in with this interface is implemented
        println("Interface")
    }
//    val h = 39 = properties initialization not allowed in iterface
}
interface Animal2{
    val numberOfLimbs: Int
    fun move()
    fun communicate(): String
}
class MyAnimalClass : Animal {
    override val numberOfLimbs: Int
        get() = TODO("Not yet implemented")

    override fun move() {
        TODO("Not yet implemented")
    }

    override fun communicate(): String {
        TODO("Not yet implemented")
    }
}



// interface inheritance
interface Bird : Animal, Animal2 {
    val canFly: Boolean
    val flyingSpeed: Int
    fun buildNest()
}


// conflict in interface and resolution
interface FirstInterface {
    fun f() { print("First") }
    fun g() { print("not g") }
}

interface SecondInterface {
    fun f() { print("Second") }
    fun g() { print("g") }
}
class ThirdClass : FirstInterface, SecondInterface {
    override fun f() {
        super<FirstInterface>.f() // conflict resolution
        super<SecondInterface>.f()
    }

    override fun g() {
        super<SecondInterface>.g()
    }
}
fun main() {
val  myAnimalClass = MyAnimalClass()

}


