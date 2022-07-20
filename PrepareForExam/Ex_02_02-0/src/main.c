int main(void) {
    float x;
    char err;
    float y = 57.29;
    if ((scanf("%f%c", &x, &err)) == 2) {
        y = y * x + 0.5;
        int sum = y;
        printf("%d", sum);
    } else {
        printf("n/a");
    }
    return 0;
}
