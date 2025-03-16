
//Access Modifiers = it restrict the scope of a class, constructor, variable, method, data member
//    Default = when know access modifier is specified
//    Private
//    public
//    protected

/*
 scope   modifier ->    Public   Protected     Default    Private
Same-class                yes       yes           yes         yes
same-pkg                  yes       yes           yes          No
sub-class                 yes       yes           yes          No
diff-pkg                  yes       yes            No          No
diff-non-sub-class        yes        No            No          No


 */


class Base{
    private String pri = "private";
    protected String pro ="protective";
    public  String pub = "public";
    String def = "default";
    Base() {
        System.out.println(pri);
        System.out.println(pro);
        System.out.println(def);
        System.out.println(pub);
    }
    public void pubMethod(){
        System.out.println("publicMethod");
    }
    private void priMethod(){
        System.out.println("privateMethod");
    }
    void defMethod(){
        System.out.println("defaultMethod");
    }
    protected void proMethod(){
        System.out.println("protectedMethod");
    }
}

class Derived extends Base{
    Derived(){
//        System.out.println(pri); // pri is private hence not accessible in subClass
        System.out.println(pro);
        System.out.println(def);
        System.out.println(pub);
        proMethod();
//        priMethod();  // priMethod is private hence not accessible in subClass
        defMethod();
        pubMethod();
    }

}

class AccessModifiers {
    public static void main(String[] args) {
        Derived derived = new Derived();
        derived.pubMethod();
        derived.proMethod();
        derived.defMethod();
//        derived.priMethod(); // Private method
        Base base = new Base();
        base.proMethod();
        base.pubMethod();
        base.defMethod();
//        base.priMethod(); // Private method
    }
}

