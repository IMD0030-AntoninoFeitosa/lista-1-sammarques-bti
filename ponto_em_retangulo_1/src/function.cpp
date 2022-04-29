#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if((IE.x> P.x || IE.y> P.y) || (P.x>SD.x || P.y>SD.y)){
        return OUTSIDE;
    } else if (((P.x==IE.x || P.x==SD.x) && (P.y>IE.y && P.y<SD.y)) || ((P.y==IE.y || P.y==SD.y) && (P.x>IE.x && P.x<SD.x))){
        return BORDER;
    } else{
        return INSIDE;
    }
}
