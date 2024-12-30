public class main1 {

    public static void main(String[] args) {
        int arr1[] = {1, 3, 8, 11, 13};
        int arr2[] = {2, 4, 5, 7, 9};
        int arr3[] = new int[arr1.length + arr2.length]; // Allocate memory for arr3

        int i = 0, j = 0, k = 0; // Initialize indices

        // Merge the arrays while elements remain in both
        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] < arr2[j]) {
                arr3[k] = arr1[i];
                i++;
            } else {
                arr3[k] = arr2[j];
                j++;
            }
            k++;
        }

        // If there are remaining elements in arr1, add them
        while (i < arr1.length) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }

        // If there are remaining elements in arr2, add them
        while (j < arr2.length) {
            arr3[k] = arr2[j];
            j++;
            k++;
        }

        // Print the merged array
        System.out.print("Merged array: ");
        for (int element : arr3) {
            System.out.print(element + " ");
        }
    }
}
