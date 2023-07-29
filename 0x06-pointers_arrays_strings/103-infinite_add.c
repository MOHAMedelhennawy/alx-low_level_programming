// Online C compiler to run C program online
#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, big_n, sum, n;
    char inc[size_r];
    for(i = 0; n1[i] != '\0'; i++) {}
    for(j = 0; n2[j] != '\0'; j++) {}
    i > j ? big_n == i : big_n == j;
    
   if (i > size_r || j > size_r)
    return (0);
    
    for(sum = 0; sum < big_n; sum++)
        inc[sum] = '0';
    i -= 1;
    j -= 1;
    n = big_n;
    while(big_n  >= 0)
    {
        sum = n1[i] + n2[j];
        r[big_n] = sum % 10;
        if(sum > 9)
        inc[big_n - 1] = '1';
        big_n--;
        i--;
        j--;
    }
    
    while(n >= 0)
    {
        if (inc[n] == '1')
        r[n]++;
    }
    
		return (r);

}
int main() {
   
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
