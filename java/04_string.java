
import  java.lang.String;
import java.util.Locale;

class LearnString {
    public static void main(String[] args) {
        // String is a class in java and it is immutable


        String str;  // declaration
        str = "Hello Brother"; // initialization
        String str2; // declaration
        str2 = new String("Hello hiiii"); // declaration


        String mystr = new String("Hello bro"); // declaration and initialization
        // these are two different string
        String name = "Abhishek"; // declaration and initialization
        String brother = "Vivek";


        // this two variable are different but pointing to reference of same object
        String gold = "Phone";
        String flash = "Phone";
        if(gold == flash){ // == also check address of object
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }

        // this two are not same object
        String gold1 = "Phone";
        String flash1 = new String("Phone");
        if(gold1 == flash1){ // == also check address of object
            System.out.println("YES");
        }else if(gold1.equals(flash1)) { // .equal checks only the value not reference
            System.out.println("only value is same");
        }else{
            System.out.println("NO");
        }

        String cont = gold+flash1; // to concat the string any primitive data type concat with String convert into string
        System.out.println(cont);


        // Some important String Methods no method change the original string it just return new object of after apply those method
        System.out.println(str.toLowerCase()); // return string with all letter in lowercase
        System.out.println(str.toUpperCase()); // return string with all letter in uppercase
        System.out.println(str.trim()); // return string after removing leading and trainling white spaces
        System.out.println(str.indexOf('a')); // return index of first occurrence of passed char/ sub-string .indexOf(string, index) -> for specify the starting index to check
        System.out.println(str.split(" ")); // return array of string after split the string where passed regex string is match without regex
        System.out.println(str.concat("Hello")); // return after concat both string
        System.out.println(str.length()); // return the length of string
        System.out.println(str.equals("Hello")); // return boolean value is both string match by value or not
        System.out.println(str.isEmpty()); // return boolean is string is empty or not
        System.out.println(str.replace("he", "jo")); // return string ofter replacing old with new sub-string/char
        System.out.println(str.charAt(1)); // return character at position passed
        System.out.println(str.substring(1, 4)); // return sub-string starting from start index to less than the end index passed and in the case if no end index is provided then return from starting index to end of string
        String.valueOf(12334); // it takes any primitive data type and return string value of that

        //There is many more methods in string


        // StringBuilder is similar to the string which is mutable
        StringBuilder stringBuilder = new StringBuilder("Hellohiiiiii");
        // most of the method of String class is the available in this class with the extra feature
        stringBuilder.append(1); // it takes primitive data type and append into last of the stringbuilder
        stringBuilder.delete(0,2); // delete from starting to less than the ending
        stringBuilder.deleteCharAt(4); // delete at the char at a given pos
        stringBuilder.reverse();
        stringBuilder.setCharAt(2,'t');
        stringBuilder.replace(2,3, "srsdg");  // replace the substring
        // There is the many more method


        // StringBuffer is mixup of both String and StringBuffer    immutable, growable, writable methods are same also
        StringBuffer stringBuffer = new StringBuffer("Hello");
        stringBuffer.insert(1, "er");// insert at index

    }
}
