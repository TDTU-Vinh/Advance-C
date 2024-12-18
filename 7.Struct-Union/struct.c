#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {10, 20};
    printf("x: %d, y: %d\n", p.x, p.y);  // x: 10, y: 20
    return 0;
}
