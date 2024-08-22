#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void donne(){
    char *donnes= NULL;
    donnes=getenv("QUERY_STRING");
        int num1=0,
            num2=0,
            num3=0,
            num4=0;

    sscanf(donnes, "Donnes=%d.%d.%d.%d" , &num1 , &num2 , &num3 , &num4);
    save (&num1 , &num2 , &num3 , &num4);
}
void save ( int *num1 , int *num2 , int *num3 , int *num4){
    int pas_IP= 256;
        printf("content-type: text/html\n\n");
        printf("<!DOCTYPE HTML>\n");
        printf("HTML");
        printf("<BODY>");
        printf(" %d.%d.%d.%d</BR>", *num1 , *num2 , *num3 , *num4 );
        printf("</BODY>");
        printf("</HTML>");
        
        
        if (*num1>= pas_IP || *num1 < 0 || *num2>= pas_IP || *num2 < 0 || *num3>= pas_IP || *num3 < 0 || *num4>= pas_IP || *num4 < 0 {
        printf("content-type: text/html\n\n");
        printf("<!DOCTYPE HTML>\n");
        printf("HTML");
        printf("<BODY>");
        printf(" <BR> Ce n'est pas une adresse IP </B></BR>");
        printf("</BODY>");
        printf("</HTML>");
        }
        else {
        printf("content-type: text/html\n\n");
        printf("<!DOCTYPE HTML>\n");
        printf("HTML");
        printf("<BODY>");
        printf(" <BR> C'est une adresse IP </B></BR>");
        printf("</BODY>");
        printf("</HTML>");
        
        if { *num1 >0 && *num1<=127){
        printf("    cette identifiant est de classe A</BR>");
        }
        
       else if { *num1 >128 && *num1<=191){
        printf("    cette identifiant est de classe A</BR>");
        }
        
        else if { *num1 >192 && *num1<=223){
        printf("    cette identifiant est de classe A</BR>");
        }
        
        else if { *num1 >224 && *num1<=239){
        printf("    cette identifiant est de classe A</BR>");
        }
        
        else if { *num1 >240 && *num1<=255){
        printf("    cette identifiant est de classe E</BR>");
        }
        
        
        
        

}











int main() {
    
    void donnes();
    
    

    return 0;
}
