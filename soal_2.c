#include <stdio.h>
#include <string.h>

const char* evaluasi_string(const char* A, const char* B) {
    
    int lenA = strlen(A);
    int lenB = strlen(B);

    if (lenA != lenB) {
        return "BERBEDA";
    }

    if (strcmp(A, B) == 0) {
        return "IDENTIK";
    }
    
    return "MIRIP";
}

int main() {

    char A[100];
    char B[100];
    
    fgets(A, sizeof(A), stdin);
    
    fgets(B, sizeof(B), stdin);
    
    A[strcspn(A, "\n")] = 0;
    B[strcspn(B, "\n")] = 0;

    printf("%s\n", evaluasi_string(A, B));

    return 0;
}