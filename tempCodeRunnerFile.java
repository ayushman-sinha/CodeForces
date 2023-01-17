import java.util.Random;
import java.lang.RuntimeException;
import java.lang.ArrayIndexOutOfBoundsException;
class Main{
    public static void main(String[] args){
        int a[][] = new int[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j] = i+j;
            }
        }
        Random r = new Random();
        int row = r.nextInt(9);
        int col = r.nextInt(9);
        try{
            System.out.println(a[row][col]);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Invalid index");
        }
        finally{
            System.out.println("\nArray Elements : ");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    System.out.print(a[i][j]+" ");
                }
                System.out.println();
            }
        }
        

    }
}