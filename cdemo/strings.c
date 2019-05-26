#include <stdio.h>
#include <string.h>

int main(){
	char loopABC[26];
	char* constantABC = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 97; i <=122; i++){
		loopABC[i] = i;
	}
	printf("Original: %s,   Loop: %s",constantABC, loopABC);
if(strcmp(loopABC,constantABC) == 0){
		printf("The two strings match\n");
	}else{
		printf("The strings do not match\n");
	}
}
