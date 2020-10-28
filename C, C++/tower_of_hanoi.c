#include <stdio.h>
void toh(int n, char s, char d, char m)
{
    if (n == 1)
    {
        printf("\n");
        printf("Move disk 1 from rod %c to rod %c", s, d);
        return;
    }
    toh(n-1, s, m, d);
    printf("\n");
    printf("Move disk %d from rod %c to rod %c", n, s, d);
    toh(n-1, m, d, s);
}

int main()
{
    int n = 3;
    toh(n, 'A', 'C', 'B');
}
