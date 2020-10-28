import java.util.*;

public class KadanesAlgorithm {
	static int maxofsubarray(int arr[],int n) {
		//for postive subarrays
//		int max_so_far=0;
//		int curr_max=0;
//		for(int i=0;i<n;i++) {
//			curr_max = curr_max+arr[i];
//			if(curr_max<0) curr_max=0;
//			else if(max_so_far<curr_max) max_so_far=curr_max;
//		}
		//for negative numbers as well as positive number
		int max_so_far=arr[0];
		int curr_max=arr[0];
		for(int i=1;i<n;i++) {
			curr_max = Math.max(arr[i],curr_max+arr[i]);
			max_so_far = Math.max(max_so_far, curr_max);
		}
		return max_so_far;
	}

	public static void main(String[] args) {
		int arr[]= {4,-1,2,1,-5,4};
		int n = arr.length;
		int max_sum = maxofsubarray(arr,n);
		System.out.println(max_sum);

	}

}
