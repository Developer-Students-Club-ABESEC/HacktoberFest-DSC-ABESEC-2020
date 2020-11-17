
public class VigenerEncryption {
    public static String Vigencrypt(String text, String key) {
        String res = "";
        key=key.toUpperCase();
        String temp=text;
        text = text.toUpperCase();
        for (int i = 0, j = 0; i < text.length(); i++) {
            char c = text.charAt(i);
            if (c < 'A' || c > 'Z')
                res+=c;
            else{
                if(Character.isLowerCase(temp.charAt(i)))
                {
                    res += Character.toLowerCase((char)((c + key.charAt(j) - 2 * 'A') % 26 + 'A'));
                }
                else
                    res += (char)((c + key.charAt(j) - 2 * 'A') % 26 + 'A');
                j = ++j % key.length();}
        }
        return res;
    }

}
