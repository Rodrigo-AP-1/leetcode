// https://leetcode.com/problems/jewels-and-stones/

int numJewelsInStones(char* jewels, char* stones) {
    int i, j, cont = 0;

    for (i = 0; i < stones[i]; i++) {
        for (j = 0; j < jewels[j]; j++) {
            if (stones[i] == jewels[j]) {
                cont++;
            }
        }
    }
    return cont;
}
