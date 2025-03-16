// String behavior and methods is similar to java
// some differences that will listed below
fun main(){
    // Raw String
    val valueRaw = """
            this is raw
                string which is not in java
    i see this feature in python and JS
    """.trimIndent() // .trimIndent() trim the indent(space before left-most align line) from the every line
    println(valueRaw)

    val valueString = "Abhishek kumar"
    println(valueString[2])// to access the character at index
    for( i in valueString.indices){
        println(valueString[i])
    }

}