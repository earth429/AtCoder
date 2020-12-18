#include <stdio.h>
#include <string.h>
//sのposからlen分をtに取り出して返す
int mysubstr( char *t, const char *s, int pos, int len )
{
    if( pos < 0 || len < 0 || len > strlen(s) )
        return -1;
    for( s += pos; *s != '\0' && len > 0; len-- )
        *t++ = *s++;
    *t = '\0';
    return 0;
}
main() {
    char str[] = "01234567890";
    char t[64];
    int pos, n;

    for( pos = 0, n = strlen(str); pos < strlen(str); pos++, n-- ) {
        if( mysubstr( t, str, pos, n ) == 0 )
            printf( "pos:%2d, n:%2d, #%s#\n", pos, n, t );
    }
}