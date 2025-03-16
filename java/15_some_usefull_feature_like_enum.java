
// enum = Enumerations serve the purpose of representing a group of named constants in a programming language, Enums are used when we know all possible values at compile time, declare using enum keyword
// enum internally implemented by class , Every enum constant represents an object of type enum.
// all the value in enum is public , static and final.
// We can declare the main() or any other method inside the enum
// enum can implement many interfaces
// enum cannot extend any class because a class can inherit only on class and enum internally extends  java.lang.Enum class
enum Color { // Enum

    RED,
    GREEN,
    BLUE;
    enum SubCol{
        LIGHT_RED,
        LIGHT_GREEN
    }
    // always after all enum
    Color(){
        System.out.println("Enum Constructor");
    }
    void meth(){
        System.out.println("Enum method");
    }

}

class UseFull {
    enum Color2 { // Enum in class allowed
        RED,
        GREEN,
        BLUE;
    }
    public static void main(String[] args) {
        Color c1 = Color.RED;
        System.out.println(c1);
        Color2 c2 = Color2.GREEN;
        System.out.println(c2);
        Color.SubCol c4 = Color.SubCol.LIGHT_GREEN;
        System.out.println(c4);
        c1.meth();
    }
}
