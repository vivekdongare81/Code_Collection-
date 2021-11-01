package Java_File.FirstPakage;

public class arraychange {
    public static void change(int[] arr2) {
        arr2[0] = 23;

    }

    public static void changee(int arr2) {
        arr2 = 6;

    }

    public static void main(String[] args) {
        int[] arr = { 2, 1, 6, 4, };
        change(arr);
        int temp = 4;
        changee(temp);
        System.out.println(temp);
        for (int i : arr) {
            System.out.println(i);
        }
    }
}
