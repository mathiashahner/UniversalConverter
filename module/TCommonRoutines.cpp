#include <modInclude.h>
#include <TCommonRoutines.h>

char * FloatToString( float buffer )
{
int aux;
char * result;

   aux = snprintf( result, sizeof(buffer), "%.2f", buffer );

   return result;
}
