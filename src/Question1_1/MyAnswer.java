package Question1_1;

public class MyAnswer {
	
	public static boolean allUnique(String checkMe) throws IllegalArgumentException {
		if (checkMe == null) throw new IllegalArgumentException("checkMe cannot be null");
		if (checkMe.length() > 256 ) throw new IllegalArgumentException("checkMe cannot exceed 256 characters in length");
		boolean[] check = new boolean[256];
		for (int i = 0; i < checkMe.length(); i++) {
			int val = checkMe.charAt(i);
			if (check[val]){
				return false;
			} else {
				check[val] = true;
			}
		}
		return true;
	}

	public static void main(String[] args) {
		String[] tests = {"dave", "apple", "doggie", "hope"};
		
		for (String word : tests) {
			System.out.println("word " + word + " isUniqueChars=" + allUnique(word));
		}
	}
}
