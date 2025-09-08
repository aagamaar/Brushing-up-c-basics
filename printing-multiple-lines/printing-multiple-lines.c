#include <stdio.h>
int main()
{

    /*Added
    a
    multiline
    comment
    */

    printf("I like you very much.\nI love Kochi !\n");

    // Compiler ignores this line

    //Variable declaration
    int a ; //2 to 4 bytes

    //Variable initialization
    a=10;
    
    float b = 2.4; // 4 bytes
    char c = 't'; // 1 byte

    printf("int a = %d\n", a);
    printf("int b = %f\n", b);
    printf("int c = %c\n", c);

    return 0;
}