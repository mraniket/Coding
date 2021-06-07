public class Decisionmaking {

    public static void main(String args[]) {
        // int x = 30;

        // if (x > 10) {
        //     System.out.println("This is if statement \n");
        // }
        // ////// if-lse
        // if (x < 20) {
        //     System.out.print("This is if statement\n");
        // } else {
        //     System.out.print("This is else statement\n");
        // }

        char grade = 'C';

        switch(grade)
        {
            case 'A':
                System.out.println("Excellent");
                break;
            case 'B':
                System.out.println("No you are wrong");
                break;
            case 'C':
                System.out.println("Well done");
                break;
            default :
                System.out.println(" Invalid grade ");
        }
        System.out.println("your garde is : " + grade);
    }
}