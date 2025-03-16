// Collections can be mutable or immutable.
// Immutable collections cannot be changed and not allow to do changes in the elements,
// Mutable allow operations that change the content of a collection by adding, removing, or updating the stored items.
// Types of collections: list, set, and map. All three exist in mutable and immutable variations
    //List stores elements in a specified order and provides indexed access to them.
    //Set stores unique elements and un-order
    //Map stores key-value pairs (entries); keys are unique, but different keys can be paired with equal values. and un-ordered


// MutableList = contains data of same type
fun main(){
//     declaration of mutable List
    val numbers = mutableListOf<Int>(1, 2,4, 5, 6) // if you know the type using <> specify the type
    val numbers2 = mutableListOf("Abhi", "Arya") // if you don't know the type you have to initialise
    val numbers3 = mutableListOf<Int>()
//    val numbers4 = mutableListOf<>(); // you can't declare without type or initialization
    val anyType = mutableListOf<Any>() // you can use Any type if you need to declare without initialization and you don't know the which type you are going to store in your list

    val list = MutableList(4, {4}) // declare specific size and with initial value using lambada function
    val list2 = MutableList(5){0} // declare specific size and with initial value

    // Initialization by Input
    val listByReading = MutableList(2,{ readln().toInt() })
    val listByReading2 = readln().split(" ").toMutableList()
    val listOfListByReading2 = MutableList(2,{ readln().split(" ").map{ it.toInt()}}) // list of size 2 of list input
    for (i in 0 until 3) {
        listByReading2.add(readln())
    }

//    println("$numbers $numbers2 $numbers3 $anyType $list $list2 $listByReading $listByReading2")

    println("$listByReading $listByReading2 $listOfListByReading2")


     // accessing element
    for(i in numbers.indices)
        println(numbers[i]) // accessing using indexing

    numbers[3]=9 // changing list
    println(numbers)
    println(numbers.size) // size of mutable

    // methods
    println(numbers.first())
    println(numbers.last())
    println(numbers.lastIndex)
    numbers.sort()
    println(numbers)
    // there is lots of methods some of are similar to the java


    // output
    println(numbers.joinToString("->"))
    println(numbers+list)



    // multidimensional
    val mutList2D = mutableListOf(
        mutableListOf<Int>(0, 0, 0, 0),
        mutableListOf<Int>(0, 0, 0, 0),
        mutableListOf<Int>(0, 0, 0, 0)
    )







    // Arrays = arrays are exactly similar to the mutableList the only difference is we cannot change the structure of arrays we cannot addd new element and remove any element but we can manipulate their element
    val stringArr = arrayOf("Abhishek", "Arrya")
    val numberArr = arrayOf(1, 2, 3, 5)
    println("${stringArr.joinToString()} ${numberArr.joinToString()}")
    numberArr[1] = 5
    println("${stringArr.joinToString()} ${numberArr.joinToString()}")


    // we also use this syntax for every create every individual type like intArrayOf creates IntArray;
    //charArrayOf creates CharArray;
    //doubleArrayOf creates DoubleArray;
    //and so on.
    val arr = intArrayOf(1, 3, 5, 6)



    // similarly in the case of the List,MutableList,Set,MutableList

    // Pair
    val p = Pair(2, 3)
    println("${p.first} ${p.second}")
    val (first, second) = p
    // Map and MutableMap
    val students = mapOf(
        "Zhenya" to 5,
        "Vlad" to 4,
        "Nina" to 5
    )
    println(students)
    println(students.get("a")) // 1
    println(students["b"])
    println("Nina's grade is: ${students["Nina"]}")
    val staff = mapOf<String, Int>("John" to 1000)
    for (student in students)
        println("${student.key} ${student.value}")
    for ((k, v) in students)
        println("$k $v")



    // iterator
    val set = setOf("cat", "dog", "crocodile", "snake")
    val iterator = set.iterator()

    while (iterator.hasNext()) {
        print(iterator.next() + " ")// cat dog crocodile snake
    }

    val map = mapOf("John" to "chocolate", "Mary" to "sweets", "Sara" to "marmelade")
    val iterator1 = map.iterator()

    iterator1.forEach { (key, value) ->
        println("$key likes $value")
    }


    // i we can also use every feature of java collection
}

