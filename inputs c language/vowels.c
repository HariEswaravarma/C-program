#include<stdio.h>
int main()
{
	char sen[20];
	int v=0,c=0,d=0,s=0,i;
	printf("enter the sentence\n");
	scanf("%[^\n]",sen);
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
		   v++;
		else if(sen[i]>='a' && sen[i]<='z')
		   c++;
		else if(sen[i]>='0' && sen[i]<='9')
		   d++;
		else if(sen[i] == ' ')
            s++;
    }
    printf("Vowels is %d \nConsonants is %d \nDigits is %d \nSpaces is %d\n",v, c, d, s);
    return 0;
}
