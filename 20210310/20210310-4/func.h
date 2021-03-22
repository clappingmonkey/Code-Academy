#include <stdlib.h>

typedef struct{
    float priceGramas;
    float gramas;
    float volume;
    float priceVolume;
    float total; //общата цена за една пратка (грамове + обем)
}info;

extern FILE *fp = NULL;

float volumeIf(float volume);
float gramasIf(float gramas);
void arrayFuller(info *list, int n);