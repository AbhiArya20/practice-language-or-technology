import kotlinx.coroutines.*
import java.util.logging.Logger.global

val numlist = ArrayList<Int>()

fun main() {
    // threading
    Thread { printList(1) }.start()
    Thread { printList(2) }.start()
    Thread { printList(3) }.start()
    Thread { printList(4) }.start()

    // coroutine
    runBlocking{
        launch{printList1(1)}
        launch{printList1(2)}
        launch{printList1(3)}
        launch{printList1(4)}
    }

//    or

    // coroutine
    GlobalScope.launch {
        launch{printList1(1)}
        launch{printList1(2)}
        launch{printList1(3)}
        launch{printList1(4)}
    }
}



suspend fun  printList1 (it:Int) { // we can't call suspend function normally i should call in coroutines
    for (i in 0 until 100){
        withContext(Dispatchers.IO){
            println("${Thread.currentThread().id} $i $it")
        }
    }

}


val printList : (id:Int)-> Unit = {
    for (i in 0 until 10){
        println("${Thread.currentThread().id} $i $it")
    }
}