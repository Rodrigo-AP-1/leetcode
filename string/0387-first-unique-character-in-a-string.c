// https://leetcode.com/problems/first-unique-character-in-a-string/

int firstUniqChar(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        int unico = 1;

        for (int j = 0; s[j] != '\0'; j++) {
            if (i != j && s[i] == s[j]) {
                unico = 0;
                break;
            }
        }

        if (unico) {
            return i;
        }
    }
    return -1;
}
