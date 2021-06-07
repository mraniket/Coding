public class For{

    public static void main(String args[]){
        // for ( int x = 10; x < 20; x++){
        //     System.out.println("value of x :" + x + "\n");
        //     //System.out.println("\n");
        // }
        int x =10;
        do{
            System.out.println("Value of x: " + x + "\n");
            x++;
            //trying break by myself

            if( x == 14){
                break;
            }
            // in t=his manner you can break  the statement
        }while(x < 20);
    }
}