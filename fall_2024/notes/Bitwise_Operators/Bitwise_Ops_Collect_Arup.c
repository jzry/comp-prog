#include <stdio.h>

int main(void) {

    int n, k;
    scanf("%d%d", &n, &k);
    int res = 0, have = 0;
    for (int i=0; i<n; i++) {
        int items, bit;
        scanf("%d", &items);
        for (int j=0; j<items; j++) {
            scanf("%d", &bit);
            have |= (1<<bit);
        }
        if (res == 0 && have == ((1<<k)-1))
            res = i+1;
    }
    printf("%d", res);


    return 0;
}
