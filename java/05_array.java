


import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;


// Array = Collection of similar type of element which has contiguous memory location


class LearnArray {
    public static class Student{
        String name;
        int roll;
        String cla;
        int mark;
        Student(String name, String cla, int roll , int mark){
            this.name = name;
            this.cla = cla;
            this.roll = roll;
            this.mark = mark;
        }
        void printAll(){
            System.out.println(name + " "+ cla +" "+roll +" "+ mark);
        }
    }


    public static void main(String[] args) {
        int [] myArr; // declaration
        myArr = new int[5]; // initialisation

        int [] myArr2 = new int[5]; // declaration and initialisation
        int myArr3 [] = new int[5];


        int [] arr = {1, 2,3,4,5 };// declaration and initialisation with value
        int [] arr2 = new int[] {1,3,4,6,7}; // Literal

        // We can create array of any Class also
        Student[] students = new Student[5];
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i<5; i++){
            String name = sc.next();
            String cla  = sc.next();
            int roll = sc.nextInt();
            int mark = sc.nextInt();
            students[i] = new Student(name, cla, roll, mark);
            students[i].printAll();
        }


        int [][] multi = new int[2][5]; // 2-d array




        System.out.println(arr.length);// return length of array
        arr.equals(arr2); // return true/false;

        // Array class
        Array.get(arr, 2); // return value at index;
        Arrays.sort(arr); // sort the original array
        int a = Arrays.binarySearch(arr,4); // return the index of value in array if found else return negative arr.length
        int v = Arrays.binarySearch(arr,1, 5,7); // return the index of value in array if found in range else if found out of the range then return negative of that index else return return negative arr.length
        System.out.println(v);
        String st = Arrays.toString(arr); // return array as string;
        Arrays.fill(arr, 5); // fill the whole array with given value


        // Many more arrays method

    }
}
