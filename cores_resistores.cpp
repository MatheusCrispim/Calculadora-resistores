/* 
 * Autor: Matheus Guedes Crispim
 * Email: matheus.guedes@dce.ufpb.br
 * Contato: (83)9.9917-2286
 * 
 * */
#include <stdlib.h>  
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
	
class Valor{
	int nr;
	
	public:Valor();

	Valor(int nr){
		if(nr==0){		
			cout <<"Preto";
		}else if(nr==1){		
			cout <<"Marrom";
		}
		else if(nr==2){		
			cout <<"Vermelho";
		}
		else if(nr==3){		
			cout <<"Laranja";
		}
		else if(nr==4){		
			cout <<"Amarelo";
		}
		else if(nr==5){		
			cout <<"Verde";
		}
		else if(nr==6){		
			cout <<"Azul";
		}
		else if(nr==7){		
			cout <<"Violeta";
		}
		else if(nr==8){		
			cout <<"Cinza";
		}
		else if(nr==9){		
			cout <<"Branco";
		}
	}//end method
};//end class

class Tolerancia{
	int tol;
	
	public:
	Tolerancia();
	Tolerancia(int tol){
		if(tol>=-0.05 and tol<=0.05){
			cout << "Cinza";
		}
		else if( tol>=-0.1 and tol<=0.1){
			cout << "Violeta";
		}
		else if(tol>=-0.5 and tol<=0.5){
			cout <<  "Verde";
		}
		else if(tol>=-0.25 and tol<=0.25){
			cout <<  "Azul";
		}
		else if(tol>=-1 and tol<=1){
			cout <<  "Marrom";
		}
		else if(tol>=-2 and tol<=2){
			cout <<  "Vermelho";
		}
		else if(tol>=-5 and tol<=5){
			cout <<  "Ouro";
		}
		else if(tol>=-10 and tol<=10){
			cout << "Prata";
		}
		else if(tol==20){
			cout << "Sem Cor";
		}
		}//end method
	
	};//end class

int main (void){
    
    char bnd[1];
    cout <<"Digite o número de bandas do resistor, 4 ou 5: ";
    cin >> bnd;
    while(bnd[0]==5 or bnd[0]==4){
		cout << "Erro > Número de bandas inválido, digite novamente\n";
		cout <<"Digite o número de bandas do resistor, 4 ou 5: ";
		cin >> bnd;
		}
		
	if (strcmp(bnd, "4")==0){
		char str[10];
		cout << "Digite o valor do resistor: ";
		cin >> str;	
		while(strlen(str)<2 or strlen(str)>9){
			cout << "Erro > esse valor não pode ser processado\n";
			cout << "Digite o valor do resistor: ";
			cin >> str;	
			}
		char tol[10];
		cout << "Digite o tolerância do resistor: ";
		cin >> tol;	
		
		int itol=atoi(tol);
			
		int len=strlen(str)-2;
		
		Valor *resistor;
	
	if(atof(str)>=0.01 and atof(str)<0.1){
			char char_vl1[3];
			sprintf(char_vl1, "%c", str[3]);
			int vl1=atoi(char_vl1);
			resistor= new Valor(vl1);
			
			cout <<", ";

			char char_vl2[4];
			sprintf(char_vl2, "%c", str[4]);
			int vl2=atoi(char_vl2);
			resistor= new Valor(vl2);
			
			cout <<", ";
			cout <<"Prata";
		
		}else if(atof(str)>=0.1 and atof(str)<1){
			char char_vl1[2];
			sprintf(char_vl1, "%c", str[2]);
			int vl1=atoi(char_vl1);
			resistor= new Valor(vl1);
			
			cout <<", ";

			char char_vl2[3];
			sprintf(char_vl2, "%c", str[3]);
			int vl2=atoi(char_vl2);
			resistor= new Valor(vl2);
			
			cout <<", ";
			cout <<"Ouro";
			
		} else
        {
	
			char char_vl1[0];
			sprintf(char_vl1, "%c", str[0]);
			int vl1=atoi(char_vl1);
			resistor= new Valor(vl1);
		
			cout <<", ";

			char char_vl2[1];
			sprintf(char_vl2, "%c", str[1]);
			int vl2=atoi(char_vl2);
			resistor= new Valor(vl2);
		
		
			cout <<", ";
			resistor= new Valor(len);
		}
		
		cout <<", ";
		Tolerancia *tole;
		tole=new Tolerancia(itol);
		
		cout <<"\n";
		
		}else if(strcmp(bnd, "5")==0){//Resistor 5 bandas
			
		char str[10];
		cout << "Digite o valor do resistor: ";
		cin >> str;	
		while(strlen(str)<3 or strlen(str)>10){
			cout << "Erro > esse valor não pode ser processado\n";
			cout << "Digite o valor do resistor: ";
			cin >> str;	
			}
		char tol[10];
		cout << "Digite o tolerância do resistor: ";
		cin >> tol;	
		
		int itol=atoi(tol);
			
		int len=strlen(str)-3;
		
		Valor *resistor;
	
	if(atof(str)>=0.01 and atof(str)<0.1){
			char char_vl1[3];
			sprintf(char_vl1, "%c", str[3]);
			int vl1=atoi(char_vl1);
			resistor= new Valor(vl1);
			
			cout <<", ";

			char char_vl2[4];
			sprintf(char_vl2, "%c", str[4]);
			int vl2=atoi(char_vl2);
			resistor= new Valor(vl2);
			
			cout <<", ";

			char char_vl3[5];
			sprintf(char_vl3, "%c", str[5]);
			int vl3=atoi(char_vl3);
			resistor= new Valor(vl3);
			
			cout <<", ";
			
			cout <<"Prata";
		
		}else if(atof(str)>=0.1 and atof(str)<1){
			char char_vl1[2];
			sprintf(char_vl1, "%c", str[2]);
			int vl1=atoi(char_vl1);
			resistor= new Valor(vl1);
			
			cout <<", ";

			char char_vl2[3];
			sprintf(char_vl2, "%c", str[3]);
			int vl2=atoi(char_vl2);
			resistor= new Valor(vl2);
			
			cout <<", ";
			

			char char_vl3[4];
			sprintf(char_vl3, "%c", str[4]);
			int vl3=atoi(char_vl3);
			resistor= new Valor(vl3);
			
			cout <<", ";
			
			cout <<"Ouro";
			
		} else{
			
			char char_vl1[0];
			sprintf(char_vl1, "%c", str[0]);
			int vl1=atoi(char_vl1);
			resistor= new Valor(vl1);
		
			cout <<", ";

			char char_vl2[1];
			sprintf(char_vl2, "%c", str[1]);
			int vl2=atoi(char_vl2);
			resistor= new Valor(vl2);
			
			cout <<", ";
			
			char char_vl3[2];
			sprintf(char_vl3, "%c", str[2]);
			int vl3=atoi(char_vl3);
			resistor= new Valor(vl3);
			
		
			cout <<", ";
			resistor= new Valor(len);
		}
		
		cout <<", ";
		Tolerancia *tole;
		tole=new Tolerancia(itol);
		
		cout <<"\n";
		
		
		}//end if


}



