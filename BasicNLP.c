/* Preprocessor Directives ---------------------------------------------*/
#include <stdio.h>   // printf, scanf, sizeof
#include <stdlib.h>  // DMA
#include <string.h>  // string
//#include <windows.h> // Sleep(Delay)


/* Global Variables --------------------------------------------- */
//char *Seed[] = {"I","love","you"};
//char *Seed[] = {"One","apple","a","day","keeps","the","doctor","away"};
//char *Seed[] = {"Come","with","me","if","you","want","to","live"};
char *Seed[] = {"Train","your","mind","to","see","good","in","every","situation"};
//Terminator(1991)

char **s=NULL;
char **root=NULL;

unsigned int numSeed=0;
unsigned short int Round=0;
unsigned long nFac=0;

/* Function Declaration --------------------------------------------- */
unsigned long factorial(unsigned int n);           // To find n! (Recursive)
void getInput(char **s, unsigned int numSeed);                  // Input your rootwords
void permutation(char **s,unsigned int begin,unsigned int end);  // Permutation or rootwords
void swap(char **ptp1,char **ptp2);                           // Swap rootwords
void chkSeed(char **s);                                // Compare Seed and rootwords
void shwInput();                                      // Display rootwords (User's Input)

/* Main --------------------------------------------- */
int main(){
	
    numSeed= sizeof Seed / 8;
	
    s = malloc((numSeed+1)*sizeof(*s));
    root = malloc((numSeed+1)*sizeof(*root));
    nFac = factorial(numSeed);
    printf("\nThere are %u Seeds ( %u! = %lu patterns ) in memory.\n\n",numSeed,numSeed,nFac);
	
    getInput(s,numSeed);

    permutation(s,0,numSeed-1);

    printf("\n[ o o ]/ ... There is no relation.\n");
    printf("\n");
    shwInput();

    return 0;
}

/* Function: To find n! (Recursive) -------------------------------------------- */
unsigned long factorial(unsigned int n){
   return (n<1)? 1:(n * factorial(n-1));
}

/* Function: Input your rootwords --------------------------------------------- */
void getInput(char **s, unsigned int numSeed){
    unsigned int cnt, len;
    for(cnt=0;cnt < numSeed;cnt++){
        printf("How many characters are there in rootwords [ %u ]?: ",cnt);
        scanf("%d",&len);
        s[cnt]= malloc((len+1)*sizeof(char));
        printf("Input your rootwords [ %u ]: ",cnt);
        scanf(" %s",s[cnt]);
        root[cnt]= malloc((len+1)*sizeof(char));
        root[cnt]=s[cnt];
    }
	
    printf("\n");
}

/* Function: Permutation of rootwords --------------------------------------------- */
void permutation(char **s,unsigned int begin,unsigned int end){
    unsigned int cnt;
    if(begin==end){
        chkSeed(s);
        printf("\n");
    }else{
        for(cnt=begin;cnt<=end;cnt++){
            swap((s+begin),(s+cnt)) ;            // Swap rootwords
            permutation(s,begin+1,end) ;    // Compare seed and rootwords
            swap((s+begin),(s+cnt)) ;            // Swap rootwords (Backtrack)
        }
    }
}

/* Function: Swap rootwords --------------------------------------------- */
void swap(char **ptp1,char **ptp2){
    char *tmp;
    tmp = *ptp1;
    *ptp1 = *ptp2;
    *ptp2 = tmp;
}

/* Function: Compare Seed and rootwords --------------------------------------------- */
void chkSeed(char **s){
    unsigned int cnt, testSeed=0;
    printf("Round [ %lu ] = ",++Round);
    for(cnt=0;cnt < numSeed;cnt++){
        printf("%s ",s[cnt]);
    }
    for(cnt=0;cnt < numSeed;cnt++){
        if(strcmp(s[cnt],Seed[cnt])!=0){
        printf(" [ X ] ");
            break;
        }else{
            testSeed++;
            if(testSeed == numSeed){
                printf("\n\n[ o o ]/ ... Round [ %u ] = ",Round);
                for(cnt=0;cnt < numSeed;cnt++){
                    printf("%s ",s[cnt]);
                }
                printf(" [ TRUE ]\n\n");
                shwInput();
                exit(0);
            }
        }
    }
    //Sleep(tSLEEP);
}

/* Function: Display rootwords (User's Input) --------------------------------------------- */
void shwInput(){
	
    unsigned int cnt;
    printf("There are %u rootwords ( %u! = %u patterns ) : ",numSeed,numSeed,nFac);
    for(cnt=0;cnt<numSeed;cnt++){
		printf("%s ",root[cnt]);
	}
    printf("\n");
}
