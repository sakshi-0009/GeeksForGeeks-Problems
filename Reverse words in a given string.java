/* Given a String S, reverse the string without reversing its individual words. Words are separated by dots. */

// Solution:-

class Solution {

  String reverseWords(String S){
      
        String[] words = S.split("\\.");
        StringBuilder reversed = new StringBuilder();
        for (int i = words.length - 1; i >= 0; i--) {
            reversed.append(words[i]).append(".");
        }
        if (reversed.length() > 0) {
            reversed.setLength(reversed.length() - 1);
        }
        return reversed.toString();
    }
}
