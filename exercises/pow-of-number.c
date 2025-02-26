#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Update your code below this line
    int count = 1;
    for (int i = 1; i <= M; i++) {
        count *= N;
    }
    printf("%d\n", count);
    
}
