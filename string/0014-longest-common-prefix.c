// https://leetcode.com/problems/longest-common-prefix/

char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;

    if (strsSize == 0) {
        char* vazio = malloc(1 * sizeof(char));
        vazio[0] = '\0';
        return vazio;
    }

    while (strs[0][i] != '\0') {
        char letraDaColuna = strs[0][i];

        for (int linha = 1; linha < strsSize; linha++) {
            if (strs[linha][i] == '\0' || strs[linha][i] != letraDaColuna) {
                char* resultado = malloc(i + 1);
                strncpy(resultado, strs[0], i);
                resultado[i] = '\0';
                return resultado;
            }
        }
        i++;
    }
    char* resultado = malloc(i + 1);
    strncpy(resultado, strs[0], i);
    resultado[i] = '\0';
    return resultado;
}
