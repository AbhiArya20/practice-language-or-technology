import kotlin.math.roundToInt

// simple class can't be inherit by another class
    class Book(val pages: Int, val author: String)

// open single class can be inherit by another class
    // inheritance
    open class Book1(val pages: Int , val author:String, val cost:Float)
    class Comics(pages: Int, author: String, cost: Float) : Book1(pages, author, cost) // constuctor call if primary constructor

//with secondary constructor
open class Base(val beta: Int, val gamma: Int, var message: String = "") {
    constructor(beta: Int, message: String = "") : this(beta, 0, message)
}
class Derived(val alpha: Int, beta: Int, gamma: Int, message: String = "") : Base(beta, gamma, message) {
    constructor(alpha: Int, beta: Int, message: String = "") : this(alpha, beta, 0, message)
}class Derived2: Base {
    constructor(alpha: Int, beta: Int, message: String = "") : super(alpha, beta) // using super key
}


// Overriding
open class Transport(val cost: Int) {
    open fun getFullInfo(): String { // only open method/function can be Override
        return "$$cost cost"
    }

    fun getTax(): String {
        return "$${(cost * 0.25).roundToInt()} tax"
    }
}
open class Ship(cost: Int, val color: String) : Transport(cost) {
    override fun getFullInfo(): String {
        return super.getFullInfo() + ", $color color"
    }
}




// delegate
interface MyInterface {
    fun print()
    val msg: String
}

class MyImplementation : MyInterface {
    override fun print() {
        println(msg)
    }
    override val msg: String = "MyImplementation sends regards!"
}
class MyNewClass(base: MyInterface) : MyInterface by base {
    override val msg = "Delegate sends regards."
}
fun main() {
    val a = MyImplementation()
    val delegate = MyNewClass(a)
    println(delegate.msg)
    delegate.print()
}

// composition using delegation
interface Level {
    fun getLevel(): Int
}

interface Enemy {
    fun isEnemy(): Boolean
}

interface Class {
    fun getClass(): String
}
object Dangerous : Level { override fun getLevel(): Int { return 10 } } // object implementing interface

object NotDangerous : Level { override fun getLevel(): Int { return 1 } }

object Foe : Enemy { override fun isEnemy(): Boolean { return true } }

object Friend : Enemy { override fun isEnemy(): Boolean { return false } }

object Warrior : Class { override fun getClass(): String { return "Warrior"}}

object Wizard : Class { override fun getClass(): String { return "Wizard"}}

class DangerousKotlinEnemyWarrior : Level by Dangerous, Enemy by Foe, Class by Warrior

class NotDangerousFriendlyWizard : Level by NotDangerous, Enemy by Friend, Class by Wizard






/*
// Order of the constructor executions execution

In case a class has a primary constructor, some init blocks, and some secondary constructors, then the order of execution is the following:

The primary constructor, even if a secondary one is called. The primary one is called first through the keyword this;
All init blocks, sequentially in the order they appear;
The second constructor block, in case this constructor was called.
In case of inheritance, the base class is initiated first: either by calling its primary or a secondary constructor, through the derived class. So, the sequence order is the following:

Base class primary constructor, even if a base class secondary constructor is called through the derived class;
Base class init blocks, sequentially in the order they appear;
Base class secondary constructor block, in case this constructor was called;
Derived class primary constructor, even if a derived class secondary constructor is called;
Derived class init blocks, sequentially in the order they appear;
Derived class secondary constructor block, in case this constructor was called.

 */