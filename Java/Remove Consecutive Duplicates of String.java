public class RemoveConsecutiveDuplicates {

	public static String removeConsecutiveDuplicates(String input) {
	   
		if(input.length()<=1){
            return input;
        }
		
        if(input.charAt(0) == input.charAt(1)){
               return removeConsecutiveDuplicates(input.substring(1));
           }else{
               String output = removeConsecutiveDuplicates(input.substring(1));
               return input.charAt(0) + output; 
           }
	}
}
