#include <stdio.h>
#include <assert.h>
#include <string.h>

#define MAXN 100000
#define MAXL 10+1

char target_var[MAXN][MAXL];
char operand1_var[MAXN][MAXL];
char operand2_var[MAXN][MAXL];

int main() {
    FILE *fr, *fw;
    int N, i;

#ifdef EVAL
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
#else
    fr = stdin;
    fw = stdout;
#endif
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<N; i++) {
        char op;
        assert(4 == fscanf(fr, "%s = %s %c %s", &target_var[i], &operand1_var[i], &op, &operand2_var[i]));
    }

    // insert your code here
    char my[MAXN][MAXL];
    long n=0;

    for(long i=0;i<sizeof(target_var);i++){
    }
        for(long j=0;i<sizeof(target_var[i]);j++){
            if(operand1_var[j]==target_var[j]) n++;
            if(operand2_var[j]==target_var[j]) n++;
        }
    }
    fprintf(fw, "%d\n", my);
    fclose(fr);
    fclose(fw);
    return n;
}
