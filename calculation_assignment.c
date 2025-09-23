//Calculating the volume and surface area  of a cylinder
# include <stdio.h>
int main(){
    float height,radius,volume,surface_area;
    float pi=3.142;

    printf("Input height:");
    scanf("%f",&height);

    printf("Input radius");
    scanf("%f",&radius);

    volume=pi*radius*radius*height;
    surface_area=(2*pi*radius*radius)+(2*pi*radius*height);

    printf("height:%f\n",height);
    printf("radius:%f\n",radius);
    printf("volume:%f\n",volume);
    printf("surface area:%f",surface_area);

    return 0;
}
