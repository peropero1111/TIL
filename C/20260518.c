#include <stdio.h>
#include <stdlib.h>

void cpycaptial(char*c,char*d)
{
	int i=0;
	while(d[i]!=0)	//0은 '\0' 
	{
		if(d[i]>='a'&&d[i]<='z'){
			c[i]='A'+'A'-'a';	//'a'+x='A' : x='A'-'a' 
								//그냥 adcii 코드는 영어 대소문자간에 26차이나 니까 그만큼 더하면 되는 거 아님?
			
		}
		else
		{
			c[i]=d[i];
		}
		i++; 	
	}

	
	
}
















void cpyalpha(char*a,char*b)
{
	int i=0;
	int k=0; 
	while(b[i]!=0)	//0은 '\0' 
	{
		if(b[i]>='A'&&b[i]<='z')
		{
			a[k]=b[i];
			k++;
		}
			//printf("%c",b[i]);

		i++; 
	}
	a[k]='\0';
	
		
}












void cpybackward(char*p,char*q)
{
	int i=0;
	while (q[i]!=0)
	{
		p[i]=q[i];
		i++;
		
	} 
	p[i]='\0';	// 문자열끝 
	
	int k=0;
	i-=1;
	while (i>=0)
	{
		p[k]=q[i];
		k++;
		i--;	
	} 
	p[k]='\0';
	

}


int main(void) 
{
	char str1[128];
	char str2[128];
	
	scanf("%[^\n]s", str1);	//str1은 &str1[0] 
	//str1[3]='\0';																														 
	printf("%s\n", str1);	//문자열은 '\0'로 끝남 
	
	cpybackward(str2,str1);	//hello	=> olleh
	printf("%s\n",str2);
	
	cpyalpha(str2,str1);
	printf("cpyalpha: %s\n", str2);
	
	cpycaptial(str2,str1);
	printf("cpycaptial: %s\n",str2);
	//int i=0;
	//while(str1[i]!=0)	//0은 '\0' 
	//{
	//	if(str1[i]>='A'&&str1[i]<='z')
	//		printf("%c",str1[i]);
	//	i++; 
	//}
	
	 
	 
	
	float fv;
	int iv;
	char cv;
	//실수 정수 문자 
	
	float* fp;
	int* ip;
	char*cp;
	//double, short, long
	//unsinged, const 
	//void	 
	//주소
	//=,+,-,==, !=,는 같은 데이터 타입 끼리
	//printf, scanf
	// 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
