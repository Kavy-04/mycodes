public class multiply_matrix {
    public static void main(String[] args) {
        int[][] m1 = { { 2, 3 }, { 4, 5 } };
        int[][] m2 = { { 6, 7 }, { 8, 9 } };

        System.out.println("The 2D array is: ");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(m1[i][j] + " ");
            }
            System.out.println("\n");
        }

        System.out.println("The 2D array is: ");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(m2[i][j] + " ");
            }
            System.out.println("\n");
        }

        int row1 = m1.length;
        int col1 = m1.length;
        int col2 = m2.length;

        int[][] result = new int[row1][col2];

        System.out.println("multiplication of the matrix ");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                for (int k = 0; k < col1; k++) {
                    result[i][j] = m1[i][k] * m2[i][j];
                }
            }
        }
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                System.out.print(" " + result[i][j]);
            }
            System.out.println("\n");
        }
    }
}
