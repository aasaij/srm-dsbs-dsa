#include <stdio.h>

int main(){
	int N, Q;	
	int arr[][3] = {{1,2,3}, {3,4,5}, {6,7,8},{10,11, 44}};	
	scanf("%d", &N);	
	int A[N];
	scanf("%d", &Q);
	int B[Q][2];
	if (N >= 1 && N <= 105 && Q>=1 && Q<=105){
		for (int i = 0; i<Q; i++)
			scanf("%d-%d", &B[i][0], &B[i][1]);
		int sum[N];
		for (int i = 0; i<N;){
			int n;
			scanf("%d", &n);
			if ( n >=1 && n <= 100)
				A[i++]=n;
		}
		sum[0] = A[0];
		for(int i = 1; i<N; i++){
			if ( i % 2)
				sum[i] = sum[i-1];
			else
				sum[i] = A[i]+sum[i-1];
		}
		printf("[");
		for(int i = 0; i<Q-1; i++){
			if (B[i][0]==0)
				printf("%d,", sum[B[i][1]]);
			else
				printf("%d,", sum[B[i][1]]-sum[B[i][0]-1]);				
		}
		if (B[Q-1][0]==0)
			printf("%d]", sum[B[Q-1][1]]);
		else
			printf("%d]", sum[B[Q-1][1]]-sum[B[Q-1][0]-1]);					
	}
	return 0;	
}