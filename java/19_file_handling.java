
import java.io.*;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.util.Scanner;

// java provide File class which represent a file or directory pathname,Because different platforms use different formats of files path representation
// java provide mechanism to interact with files ether by relative or absolute path
// Instances of the File class are immutable
class FileHandling {
    // Run file to know what each method does
    public static void main(String[] args) throws IOException {

        File f = new File("java/src/SS_file_for_file_handling");
        System.out.println("File created: " + f.createNewFile());
        System.out.println("File name :" + f.getName());
        System.out.println("Path: " + f.getPath());
        System.out.println("Absolute path: " + f.getAbsolutePath());
        System.out.println("Parent: " + f.getParent());
        System.out.println("Is file: " + f.isFile());
        System.out.println("Exists : " + f.exists());

        if (f.exists()) {
            System.out.println("Is writable: " + f.canWrite());
            System.out.println("Is readable " + f.canRead());
            System.out.println("Is a directory: " + f.isDirectory());
            System.out.println("File Size in bytes " + f.length());

            // Method to read files
            // BufferedReader Class
            BufferedReader br = new BufferedReader(new FileReader(f));
            System.out.println(br.readLine());
            System.out.println(br.readLine()); // return null if no lines in file else line of the files whenever you
                                               // call it return next line

            // FileReader class
            FileReader fr = new FileReader("java/src/SS_file_for_file_handling");
            int i;
            while ((i = fr.read()) != -1)
                System.out.print((char) i);

            // Scanner class
            Scanner sc = new Scanner(f);
            while (sc.hasNextLine()) {
                System.out.println(sc.nextLine());
            }

            // Method to write in file
            String text = "Or bhai India har gya bahut dukh hua";
            String path = "java/src/SS_file_for_file_handling";

            // Files.writeString() method
            Path fileName = Path.of(path);
            Files.writeString(fileName, text, StandardOpenOption.APPEND);
            String file_content = Files.readString(fileName);
            System.out.println(file_content);

            // FileWriter class
            FileWriter fw = new FileWriter(path, true); // true for appending string else it will overwrite the entire
                                                        // text and replace with new one.
            fw.write(text);
            fw.close();

            // BufferWriter class
            BufferedWriter bfw = new BufferedWriter(new FileWriter(path, true));
            bfw.write(text);
            bfw.close();

            // FileOutputStream class
            FileOutputStream fos = new FileOutputStream(path, true);
            fos.write(text.getBytes(StandardCharsets.UTF_8));
        }
        System.out.println("Set ReadOnly: " + f.setReadOnly());
        System.out.println("File deleted: " + f.delete());
        System.out.println("New Directory created: " + f.mkdir());

        // there is a-lots of methods

    }
}