#include <stdio.h>
#include <string.h>
void compress(char str[]) {
    int count;
    for (int i = 0; i < strlen(str); i++) 
    {
        count = 1;
        while (i < strlen(str)-1 && str[i] == str[i+1]) 
        {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
}
int main() {
    char str[] = "aaabbc";
    compress(str);
    return 0;
}
