// similar to java except for Bit-wise operator
fun main(){
    val first = 2423
    val second = 423
    println(first.inv()) // complement
    println(first and second)
    println(first.and(second))

    println(first or second)
    println(first.or(second))

    println(first xor  second)
    println(first.xor(second))

    println(first shl  second)
    println(first.shl(second))

    println(first shr second)
    println(first.shr(second))

    val num = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1
    println(num) // it prints 0.9999999999999999
}