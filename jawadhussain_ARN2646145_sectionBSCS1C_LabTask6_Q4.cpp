#include <stdio.h>
int main(){
    int containers;
    int weight;
    int cargoType;
    int trackingCode;
    printf("Enter number of containers = ");
    scanf("%d",&containers);
    for(int i=1;i<=containers;i++) {
    printf("\n--- Container %d ---\n",i);
    printf("Enter weight in kg ");
    scanf("%d",&weight);
    printf("Enter cargo type:\n");
    printf("1. General Goods\n");
    printf("2. Hazardous Materials\n");
    printf("3. Refrigerated Goods\n");
    printf("Enter your choice: ");
    scanf("%d",&cargoType);
	switch(cargoType) {
    case 1:
    if(weight<=20000) {
    printf("Status: Loaded\n");
}   else {
    printf("Status: Not Loaded\n");
    }
    break;
	case 2:
    if(weight<=15000&&i%2!=0){
    printf("Status: Loaded\n");
    }
    else{
    printf("Status: Not Loaded\n");
   }
   break;
    case 3:
    if(weight<=18000) {
    printf("Status: Loaded\n");
	}
	else{
    printf("Status: Not Loaded\n");
    }
	break;
    default:
    printf("Invalid Cargo Type\n");
    }
    trackingCode=(weight % 97)%100;
   printf("Tracking Code: %02d\n", trackingCode);
    }
    return 0;
}
