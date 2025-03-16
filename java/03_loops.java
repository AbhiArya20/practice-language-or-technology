

class Loops {
    public static void main(String[] args) {
        int n = 10;
        // for loop
        for(int i = 0;i<n; i++){
            System.out.print(i+" ");
        }
        // for Each loop
//        For-each loops are not appropriate when you want to modify the array
        int []arr = new int[] {1,3,4,6,7};
        for(int i: arr)
            System.out.println(i);


        // while
        System.out.println();
        int i = 0;
        while (i<n){
            if(i==4)
                continue;

            System.out.print(i + " ");
            i++;
        }
        System.out.println();

        // do while
        i = 0;
        do{
            System.out.print(i + " ");
            i++;
            if(i==4)
                break;
        }while (i<n);

    }

}
