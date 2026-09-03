// https://leetcode.com/problems/score-of-a-string/

int scoreOfString(char* s) {
   int soma = 0;

   for (int i = 0; s[i + 1] != '\0';i++) {
        int diferenca = s[i] - s[i + 1];
        diferenca = abs(diferenca);
        soma += diferenca;
   }
   return soma;
}
