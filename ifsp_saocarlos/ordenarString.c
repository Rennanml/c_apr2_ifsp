#include <stdio.h>
#include <string.h>

void sort_names(char names[][10], int n) {
    char temp[10];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    int n = 10; 
    char names[n][10]; 

    printf("Digite 10 nomes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    sort_names(names, n);

    printf("Os nomes em ordem alfabética sao:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
