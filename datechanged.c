#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/file.h>

static void help(void){
    printf("OPTIONS:\n\t");
    printf("-a\tDate of access\n\t");
    printf("-m\tDate of modificed\n\t");
    printf("-c\tdate of create\n\t");
    printf("-h\tUsing help\n");
    printf("EXAMPLES:\n\t");
    printf("DateChanged -a filename.txt\n\t");
    printf("DateChanged -m filename.doc filename.pdf\n\t");
    printf("DateChanged -c filename.doc filename.pdf filename\n");
}

int main(int argc, char **argv){
    int opt = 0;
    opterr = false;
    while((opt = getopt(argc, argv, "a:m:c:h")) != EOF){
        switch(opt){
            case 'a' :
                break;
            case 'm' :
                break;
            case 'c' :
                break;
            case 'h' :
                help();
                break;
            default:
                fprintf(stderr, "Invalid argument %s\n", argv[1]);
                return EOF;
        }
    }
    argv += 2;
    while(*argv != NULL){
        printf("%s\n", *argv);
        argv++;
    }
    return 0;
}
