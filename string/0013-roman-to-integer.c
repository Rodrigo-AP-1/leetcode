// https://leetcode.com/problems/roman-to-integer/

int romanToInt(char* s) {
    int resultado = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'A') {
            resultado = resultado + 0;
        }

        if (s[i] == 'I' && s[i+1] == 'V') {
            resultado = resultado + 4;
            s[i+1] = 'A';
        } else if (s[i] == 'I' && s[i+1] == 'X') {
            resultado = resultado + 9;
            s[i+1] = 'A';
        } else if (s[i] == 'I') {
            resultado = resultado + 1;
        }

        if (s[i] == 'V') {
            resultado = resultado + 5;
        }

        if (s[i] == 'X' && s[i+1] == 'L') {
            resultado = resultado + 40;
            s[i+1] = 'A';
        } else if (s[i] == 'X' && s[i+1] == 'C') {
            resultado = resultado + 90;
            s[i+1] = 'A';
        } else if (s[i] == 'X') {
            resultado = resultado + 10;
        }

        if (s[i] == 'L') {
            resultado = resultado + 50;
        }

        if (s[i] == 'C' && s[i+1] == 'D') {
            resultado = resultado + 400;
            s[i+1] = 'A';
        } else if (s[i] == 'C' && s[i+1] == 'M') {
            resultado = resultado + 900;
            s[i+1] = 'A';
        } else if (s[i] == 'C') {
            resultado = resultado + 100;
        }

        if (s[i] == 'D') {
            resultado = resultado + 500;
        }

        if (s[i] == 'M') {
            resultado = resultado + 1000;
        }
    }
    return resultado;
}
