// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

int finalValueAfterOperations(char** operations, int operationsSize) {
    int X = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "X++") == 0 || strcmp(operations[i], "++X") == 0) {
            X++;
        } else {
            X--;
        }
    }

    return X;
}
