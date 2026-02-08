#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("example.txt","w");
    if(fp==NULL){
        printf("File opening failed!\n");
        return 1;
    }
    printf("File opened successfully using fopen() function.\n");
    fclose(fp);
    printf("File closed successfully using fclose() function.\n");
    return 0;
}