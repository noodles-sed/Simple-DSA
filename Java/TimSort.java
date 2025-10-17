import java.util.Arrays;

public class TimSort {
    private static final int RUN = 32;

    public static void insertionSort(int[] arr, int left, int right) {
        for (int i = left + 1; i <= right; i++) {
            int temp = arr[i];
            int j = i - 1;
            while (j >= left && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }

    public static void merge(int[] arr, int l, int m, int r) {
        int len1 = m - l + 1, len2 = r - m;
        int[] left = new int[len1];
        int[] right = new int[len2];
        for (int i = 0; i < len1; i++) left[i] = arr[l + i];
        for (int i = 0; i < len2; i++) right[i] = arr[m + 1 + i];
        int i = 0, j = 0, k = l;
        while (i < len1 && j < len2) arr[k++] = (left[i] <= right[j]) ? left[i++] : right[j++];
        while (i < len1) arr[k++] = left[i++];
        while (j < len2) arr[k++] = right[j++];
    }

    public static void timSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; i += RUN)
            insertionSort(arr, i, Math.min((i + RUN - 1), n - 1));
        for (int size = RUN; size < n; size = 2 * size) {
            for (int left = 0; left < n; left += 2 * size) {
                int mid = left + size - 1;
                int right = Math.min((left + 2 * size - 1), n - 1);
                if (mid < right) merge(arr, left, mid, right);
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {5, 21, 7, 23, 19, 10, 3, 2};
        timSort(arr);
        System.out.println(Arrays.toString(arr));
    }
}
