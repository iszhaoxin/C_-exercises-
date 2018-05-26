#include <stdio.h>

int main(void){
    printf("My first program\n");

    int signed_integer, unsigned_integer;
    signed_integer = -10;
    unsigned_integer = 10;
    // test fot 'u' and 'd', diffence bewtween signed_integer and unsigned_integer
    // 'u' : Unsigned decimal integer
    // 'd','i' : signed decimal integer
    printf("Signed decimal integer %d\n",signed_integer);
    printf("unSigned decimal integer %u\n",signed_integer);
    // 'o' : Unsigned octal
    // 'x' : Unsigned hexadecimal integer
    // 'X' : Unsigned hexadecimal integer (uppercase)
    printf("unSigned octal integer %o\n",unsigned_integer);
    printf("unSigned hexadecimal integer %x\n",unsigned_integer);

    float signed_float = 31.415;
    // 'f' : decimal floating point lowercase
    // 'F' : decimal floating point uppercase
    printf("signed_float lowercase %f\n",signed_float);
    printf("signed_float uppercase %F\n",signed_float);
    // 'e' : scientific notation (mantissa/exponent) lowercase
    // 'E' : scientific notation <mantissa/exponent) uppercase
    printf("signed_float scientific lowercase %e\n",signed_float);
    printf("signed_float scientific uppercase %E\n",signed_float);
    // 'g' : Use the shortest representation: %e or %f
    printf("signed_float shortest representation %g\n",signed_float);

    // 'p' : point address
    printf("pointer address %p\n", signed_float);
    printf("pointer address %%\n", signed_float);
    // pointer to char and print it with %c
    char *s;
    char a = 'a';
    s = &a;
    printf("pointer to char and print it with pointer %c\n",*s);

    // pointer to char array and print it with %s
    char string[10] = "012345678";
    s = string;
    printf("pointer to char array and print it with pointer %s\n", s);
}
