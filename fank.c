#include<stdio.h>
void setString(char* a, char* b) {
	int i = 0;
	while (b[i] != '\0') {
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
}
void nextLine() {
	printf("\n");
}
void kuku() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%3d", i * j);
		}
		nextLine();
	}
}
void setChara() {
	struct Chara {
		int hp;
		int mp;
	};
	struct  Chara zako[3];
	zako[0].hp = 100;
	zako[0].mp = 10;
	zako[1].hp = 200;
	zako[1].mp = 20;
	zako[2].hp = 300;
	zako[2].mp = 30;
	for (int i = 0; i < 3; i++) {
		printf("zako%d HP%d MP%d",i, zako[i].hp, zako[i].mp);
		nextLine();
	}
}
void kukuhyou() {
	char a[10] = "kukuhyou";
	int i;
	for (i = 0; a != '\0'; i++) {
		printf("%s",a);
	}
}
