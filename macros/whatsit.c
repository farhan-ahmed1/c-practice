#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    char a[4] = "\\|/-";
    char *pad = "------------------------------------------"
                "------------------------------------------";

    for (i = 0; i < 320; i++) {
        usleep(125000);
        if (i && i % 80 == 0) {
            printf("\r");
        }
        printf("%c %s", a[i % 4], pad);
    }
}