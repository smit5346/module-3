//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
// surface_area = 2 * (length * width + length * height + width * height);
#include<stdio.h>
void main()
{
	int a,l,w,h;
	printf("Enter Length");
	scanf("%d",&l);
	printf("Enter Width");
	scanf("%d",&w);
	printf("Enter Height");
	scanf("%d",&h);
	
	a=2*(l*w+l*h+w*h);
	printf("Total area of a rectangular is %d",a);
}
