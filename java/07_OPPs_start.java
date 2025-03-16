
import java.util.ArrayList;
import java.util.List;

//Class = blueprint, prototype, logical entity, group of object which have same properties
//Object = instance of class, real world entity , logical or physical entity , it has some state, behavior, identity
// 4 Piller of Opps
//        Abstraction = It is property by virtue of which only essential details are displayed to user
//        Encapsulation = Wrapping up of data under a single unit  protective shield that prevents the data from being accessed by the code outside this shield, data-hiding interchangeably used at encapsulation
//        Inheritance = It is the mechanism in java by which one class is allowed to inherit the features of another class. It provides reusability and follows DRY principle
// Single Inheritance
// Multilevel Inheritance
// Hierarchical Inheritance
//note ** Multiple Inheritance not allowed in java because of the of change of ambiguity due to two member in different class has same name
// because of the  Multiple Inheritance not allowed hybrid inheritance is also not possible
//        Polymorphism = Ability to differentiate between entities of same name with help of signature and declaration of these entities
//Method overloading = method with same name but different signature ,at compile-time 
//Method overriding = when a method is inherited from another class is change and change is body,  it decided at run-time
// Some important topic
// Coupling = Coupling refers to the knowledge or information or dependency of another class, classes are aware of each other
// Tight Coupling = Tight coupling means the two classes often change together, More interdependency between class, More coordination , More information flow
// Loose Coupling = loose coupling means they are mostly independent. If the only knowledge that class A has about class B, is what class B has exposed through its interface, Less interdependency between class, Less coordination , Less information flow
// Cohesion = Cohesion refers to the level of a component which performs a single well-defined task. A single well-defined task is done by a highly cohesive method. The weakly cohesive method will split the task into separate parts. The java.io package is a highly cohesive package because it has I/O related classes and interface. However, the java.util package is a weakly cohesive package because it has unrelated classes and interfaces.
// Association = Association is a relation between two separate classes which establishes through their Objects. Association can be one-to-one, one-to-many, many-to-one, many-to-many.
// Aggregation = one-way relationship  For example, a department can have students but vice versa is not possible and thus unidirectional in nature,  both the entries can survive individually which means ending one entity will not affect the other entity.
// Composition = It represents part-of relationship , In composition, both entities are dependent on each other, the composed object cannot exist without the other entity
// class
class Opps {

    Opps() { // method with same name as className which invoked automatically when new
             // instance/object is created, it does not have any return type and does not
             // return anything , not in abstract, final, static, or Synchronized class, but
             // access modifier can be used
        System.out.println("defaut constructor");
    }

    Opps(int a) { // parameterized constructor/ constructor overloading
        this(); // to call the another constructor of same class, it could be parameterized
        System.out.println("parameterized constructor");
    }
    // A default constructor is invoked if no any constructor with empty-body is
    // specified

    public static void main(String[] args) {
        Opps g_opPs_start = new Opps(); // creating a new object
        // new key word allocate memory to the object and used to initialize object of a
        // class
    }

    // copy constructor = constructor with parameter of object of same class is
    // known as copy constructor
    Opps(Opps obj) {
        System.out.println("copy constructor");
    }
}
// when creating a class it automatically inherits from the Object Class

// Tight Coupling
class TightCoupling {

    static class Topic { // nested class = class within another class ,The scope of a nested class is
                         // bounded by the scope of its enclosing class. A nested class has access to the
                         // members, including private members, of the class in which it is nested. The
                         // reverse is also true i.e., the enclosing class can access the members of the
                         // nested class.
        public void understand() {
            System.out.println("Tight coupling concept");
        }
    }

    class Subject {
        Topic t = new Topic();

        public void startReading() {
            t.understand();
        }
    }

}

// Loose coupling

class LoosCoupling {
    public interface Topic // Interface
    {
        void understand();
    }

    static class Topic1 implements Topic {
        public void understand() {
            System.out.println("Got it");
        }
    }

    class Topic2 implements Topic {
        public void understand() {
            System.out.println("understand");
        }
    }

    public class Subject {
        public void main(String[] args) {
            Topic t = new Topic1();
            t.understand();
        }
    }

}

// Association
class Association {
    static class Bank { // we can only make static to nested class not to the top-level class
        private String name;

        Bank(String name) {
            this.name = name; // this is key which refers to current object
        }

        public String getBankName() {
            // Returning name of bank
            return this.name;
        }
    }

    static class Employee {
        private String name;

        Employee(String name) {
            this.name = name;
        }

        public String getEmployeeName() {
            return this.name;
        }
    }

    public static void main(String[] args) {
        Bank bank = new Bank("ICICI");
        Employee emp = new Employee("Ridhi");
        System.out.println(emp.getEmployeeName()
                + " is employee of "
                + bank.getBankName());
    }

}

// Aggregation
class Aggregation {

    static class Student {
        String name;
        int id;
        String dept;

        Student(String name, int id, String dept) {
            this.name = name;
            this.id = id;
            this.dept = dept;
        }
    }

    static class Department {
        String name;
        private List<Student> students;

        Department(String name, List<Student> students) {
            this.name = name;
            this.students = students;
        }

        public List<Student> getStudents() {
            return students;
        }
    }

    static class Institute {
        String instituteName;
        private List<Department> departments;

        Institute(String instituteName, List<Department> departments) {
            this.instituteName = instituteName;
            this.departments = departments;
        }

        public int getTotalStudentsInInstitute() {
            int noOfStudents = 0;
            List<Student> students;
            for (Department dept : departments) {
                students = dept.getStudents();
                for (Student s : students) {
                    noOfStudents++;
                }
            }
            return noOfStudents;
        }
    }

    public static void main(String[] args) {
        // Creating object of Student class inside main()
        Student s1 = new Student("Mia", 1, "CSE");
        Student s2 = new Student("Priya", 2, "CSE");
        Student s3 = new Student("John", 1, "EE");
        Student s4 = new Student("Rahul", 2, "EE");

        // Creating a List of CSE Students
        List<Student> cse_students = new ArrayList<Student>();

        // Adding CSE students
        cse_students.add(s1);
        cse_students.add(s2);

        // Creating a List of EE Students
        List<Student> ee_students = new ArrayList<Student>();

        // Adding EE students
        ee_students.add(s3);
        ee_students.add(s4);
        Department CSE = new Department("CSE", cse_students);
        Department EE = new Department("EE", ee_students);
        List<Department> departments = new ArrayList<Department>();
        departments.add(CSE);
        departments.add(EE);
        Institute institute = new Institute("BITS", departments);
        System.out.print("Total students in institute: ");
        System.out.print(institute.getTotalStudentsInInstitute());
    }

}

// Composition
class Composition {
    static class Book {
        public String title;
        public String author;

        Book(String title, String author) {
            this.title = title;
            this.author = author;
        }
    }

    static class Library {
        private final List<Book> books;

        Library(List<Book> books) {
            this.books = books;
        }

        public List<Book> getTotalBooksInLibrary() {
            return books;
        }
    }

    public static void main(String[] args) {
        Book b1 = new Book("EffectiveJ Java", "Joshua Bloch");
        Book b2 = new Book("Thinking in Java", "Bruce Eckel");
        Book b3 = new Book("Java: The Complete Reference",
                "Herbert Schildt");
        List<Book> books = new ArrayList<Book>();
        books.add(b1);
        books.add(b2);
        books.add(b3);
        Library library = new Library(books);
        List<Book> bks = library.getTotalBooksInLibrary();
        for (Book bk : bks) {
            System.out.println("Title : " + bk.title
                    + " and "
                    + " Author : " + bk.author);
        }
    }

}

/*
 * // As it top-level class we can't make it static
 * static class Demo{
 * 
 * }
 */
