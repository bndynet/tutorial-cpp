#include <stdlib.h>

void write2File() {
    FILE *fp;
    char ch, filename[10];
    printf("enter target file name:\n");
    scanf("%s", filename);
    printf("enter the file content, and ends with '#':\n");
    if((fp=fopen(filename, "w")) == NULL) {
        printf("can not open file\n");
        exit(0);
    }
    ch = getchar();
    ch = getchar();
    while(ch!='#') {
        fputc(ch, fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
}

void copyFile() {
    FILE *in, *out;
    char ch, infile[10], outfile[10];
    printf("enter the infile name:\n");
    scanf("%s", infile);
    printf("enter the outfile name:\n");
    scanf("%s", outfile);
    if((in=fopen(infile, "r")) == NULL) {
        printf("can not open infile\n");
        exit(0);
    }
    if((out=fopen(outfile, "w")) == NULL) {
        printf("can not open outfile\n");
        exit(0);
    }
    while(!feof(in)) 
        fputc(fgetc(in), out);
    fclose(in);
    fclose(out);
}