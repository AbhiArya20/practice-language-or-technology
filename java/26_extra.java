
import java.util.stream.*;
import java.util.Arrays;
import java.util.List;

class Extra {
    // var-arg or variable arguments
    // There can be only one variable argument in a method.
    // Variable argument (Varargs) must be the last argument.
    // Vararg Methods can also be overloaded, but overloading may lead to ambiguity.
    static void varArg(int a, int... b) {
        int ans = a;
        for (int j : b) {
            ans += j;
        }
        System.out.println(ans);
    }

    public static void main(String[] args) {
        varArg(2, 1, 4, 2, 9, 4);

        // Streams
        List<Integer> arr = Arrays.asList(1, 2, 3, 4, 5, 6); // asList usages varArg
        arr.stream().map(x -> {
            System.out.println(x);
            return 0;
        });
        List<Integer> sq = arr.stream().map(x -> x * x).collect(Collectors.toList());
        System.out.println(sq);
        List<Integer> even = arr.stream().filter(x -> x % 2 == 0).collect(Collectors.toList());
        System.out.println(even);

        List result = arr.stream().sorted().toList();
        // method reference
        int evens = arr.stream().filter(x -> x % 2 == 0).reduce(0, Integer::sum); // Integer::sum these are known as the
                                                                                  // method reference, Syntax = Object
                                                                                  // :: methodName -> short-cut to
                                                                                  // return whatever get into reduce
                                                                                  // method
        arr.stream().map(x -> x * x).forEach(System.out::println); // System.out::println short-cut to print whatever
                                                                   // get into forEach method
        // Type of method reference and there lambda expression and method reference
        // syntax
        /*
         * Static Method Reference.
         * (args) -> Class.staticMethod(args) -> lambda expression syntax
         * Class::staticMethod -> method reference syntax
         * Instance Method Reference of a particular object.
         * (args) -> obj.instanceMethod(args)
         * obj::instanceMethod
         * Instance Method Reference of an arbitrary object of a particular type.
         * (obj, args) -> obj.instanceMethod(args)
         * ObjectType ObjectType::instanceMethod
         * Constructor Reference.
         * (args) -> new ClassName(args)
         * ClassName::new
         */
    }
}
