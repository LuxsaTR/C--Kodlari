#include <stdio.h> 
#include <Windows.h>  

float elma = 30.00;
float portakal = 40.00;
float kiraz = 50.00;
float muz = 35.00;
float seftali = 45.00;
float para = 428.00;
float kalan_para;

char siparis_kodu;

void ince_cizgi(){
	printf("\n__________________\n");
}
void kalin_cizgi(){
	printf("\n----------------------------------------\n");
}
void hesapla( float siparis_tutari ,char siparis_ismi[] ){
	if( kalan_para >= siparis_tutari ){   		
		kalan_para -= siparis_tutari;
		kalin_cizgi();
		printf( "%s urununu basarili satin alindi. Kalan para: %0.2f" , siparis_ismi , kalan_para  );
	}else  printf("Yetersiz bakiye! siparis_kodu alinamadi.\n");  
	
	kalin_cizgi();                          		
}

	void gecersiz_urun(char gelen_harf){
		ince_cizgi(); 
		printf("%C => Boyle Bir Urun Yok! Gecerli Bir Urun Giriniz",gelen_harf); 
		ince_cizgi(); 
	}

	
int main() {

kalan_para=para;
	while (kalan_para > 0) {
		printf("siparis_kodu icin harfi giriniz \n elma=e (%0.2f $), kiraz=k (%0.2f $), portakal=p (%0.2f $), muz=m (%0.2f $), seftali=s (%0.2f $) \n : " , elma,kiraz,muz,portakal,seftali);
    	
    	scanf(" %c", &siparis_kodu);

     
        if (siparis_kodu == 'e')  hesapla(elma , "Elma");
        else if (siparis_kodu == 'p')  hesapla(portakal , "Portakal");
        else if (siparis_kodu == 'k')  hesapla(kiraz , "Kiraz");
        else if (siparis_kodu == 'm')  hesapla(elma , "Muz");
        else if (siparis_kodu == 's')  hesapla(seftali , "Seftali");
        else gecersiz_urun(siparis_kodu);
        
    }
        
     	//if( kalan_para <= 0 ) printf("Para bitti! siparis_kodu alimlariniz sona erdi.\n");

    return 0;
}
