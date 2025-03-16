

// A comparator interface is used to order the objects of user-defined classes. A comparator object is capable of comparing two objects of the same class.
// Important for create custom sorting


import java.util.*;

class Com implements Comparator<ArrayList<Integer>>{
    Com(){
        super();
    }
    @Override
    public int compare(ArrayList<Integer> o1, ArrayList<Integer> o2) {
        return o1.get(1)-o2.get(1); // if return -ve or 0 it's ok if it returns +ve means this need to swap with its correct position
        // we can write more logic complex logic here

    }
}
class ComparatorInterface {
    public static void main(String[] args) {
        List<ArrayList<Integer>> arr = new ArrayList<>();
        Random random = new Random();

        for(int i = 0; i<20; i++){
            ArrayList temp = new ArrayList<>();
            temp.add(random.nextInt(100));
            temp.add(random.nextInt(100));
//            System.out.println(temp.get(0) + " "+ temp.get(1));
            arr.add(temp);
        }
        Collections.sort(arr, new Com()); // new Com() is known as anonymous object this is very helpful if we don't need to store any object in memory management

        for(ArrayList<Integer> ar : arr)
            System.out.println(ar.toString());

    }
}


// later we will learn about Collections and ArrayList and generic