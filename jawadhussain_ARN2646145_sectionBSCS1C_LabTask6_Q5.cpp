#include <stdio.h>
int main(){
    int access, hour;
    int mode;
    int allowed;
    int trainer;
    while (1){
    printf("\nEnter member access number (9999 to stop): ");
    scanf("%d",&access);
    if(access==9999){
    break;
}   printf("Enter current hour (0-23)=  ");
    scanf("%d", &hour);
    mode=(hour>=22||hour< 6)?1:0;
    if (mode==1) {
    printf("LATE NIGHT MODE\n");
    if ((access & 8)!=0){
    allowed=1;
	 }
	 else{
    allowed = 0;
            }
        }
        else{
            printf("STANDARD MODE\n");
            if ((access & (1 | 2 | 4)) != 0) {
            allowed=1;
            }
            else{
            allowed=0;
            }
        }
        if (allowed==1){
            printf("Entry: ALLOWED\n");
        }
        else{
        printf("Entry: DENIED\n");
        }
        if ((access&4)!=0){
            trainer = 1;
        }
        else{
            trainer=0;
        }

        if (trainer==1){
            printf("Personal Trainer Access: YES\n");
        }
        else{
            printf("Personal Trainer Access: NO\n");
        }
    }
    printf("\nShift ended.\n");

    return 0;
}
