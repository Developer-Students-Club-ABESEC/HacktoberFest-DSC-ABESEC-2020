
public class CaesarSingleKeyEncryption {
    public static String encrypt(String input, int key) {
        StringBuilder encrypted = new StringBuilder (input);
        key=key%26;
        String Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String alphabet = Alphabet.toLowerCase();
        String s="";
        String ShiftedAlphabet = Alphabet.substring(key)+ Alphabet.substring(0,key);
        String shiftedAlphabet = alphabet.substring(key)+ alphabet.substring(0,key);
        for (int i = 0; i < encrypted.length();i++){
            char currChar = encrypted.charAt(i);
            if (Character.isLowerCase(currChar)) {
                int idx = alphabet.indexOf(currChar);
                if (idx !=-1){
                    char newChar = shiftedAlphabet.charAt(idx);
                    encrypted.setCharAt(i,newChar);
                }

            }

            else {
                int idx = Alphabet.indexOf(currChar);
                if (idx !=-1){
                    char newChar = ShiftedAlphabet.charAt(idx);
                    encrypted.setCharAt(i,newChar);
                }

            }
        }
        s=encrypted.toString();
        return s;
    }
}
