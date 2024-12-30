// public class Innermain {
//         int arr1[]={1,3,8,11,13};
//         int arr2[]={2,4,5,7,9};
//         int arr3[] ;

//         int i,j,k ;

//         while(i<arr1.length && j<arr2.length){
//             if (a) {
                
//             }
//         }
// }

// import java.lang.reflect.Array;
import java.util.Arrays;

public class hello {


    public static void main(String[] args) {
                int arr1[]={1,3,8,11,13};
                int arr2[]={2,4,5,7,9};
                int[] arr3= new int[10] ;

                int i=0,k=0,j = 0;

        while (i<arr1.length && j<arr2.length) {
            if (arr1[i]<arr2[j]) {
                arr3[k]=arr1[i];
                i++;
                // k++;

            } else {
                arr3[k]=arr2[j];
                j++;
            }
            k++;
        }
        if (j==arr2.length) {
            while (i<arr1.length) {
                arr3[k]=arr1[i];
                i++;
                k++;
            }
        }
        System.out.println("Merged Arrays " + Arrays.toString(arr3));
    }
}
