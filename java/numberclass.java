public class numberclass {
    public static void main(String args[]) {
        Integer x = 5; // boxes int to an Intiger object
        x = x + 10; // unboxes the integer to a int
        System.out.println(x);

        // java xxxvalue method***********

        System.out.println(x.byteValue());

        // java compareTo method************

        Integer p = 5;

        System.out.println(p.compareTo(3));
        System.out.println(p.compareTo(5));
        System.out.println(p.compareTo(8));

        // java equals() Method)

        Integer l = 5;
        Integer y = 10;
        Integer z = 5;

        System.out.println(l.equals(y));
        System.out.println(l.equals(z));

        //java valueOf() Method

        

    }
}