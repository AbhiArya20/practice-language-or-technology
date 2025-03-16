
// Collection framework provide useful data structure and algorithm
// Collection hierarchy is in next file it is very important to understand hierarchy so check-out that first that consist of classes and interfaces and their associativity
// Collection Interface inherits iterable interface so lets know about iterable interface

import java.lang.reflect.Array;
import java.util.*;

// an object such as string,List,ArrayList etc. are known as iterable objects are implementing Iterable interface allows it to be iterate over that object. ex - for-each loop
    // let suppose we want to use for-each loop on user-defined dataStructure we have to implement iterable on myOwn data structure
    // code to create own dataStructure(Linked List) and iterator for data

// it quite difficult to understand this code you should dry run again and again and also check out concept of associativity that is mention in OOPs_start file
class Node<T> { //Node class of generic type
    T data; // data in linked list
    Node<T> next; // next pointer in linked list
    Node(T data){ // constructor
        this.data = data;
        this.next = null;
    }
    public void setNext(Node<T> next) { // method to set next of current node
        this.next = next;
    }
    public T getData(){ // method which return data of current node
        return data;
    }
    public Node<T> getNext(){ // method which return next of current node
        return next;
    }
}
class MyDataStructure<T> implements Iterable<T>{ // Iterable implementation
    @Override
    public Iterator iterator() { // any class which implement Iterable must have to override iterator method which return an object of iterator class with parameter of reference of this/self/current-object
        return new MyIterator<T>(this); // return iterator object
    }
    int length = 0; // variable which store the length of linked list
    private Node<T> head;
    private Node<T> tail;
    public void add(T data){ // method to add new node in linked list
        Node<T> temp = new Node<>(data);
        length++;
        if(head==null){
            head = tail = temp;
            return;
        }
        tail.setNext(temp); // setting next node of tail
        tail = temp; // pointing temp because temp is set to next of tail so temp is last node now
    }
    public Node<T> getHead(){
        return head; // just return head of the Linked list
    }
    public void remove() {
        System.out.println("Delete method not implemented");;
    }
}
class MyIterator<T> implements Iterator<T>{ // iterator class which must implement Iterator interface
    // this class has two main method next and hasNext;

    Node<T> cur;
    MyIterator(MyDataStructure<T> md){ // Iterator constructor
        cur = md.getHead(); // assigning cur by reference passed by iterable class
    }
    @Override
    public boolean hasNext() { // return boolean is next element is available or not
        return cur!=null;
    }

    @Override
    public T next() { // return the next element is asked for
        T data = cur.getData(); // get data or the current node
        cur = cur.getNext();  // assigning cur to next of current node
        return data; // return data
    }

}
class IterableDemoMain{
    public static void main(String[] args) {
        MyDataStructure<Integer> myDataStructure = new MyDataStructure();
        for(int i = 0; i< 10; i++) {
            myDataStructure.add(i); // adding data linkedList/myDataStructure
        }

        for(int data : myDataStructure){ // loop over linkedList/myDataStructure
            System.out.println(data);
        }
        System.out.println(myDataStructure.length); // length of your data structure
    }
}

// now we are going to start with collection framework, I am not going to show internal working you should read concept going to respective file, I will mention the which concept used when needed
// I will also mention working of collection/Data_structure and time complexity and useful methods
// I hope you are aware of different data structures

//remember form here we are using word collection for dataStructure like ArrayList, queue etc. and object for the single element of a collection

// Collection Interface has lots of abstract methods that is inherited further by other Interface,
    // Some commonly used methods are
    /*
    note = here we used parameter word "object" means any data type value like either primitive or user-user-defined or object of any class   and   the word (collection) means the collection of the objects of same type
        1-> collectionObj.add(object) ->This method is used to add an object to the collection.
        2-> collectionObj.addAll(collection)
        3-> collectionObj.clear() ->Remove all object from collection
        4-> collectionObj.contain(object) -> return boolean is object is present in collection or not
        5-> collectionObj.containAll(collection)
        6-> collectionObj.equals(object) -> return boolean is object is equal with each other
        7-> collectionObj.isEmpty() -> return boolean "true" if no element in collection else false if one or more element present in collection
        8-> collectionObj.max() -> return maximum value element
        9-> collectionObj.remove(object) -> remove some particular element from collection
       10-> collectionObj.removeAll(collection)
       11-> collectionObj.size() -> return current size/number-of-element in collection
       12-> collectionObj.toArray() -> return an array containing all element of the collection
       13-> collectionObj.iterator() -> return an Iterator object though which we can iterate upon that collection
        All these methods are available in every collection in collection framework
        collectionObj and object should compatible to each other in each above method
     */
// Interface Like List,Queue,Deque,Set inherits Collection Interface directly or indirectly
class LearnCollections {
    public static void main(String[] args) {
        // before going to the subInterface(List,Queue,Set) of the Collection Interface lets learn about the Collections class.
        // Collections class is a utility class which provide lots of the static methods to which do some useFul work on collections
        // All the methods of this class throw the NullPointerException if the collection or object passed to the methods is null
        // Some important methods are
            ArrayList<Integer> arr = new ArrayList<>();
            arr.add(5);
            arr.add(2);
            Collections.addAll(arr, 1, 4, 93, 2); // it takes first argument of collection and all elements starting from 2nd argument to end arguments and arguments should compatible
            Collections.sort(arr); // take list and sort that list;
            Collections.sort(arr, Collections.reverseOrder()); // sort list in reverse order;
            Collections.sort(arr, (Integer a, Integer b)->{ // we can also pass our own comparator this will sort even first then odd
                if(a%2==0){
                    return -1;
                }
                return 1;
            });
            ArrayList<Integer> secArr = new ArrayList<>();
            Collections.addAll(secArr, 1,3,5,9, 3, 6, 1);
            Collections.copy(secArr,arr); // copy the value of second collection to first collection and size of second collection must be equal or larger than to first
            Collections.fill(arr, 1); // collection with the given value
            System.out.println(secArr);

// we can't create collection with primitive
            // Classes Implementing List Interface
                // linear and ordered collection of objects, duplicate allowed
                /*
                    1-> ArrayList
                    2-> LinkedList
                    3-> Vector
                    4-> Stack

                    All methods of Collection Interface is reachable to here due to inherit and extra methods in List Interface is added some of important methods are listed below
                        add(int index, object)
                        addAll(index,collection)
                        remove(int index)
                        get(int index)
                        set(int index, object) -> change value which new one at given index
                        indexOf(object)
                        lastIndexOf(object)
                        sort(Comparator)
                 */
        // ArrayList
            // Dynamic Array

        ArrayList<Integer> arrayList = new ArrayList<>(5);
        for(int i = 0; i<10 ;i++){
            arrayList.add(i);
        }
        arrayList.add(3,5);
        arrayList.remove(5);
        arr.remove(3);
        // try-out other method mentioned above
        // other ways to create objects/ constructor
        List <Integer> list =new ArrayList<>(); // By method dispatching
        ArrayList<Integer> ArrayAddingCollection = new ArrayList<>(arrayList); //create new arraylist collection with copy of passed collection always think about compatibility
        ArrayList<Integer> ArrayInitialCapacity = new ArrayList<>(4);



        // LinkedList
        LinkedList<Integer> linkedList = new LinkedList<>();
        // all above method and some additional methods
        linkedList.addFirst(3);
        linkedList.addLast(3);
        System.out.println(linkedList.getFirst());
        System.out.println(linkedList.getLast());
//        System.out.println(linkedList.offerFirst(4));  // -> insert first and return boolean value is inserted or not
//        System.out.println(linkedList.offerFirst(3));
//        System.out.println(linkedList.peek()); // -> return first element
//        System.out.println(linkedList.peekFirst());
//        System.out.println(linkedList.peekLast());
//        System.out.println(linkedList.poll()); // -> return value first element and remove that
//        System.out.println(linkedList.pollFirst());
//        System.out.println(linkedList.pollLast());
//        System.out.println(linkedList.pop()); // -> remove first element and return that
//        linkedList.push(23423);// -> add first
        System.out.println(linkedList.removeFirst()); // remove first and return that
        System.out.println(linkedList.removeLast());
        System.out.println(linkedList);

        List <Integer> linkedListDispatch = new LinkedList<>();// By method dispatching
        LinkedList<Integer> linkedListCollection = new LinkedList<>(linkedList);




        // vector similar to arraylist but it can row or shrink as required
        List <Integer> vectorList = new Vector<>();// By method dispatching
        Vector<Integer> vector = new Vector<>();




        //stack it extends vector class so most of the methods are similar to ArrayList and Vector method.
        Stack<Integer> stack = new Stack<>();
        // additional method in Stack class
        stack.push(323);
        stack.add(24);
        stack.add(3);
        stack.add(43);
        System.out.println(stack.empty());
        System.out.println(stack.peek());
        System.out.println(stack.pop());
        System.out.println(stack.search(33)); // return the index of the value from top of the stack if stack contain passed object else return -1
        System.out.println(stack.contains(33));
        List <Integer> stackList = new Stack<>();// By method dispatching





//  Classes implementing Queue Interface
        // We know queue is FIFO Data structure
        /*
        Note = ArrayDeque also implement Deque Interface which extends Queue Interface so indirectly ArrayDeque implements Queue Interface
            1-> PriorityQueue
            2-> ArrayDeque

            All methods of Collection Interface is reachable to here due to inherit and extra methods in Queue Interface is added some of important methods are listed below
                        remove() -> remove first element=
                        offer(object)
                        poll()
                        element() -> to get first element
                        peek()
            */

        // PriorityQueue == Heap
        // PriorityQueue is min heap in java you can use Comparator to use as you need
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
        priorityQueue.add(121);
        priorityQueue.add(32);
        System.out.println(priorityQueue.peek());

        // other way to instantiate the PriorityQueue object
        PriorityQueue<Integer> priorityQueueInitialCap = new PriorityQueue<>(4);
        PriorityQueue<Integer> priorityQueueCollection = new PriorityQueue<>(priorityQueue);
        PriorityQueue<Integer> priorityQueueComparator = new PriorityQueue<>( (Integer a, Integer b)->b-a);
        PriorityQueue<Integer> priorityQueueInitialAndComparator = new PriorityQueue<>(4, (Integer a, Integer b)->b-a); // max heap
        Queue<Integer> priorityQueueDispatch = new PriorityQueue<>(); // method dispatching



        // ArrayDeque = Double Ended Queue  (we can achieve this functionality using LinkedList also)
        ArrayDeque<Integer> arrayDeque = new ArrayDeque<>();
        // All the method used in LinkedList can be used here

        arrayDeque.addFirst(3);
        arrayDeque.addLast(3);
        System.out.println(arrayDeque.getFirst());
        System.out.println(arrayDeque.getLast());
//        System.out.println(arrayDeque.offerFirst(4));  // -> insert first and return boolean value is inserted or not
//        System.out.println(arrayDeque.offerFirst(3));
//        System.out.println(arrayDeque.peek()); // -> return first element
//        System.out.println(arrayDeque.peekFirst());
//        System.out.println(arrayDeque.peekLast());
//        System.out.println(arrayDeque.poll()); // -> return value first element and remove that
//        System.out.println(arrayDeque.pollFirst());
//        System.out.println(arrayDeque.pollLast());
//        System.out.println(arrayDeque.pop()); // -> remove first element and return that
//        linkedList.push(23423);// -> add first
        System.out.println(arrayDeque.removeFirst()); // remove first and return that
        System.out.println(arrayDeque.removeLast());
        System.out.println(arrayDeque);

        ArrayDeque<Integer> arrayDequeCollection = new ArrayDeque<>(arrayDeque);
        ArrayDeque<Integer> arrayDequeCapacity = new ArrayDeque<>(5); // capacity
        Queue<Integer> arrayDequeDispatch = new ArrayDeque<>(); // method dispatch
        Deque<Integer> arrayDequeDispatch1 = new ArrayDeque<>(); // method dispatch



// Classes implementing Set Interface
        //  unordered , No duplicates
        /*
            1-> HashSet = unsorted_set
            2-> LinkedHashSet
            3-> TreeSet = sorted_set
         */

        HashSet<Integer> hashSet = new HashSet<>();
        Random random = new Random();
        for(int i = 0; i<12; i++){
            hashSet.add(random.nextInt(100));
        }
        System.out.println(hashSet);
        TreeSet<Integer> treeSet = new TreeSet<>(hashSet);
        System.out.println(treeSet);
    // different ways of instance creation is same as above in others





// Map Interface is an individual Interface and not implement any interface like Collection Interface
// Classes implementing Map Interface
        // store key-value pair, No duplicate keys allowed
        /*
            1-> HashMap = hashing
            2-> HashTable
            3-> TreeMap = sorted by keys
            4-> LinkedListMap

       // Methods in Map Interface
            clear()
            containsKey(Object)
            containsValue(Object)
            entrySet()
            equals(Object)
            get(Object)
            hashCode()
            isEmpty()
            keySet()
            put(Object, Object)
            putAll(Map)
            remove(Object)
            size()
            values()
            getOrDefault(Object key, V defaultValue)
            putIfAbsent(K key, V value)
         */
        HashMap<Integer, String> hashMap = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i<20; i++){
            String name = sc.nextLine();
            hashMap.put(random.nextInt(100), name);
        }
        System.out.println(hashMap);

        TreeMap<Integer, String> treeMap= new TreeMap<>(hashMap);
        System.out.println(treeMap);


        // different ways of instance creation is same as above
    }

}

// there is lots classes and interfaces used internally to achieve these classes but we don't need to know about them