import kotlin.reflect.typeOf // import always at top

class Box<T>(t: T) {
    var value = t  // A field of "some type"
        get() = field
        set(value) {
            field = value;
        }
    fun doSomething(t: T): T {
        return t
    }
}

class Three<T, U, V>(var first: T, var second: U, var third: V)

/*

T – Type;
S, U, V, etc. – 2nd, 3rd, 4th types;
E – Element (often used by different collections);
K – Key;
V – Value;
N – Number.
 */

// generic function -> i'm going to use this a lot
fun <T> doSomething(t: T): T {
    return t
}
fun <T,U> multipleDoSomething(t: T, u: U){
    println("$t $u")
}

// function extension in generic class
fun <T> Box<T>.printBox() {
    println(this.value)
}



// another of re-using of class is to use Any data type but it is considered as any at for every instance not as the type that of we create a object
class NonGenericClass(val value: Any) {
    fun get(): Any {
        return value
    }
}


//class Type Bounds
open class Book2 {}
class Magazine : Book2() {}
class Stone {}
class Storage<T : Book2>() { // this will take only the type inherited by book2 or book2 it-self or collection which use contain object book2 or
    // some code
}
// funtion Type Bounds
fun <T : Book> sortByDate(list: List<T>) {  }

// Multiple type bounds
interface Watchable<T>{}
// funtion type bound
fun <T> sortByDate2(list: List<T>)where T : Book2, T : Watchable<T> {}



// typealias -> nested and local type aliases are not supported
class ClassWithVeryLongName{}
typealias SomeClass = ClassWithVeryLongName

typealias Password = String
val myPassword: Password = "hyperskill"

typealias B<T> = Box<T> // with generics
typealias FileTable = MutableMap<Int, MutableList<String>>

// importing with alias
    //import ThirdClass as Kitten

fun main() {
    val obj1: Box<Int> = Box<Int>(123)
    val obj2: Box<String> = Box<String>("abc")

    println(typeOf<Box<Int>>())

    // class using any call
    val nonGenericInstance: NonGenericClass = NonGenericClass("abc")
//    val str: String = nonGenericInstance.get() // Compile-time error: Type mismatch so we can't do it as this
    val str1 : Any = nonGenericInstance.get() // we have use as this
    val str2 :String = nonGenericInstance.get() as String  // or this


    //type bound call
    val storage1 = Storage<Book2>()
    val storage2 = Storage<Magazine>()
//    val storage3 = Storage<Stone>() // error because

    // import alias

}


// working with files and exception handling is same as java