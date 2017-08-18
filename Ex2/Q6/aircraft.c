
/* aircraft */

#include<stdio.h>
#include<assert.h>

int plane(float a,float b,float c );

int main()
{
    assert(plane(340,4000,2.95)==1);
    assert(plane(700,2000,2.75)==0);
    if(plane(700,2000,2.75))
        printf("plane will land \n");
    else
        printf("plane will crash \n");

    return 0;

}


int plane(float a,float b, float c)
{
    float d, e;
    
    d = a * 0.2777778;
    e=( d * d ) / ( 2 * c );
    
    if( e < b )
    {
        //printf("plane will land safely \n");
        return 1;
    }
    else
    {
        //printf("plane will crash \n");
        return 0;
    }
}
