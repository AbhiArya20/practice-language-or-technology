

// Singleton class = if we limits the number of the object can create of that class. We can’t have more than a single object for such classes.

class SingletonClass{
    static SingletonClass singletonClass = null;

    private SingletonClass(){} // private constructor there may be protected constructor as well
    public static SingletonClass getSingletonClassInstance() {
        if (singletonClass == null){
            singletonClass = new SingletonClass();
            return singletonClass; // this is also known as anonymous object of a class
        }
        return singletonClass;
    }
}
class GetSingletonClass {
    SingletonClass obj = SingletonClass.getSingletonClassInstance();
}
