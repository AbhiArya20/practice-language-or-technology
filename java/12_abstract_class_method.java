

//  abstract = abstract is a keyword and non-access modifier which is applicable for class and method only not on variable
//  abstract method(pure virtual method) = method without method body, only method signature, declared using abstract keyword this method must override in sub_class else declare sub_class as abstract class
//  any class which contains one or more abstract method must be declared as abstract class
//  abstract classes may not contain any abstract method
//  cannot create instance of abstract class
//  construct is allowed in abstract class
//  No final abstract method
//  but there can be final method
//  we can define static method in abstract class
//  we can't define static abstract method because static method can't override
//  nested abstract class allowed
//  abstract class contain normal method to
//  we can't make any abstract method private

/*
    Not Allowed because you need to change the
    final abstract class Abstract_Without_Abstact_method{
        // body
    }


 */

abstract class AbstractWithoutAbstractMethod{
    // body
}

abstract  class  Abstract_Class{
    Abstract_Class(){
    }

    abstract void fun(); // abstract method
    void fun2(){ // normal method
        System.out.println("hello brother");
    }

//    final abstract void abs(); // not allowed because final method can't override but here it needs to override when we inherit, we can't create instance of abstract class
}
class Derived_ABS_Class extends Abstract_Class {
    Derived_ABS_Class(){
        super();
    }
    @Override
    void fun() { // overriding
        System.out.println("override");
    }

}
class K_abstract_class_method {

    public static void main(String[] args) {
//        Abstract_Class abstract_class = new Abstract_Class(); // can't create object
        Derived_ABS_Class derived_abs_class = new Derived_ABS_Class();
        derived_abs_class.fun();
        derived_abs_class.fun2();
    }

}
