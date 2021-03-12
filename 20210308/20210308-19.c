#include <stdio.h>

int main(int argc, char* argv[]){
    char c;
    if(argc>1){
        for(int i=1;i<argc;i++){
        FILE *pfile = NULL;
        char *filename = argv[i];
        pfile = fopen(filename, "rt");
        printf("%ld\n", ftell(pfile));
        printf("\n\n%s\n",filename);
        if (pfile == NULL)
            {
                printf("Failed to open %s.\n", filename);
            }else
            {
                printf("\n%s is open\n", filename);
                while((c=fgetc(pfile))!=EOF){
                    putchar(c);
                }
            }


            fclose(pfile);
        }
    }else{
        while((c=getchar())!=EOF){
            putchar(c);
        }
    }


    return 0;
}