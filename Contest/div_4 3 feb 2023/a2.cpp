
#include<stdio.h>
#include<string.h>

int t;
char c, s[] = "codeforces";

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf(" %c", &c);
        if (strchr(s, c) != NULL) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
