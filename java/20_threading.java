
// Multithreading allows to run two or more parts of a program concurrently for maximum CPU utilization

// Ways create thread
// by extending Thread class  -> Thread class internally usage the runnable interface
// by Runnable Interface

// State of thread
// New
// Runnable
// Blocked
// Waiting
// Timed Waiting
// Terminatedy


//When multiple threads are working on the same data, and the value of our data is changing, that scenario is not thread-safe and we will get inconsistent results
// Thread safety is done using keyword or modifiers like
// Synchronization = it only one thread at a time to complete the particular task. It means when multiple threads executing simultaneously, and want to access the same resource at the same time, then the problem of inconsistency will occur. so synchronization is used to resolve inconsistency problem by allowing only one thread at a time.
// Volatile = t ensures that the object can be used by multiple threads at the same time without having any problem.
// Atomic Variable = atomic variable ensures that threads don’t crash into each other.
class MyThread extends Thread{ // using Thread extending class
    int threadNo;
    MyThread(int num){
        super();
        this.threadNo = num;
    }
    @Override
    public void run() { // whatever we want to execute in thread is written in this method
        try{
            System.out.println(threadNo);
        }catch (Exception e){
            System.out.println("exception catch");
        }
    }
}

class MyThreadRunnable implements Runnable{
    int threadNo;
    MyThreadRunnable(int num){
        super();
        this.threadNo = num;
    }
    @Override
    public void run() {
        try{
            Thread.sleep(2000); // this method is stop the thread in waiting state for given time
            System.out.println("Runnable "+ threadNo);
        }catch (Exception e){
            System.out.println("Runnable exception catch");
        }
    }
}

class Threading {
    public static void main(String[] args) throws InterruptedException {
        Thread t = Thread.currentThread(); // this is to get the reference of current main thread;
        System.out.println(t.getId()); // id return thread id



        for (int i = 0; i< 10; i++){
            MyThread myThread = new MyThread(i);
            System.out.println(myThread.getState()); // return state of thread
            myThread.start(); // calling using thread class object and start method create separate call-stack for thread then run the override run() method that's why we are not call run() directly
            System.out.println(myThread.getState()); // return state of thread
            myThread.setPriority(1+i);
        }


        for (int i = 0; i< 10; i++){
            Thread thread = new Thread(new MyThreadRunnable(i));
            thread.join(); // thread method wait allow to wait for un-till current thread dead
            thread.start(); // calling using runnable interface
            System.out.println(thread.getPriority());
            thread.setPriority(1+i); // this set the priority of thread
            System.out.println(thread.getPriority());
        }
    }

    // there is lots of other function provided by Thread class
}


// Safety in Threading start from here
// synchronized
class Safe{
    synchronized void sum(int n) // synchronized
    {
        Thread t = Thread.currentThread();
        for (int i = 1; i <= 5; i++) {
            System.out.println(
                    t.getName() + " : " + (n + i));
        }
    }
}
class SafeThread extends Thread{
    Safe safe = new Safe();
    @Override
    public void run() {
        safe.sum(4);
    }

    public static void main(String[] args) {

    }
}
class CallingSafe{
    public static void main(String[] args) {
        SafeThread safeThread = new SafeThread();
        Thread t1 = new Thread(safeThread);
        Thread t2 = new Thread(safeThread);
        Thread t3 = new Thread(safeThread);
        t1.setName("Thread A");
        t2.setName("Thread B");
        t3.setName("Thread C");

        t1.start();
        t2.start();
        t3.start();
    }
}


class VolatileExample {
    static volatile int a = 0, b = 0;
    static void method_one()
    {
        a++;
        b++;
    }
    static void method_two()
    {
        System.out.println(
                "a=" + a + " b=" + b);
    }
    public static void main(String[] args)
    {
        Thread t1 = new Thread() {
            public void run()
            {
                for (int i = 0; i < 5; i++)
                    method_one();
            }
        };
        Thread t2 = new Thread() {
            public void run()
            {
                for (int i = 0; i < 5; i++)
                    method_two();
            }
        };
        t1.start();
        t2.start();
    }
}

// Some basic differences of using Thread class and runnable class

//        If we extend the Thread class, our class cannot extend any other class because Java doesn’t support multiple inheritance. But, if we implement the Runnable interface, our class can still extend other base classes.
//        We can achieve basic functionality of a thread by extending Thread class because it provides some inbuilt methods like yield(), interrupt() etc. that are not available in Runnable interface.
//        Using runnable will give you an object that can be shared amongst multiple threads.



//        Daemon thread in Java is a low-priority thread that runs in the background to perform tasks such as garbage collection
//        A thread pool reuses previously created threads to execute current tasks and offers a solution to the problem of thread cycle overhead and resource thrashing