//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include<stdio.h>
int main()
{    
	int i,j,n,k;
	printf("Enter the number of rows for pyramid: ");
	scanf("%d",&n);
		for(i=n;i>=1;i--){
		    for(j=i;j>=2;j--){
                printf("  ");
		    }
		    for(k=1;k<=2*(n-i+1)-1;k++){
		        printf("* ");
		    }
		    printf("\n");
	    }

        for(i=n;i>=1;i--){
		    for(j=1;j<=n-i;j++){
                printf("  ");
		    }
		    for(k=1;k<=2*i-1;k++){
		        printf("* ");
		    }
		    printf("\n");
	    }
	return 0;
} 