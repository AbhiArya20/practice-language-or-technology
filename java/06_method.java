

// Method= Block of code which perform specific task it provides reusability, readablity of code and easy to modification. follows DRY principle
    // method type
        // predefined
        // user-defined

        // parameterized
        // non-parameterized

        // instance method  -> these require object of its class to invoke using obj.methodName syntax
        // static method    -> these methods does not need object to call it we can use that method in that class simply and in other class using className.method  and these methods can't override    //static is a keyword and non-access modifier used for memory management  // The users can apply static keywords with variables, methods, blocks, and nested classes

//static keyword

class Method {
    /*
    // method syntax
    // optional things  static , final
    modifier return-type method-name(parameters) exception-list{
        // method body
        // return
    }

    // method calling
     method-name(parameter);
     */



    public int diff(int a, int b){
        int dff = sum(b, a); // static method is allowed to class in non-static method
        System.out.println("sum" + dff);
        return a-b;
    }

    // static method
    public  static  int  sum (int a, int b){
//        diff(5, 3); // as you can't call non-static method inside of static method because non-static method need object to call because they are instance method

        int c = a+b;
        return c;
    }

    public static void main(String[] args) { // main is always static so that you don't need to create object before calling it
        int ans = sum(5,2);  // static method can be called in static method and inside of static method we can access static data too. and They cannot refer to this or super in any way.

                System.out.println(ans);
//        diff(4, 4) // as we can't call this method as this because this is not a static method and we need to create object of class then call though that object
        Method f_method = new Method();
        int diff = f_method.diff(6,3 );
        System.out.println(diff);
    }

    // more about the methods in OOPs
}


// there also abstract method that we learn in when we learn abstract class