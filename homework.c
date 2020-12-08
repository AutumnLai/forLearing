


#include "apue.h"




int main(void){
	pid_t pid;
	int sum_odd =0;
	printf("before fork\n");
	getchar();

	if ( (pid = fork()) < 0){
		err_sys("fork error")
	}
	else if ( pid == 0){//從這裡開始執行

		sum_odd = 1 + 3 + 5 + 7 + 9; //計算 0 到 10 的奇數和, 並印出結果
		printf("%d\n",sum_odd );	
	}
	else {
		sum_even = 2 + 4 + 6+ 8 + 10;//計算 0 到 10 的偶數和, 並印出結果
		printf("%d\n",sum_even );
	}

	exit(0);
}
