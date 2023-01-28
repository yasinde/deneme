#include<stdio.h>
#include<stdlib.h>
int main()
{ 
	/*int a;
	int b;
	int c;
	printf("notunu gir\n");
	scanf_s("%d", &a);
	printf("notunu gir\n");
	scanf_s("%d", &b);
	c = (a + b) / 2;
	if (c >= 80 && c <= 100)
	{
		printf("aa");
	}
	else if (c >= 60 && c <= 79)
	{
		printf("bb");
	}
	else if (c >= 0 && c <= 59)
	{
		printf("cc");
	}
	else
	{
		printf("notunu yanlýþ girdiniz");
	}
	return 0;*/
	

	/*	int v;
		int f;

		printf("vize notunuzu giriniz");
		scanf_s("%d", &v);
		printf("final notunuzu giriniz");
		scanf_s("%d", &f);
		int z = v * (0.4);
		int a = f * (0.6);
		int s = (a + z);


		if (s >= 80 && s <= 100)
		{
			printf("notunuz aa");
		}
		else if (s >= 60 && s < 79)
		{
			printf("notunuz bb");

		}
		else if (s >= 40 && s < 59)
		{
			printf("notunuz cc");
		}
		else
		{
			printf("basarisiz oldunuz");
		}








		return 0;
		*/


	/*int sayac = 1;
	int sayý;
	int i= 1;
	printf("sayý gir");
	scanf_s("%d", &sayý);
	for (i;i<=sayý;i++) 
	{
		sayac *= i;

	
	}
	printf("%d", sayac);*/

	/*int i;
	printf("sayý gir");
	scanf_s("%d", &i);
	if(i%2==0)
	{
		printf("satý çift");

	}

	else 
	{
		printf("tek");
	}
	*/

	/*int i;
	int b;
	int kalan;
	printf("sayý gir");
	scanf_s("%d", &i);
	printf("sayý gir");
	scanf_s("%d", &b);
	
	kalan = i % b;

		printf("%d blünen sayý %d bölünen sayý%d", kalan,i,b);*/

/*int sayac = 0;
int i;
int sayý;

printf("sayý gir");
scanf_s("%d", &sayý);
for (i = 0; i <= sayý; i++)
{
	sayac = sayac + i;
}
printf("%d", sayac);
*/



/*char ýsým;
printf("ýsým gir (y,h,n,s)");
scanf_s("%c", &ýsým);
switch(ýsým)
{ case 'y':
	printf("yasin demirci nosu 201293203 sýnýfý 8a eyüp\n");
	break;
case 'h':
	printf("hüseyindurak nosu 2012932sdad03 sýnýfý 9a beylikzdü<ü\n");
	break;
case 'n':
	printf("nisa nosu 20129fgdgdf3203 sýnýfý 10a esenuyrt\n");
	break;
case 's':
	printf("serhat benli nosu 20129gkjhfkhjfgjk3203 sýnýfý 111a küçükçekmece\n");
	break;
default:
		printf("doðru biþey gir la");
		break;
}
*/
/*int s;
int k;
int giris;
int yildiz = 1;
printf("Giris:");
scanf_s("%d", &giris);
for (k = 0; k < giris; k++) 
{

	for (s = 0; s < yildiz; s++)
	{
		printf("*");
	}
	printf("\n");
	yildiz++;


}


	return 0;
	*/


/*int n_student, * students;
printf("Kaç ögrenci notunu girmek istiyorsunuz:");
scanf_s("%d", &n_student);

students = (int*)malloc(n_student * sizeof(int));

if (students == NULL) {
	printf("Error");
	exit(0);
}

for (int i = 0; i < n_student; i++) {
	printf("lutfen %d. ogrencinin notunu giriniz:", i + 1);
	scanf_s("%d", students + i);
}
for (int j = 0; j < n_student; j++) {
	printf("%d. ogrencinin notu :%d ", j + 1, *(students + j));
}

return 0;*/




int n, * market;

market = (int*)malloc(10 * sizeof(int));

if (market == NULL) {
	printf("Error");
	exit(0);
}

for (int i = 0; i < 10; i++) {
	printf("lutfen %d. fiyatlarý giriniz:", i + 1);
	scanf_s("%d", market + i);
}
market = (int*)realloc(market, 20 * sizeof(int));

for (int d = 0; d < 10; d++)
{
	for (int l = 10 ;l < 20; l++)
	{
		market[l] = market[d] * 10;
		
	}
	
}







for (int k = 0; k < 20; k++) {
	printf(" fiyatlar : % d\n ", *(market+k));
}

return 0;










}
