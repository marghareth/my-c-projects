#include <stdio.h>

int numHouse() {
    int num;
    scanf("%i", &num);

    if(num <= 0) {
        return 0;
    } else {
    int ans = 1;
    for(int i = 0; i < num; i++) {
        ans += 5;
    }
    return ans;
    }
}

int main() {

    int result = numHouse();

    if (result == 0) {
        printf("Error");
    } else {
        printf("%i", result);
    }
    
    return 0;
}