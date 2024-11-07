#include <stdio.h>

int main() {
	int jam_masuk, jam_keluar, lama_bekerja;
	
	printf("Masukkan jam masuk (1-12): ");
	scanf("%d", &jam_masuk);
	
	printf("Masukkan jam keluar (1-12): ");
	scanf("%d", &jam_keluar);
	
	switch (jam_masuk) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			lama_bekerja = jam_keluar - jam_masuk;
			if (lama_bekerja < 0) {
				lama_bekerja = 12 + lama_bekerja;
			}
			printf("Lama bekerja: %d jam\n", lama_bekerja);
			break;
	}
	
	return 0;
}
