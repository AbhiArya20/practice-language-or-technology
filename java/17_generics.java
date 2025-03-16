
// Genetics is used to create class that work with different data type
// <> symbol is used to specify data type
// increase code re-usability and follow dry principle
// Generics make errors to appear compile time than at run time


// Type of parameter in generic
//        T – Type
//        E – Element
//        K – Key
//        N – Number
//        V – Value
import java.util.Arrays;

class Sum<T>{ // T refresh to data type that we pass while object creation
    private T data;
    Sum(T data){
        this.data=data;
    }
    T getData(){
        return data;
    }
}
 class Generics {
    public static void main(String[] args) {
        Sum s = new Sum(5);
        Sum s1 = new Sum("Hello");
        Sum s2 = new Sum(new int[]{1,3,5});
        System.out.println(s.getData());
        System.out.println(s1.getData());
        System.out.println(Arrays.toString((int[])s2.getData()));
    }
}