int main() {
    float celsius,faherenhiet;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    faherenhiet = (celsius *9/5)+32;

    printf("Temperature in faherenhiet: %.2f\n", faherenhiet);

    return 0;
}
