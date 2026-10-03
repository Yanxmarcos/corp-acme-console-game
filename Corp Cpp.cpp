#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<fstream>

void gotoxy(int x,int y){     
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  }
using namespace std;

//MENU PRINCIPAL
void Menu_principal();
void creditos();
void PRINCIPIO_ACME();
void entrada();
void creditos();

//FUNCIONES TODO
void OcultarCursor();
void MostrarCursor();

//FUNCIONES_MEMORIA
void Menu_memoria();
void Niveles_memoria();
void facil_M();
void medio_M();
void dificil_M();
void reto_memoria();
void instrucciones_M();
void NumeroGrande(float a[][10],int fila, int columna);
void marco_memoria();
void tabla_num(int m);
void borrar_num(float numero[][10],int fila,int columna);
int level=0;
int tam=0;
int aumento=0;
int vidas=2;
int perdida=0;
void reloj(int segundos);
void NumeroGrande_1D_2(float numero[][10],int fila,int columna);
void tabla_num2(int m);
void cuadro_level(int nivel, int selector);
void validar_respuesta2(float respuesta[][10], int i, int j, int m, int k);
void niveles_grande();
void instrucciones_movimiento();
void vida(int vidas);
void generando_numeros();
void level_grande(int nivel, int a);
void cuadro_opciones();
void opciones_grande_memoria();
void animacion_memoria();
void letras_grandes();
void inicio(float numero[][10],int fila,int columna,int tam);
int salir_avanzar(int nivel);
int salir_reintentar(int vidas);
void trofeo_victoria(int level);
void derrota(int level);
string nombre_memoria();

//FUNCIONES FLASH
void Rayos();
string ImprimirName(int i);
void GuardarName(string name,int esp);
void GuardarNivel(int nivel,int esp);
int ImprimirNivel(int i);
void NumeroGrande_1D(int numero);
void NumeroGrande_2D(int numero);
void NumeroGrande_3D(int numero);
void marcoAnimacion();
void marco();
void tapar();
void taparAvanza(int x);
void taparAvanza2(int x);
void corazon(int n);
void Flash_Opening();
void Flash_Opening_SinAnimacion();
void advertencia();
int preguntaSuma();
int pregunta_menu_o_avanza(int nivel);
bool pregunta_menu_u_otravez();
void pregunta_solo_menu();
void semaforo();

void MarcoSuperior();
void figuritas_1();
void figuritas_2();
void figuritas_3();
void advertencia_1();
int preguntaDigitos();
int preguntaVelo();
int preguntaCantNum();
int preguntaSuma2();
bool pregunta_menu_u_otravez_2();
int Funcion_otra_vez();
void OcultCursor();

void leerContra(char frase[]);
void LanzarNumerosYNombresOrdenados(int niveles[],string nombres[],int log);
void pregunta_menu_o_resetear();
void Records();
int Menu_2();
int ElegirNivel();
int Menu_Principal();
void felicidades(int nivel);
void gameover(int nivel,int esp);
void FLASH_ANZAN();

//FUNCIONES GUERRA MIA

int Menu();
int Menu_R1();
int Menu_R2();
int Menu_R1_1();
int Menu_R1_3();
int Menu_R2_1();
int Menu_R2_3();
int Menu_R1_2();
int Menu_R2_2();


bool pregunta_continuar();
void marco_2();
void figuritas_3();
void radio();
void miesposa();
void felizmente();
//void por_favor();
void apago_maquina();
void subo_al_tren();
void sera_posible();
void vecino();
void respuesta_1_vecino();
void respuesta_1_vecino_1();
void respuesta_1_vecino_2();
void respuesta_2_vecino();
void respuesta_2_vecino_1();

void Continua_Historia_Jamas_R2();
void se_que_no_hay_mucho_R2();
void la_noche_R2();
void no_fue_hasta_la_tarde_R2();

void MuchasGracias_R2();
void Espera_un_momento_R2();
void Como_te_pago_R2();
void Sugerir_comida_R2_parte1();
void Sugerir_comida_R2_parte2();
void Sugerir_joyas_R2();
void Sugerir_dinero_parte_1_R2();
void Sugerir_dinero_parte_2_R2();
void Sugerir_dinero_parte_3_R2();
void Sugerir_dinero_parte_4_R2();
void Recuerdo_joyas_R2();
void Tengo_unas_joyas_parte1_R2();
void Tengo_unas_joyas_parte2_R2();
void La_manana_llego();
void teTomaste_un_tiempo();

void historia_2();

//RESPUESTAS 1
void Continua_Historia_Jamas_R1();
void se_que_no_hay_mucho_R1();
void la_noche_R1();
void no_fue_hasta_la_tarde_R1();
void MuchasGracias_R1();
void Espera_un_momento_R1();
void Como_te_pago_R1();
void Sugerir_comida_R1_parte1();
void Tengo_unas_joyas_parte1_R1();
void Recuerdo_joyas_R1_2();
void La_manana_llego_R1_1();
void Recuerdo_joyas_R1_caso1();
void Tengo_unas_joyas_parte1_R1_caso1();
void Sugerir_dinero_parte_1_R1();
void Sugerir_dinero_parte_2_R1();
void Sugerir_dinero_parte_3_R1();
void Sugerir_dinero_parte_4_R1();

void comida_respuesta2_parte1();
void Recuerdo_joyas_R2_caso1();
void Recuerdo_joyas_R2_fin_2();


void EstaGuerraMia();
void ak_47();
string nombre();
void OpeningDeEstaGuerraMia();
int Menu_EstaGuerra();
bool pregunta_menu_u_otravez_GUERRA();


void Pase_Al_Primer_Texto();
void PrimerTexto();
void PrimerTexto();
void PrimerTexto2();
int Opciones1Texto2Piso();
int Opciones1Texto3Piso();
int Opciones1Texto1Piso();
int Opciones1TextoSotano();
void SegundoTexto();
void SegundoTexto2();
void SegundoTexto3();
int Opciones2Texto2Piso();
int Opciones2Texto3Piso();
int Opciones2Texto1Piso();
int Opciones2TextoSotano();


void marco_GUERRA();

void medio();


void tu_hermano_te_visita();
void marco();
void marco_libro();
void no_de_nuevo();
void ella_no_es();
void que_debemos_hacer();
void que_quieres();
void como_hariamos();
void que_tan_arriesgado();
void usar_hija();
void continuar_guerra();
void largate_de_aqui();
void no_tengo_nada();
void se_porque_viniste();
void lectura_6();
void continuar_2();
void tu_hija_desaparecida();
void primer_piso_L6();
void segundo_piso_L6();
void tercer_piso_L6();
void sotano_L6();
void proximamente();

//SOUNDTRACKS 
void musica_derrota();
void intro_guerra();
void musica_principal();
void victoria();
void musica_niveles_memoria();
void musica_intro_memoria();
void MusicaPerder();
void MusicaOpening();
void coyote();
void musica_creditos();

int main()
{	coyote();
	PRINCIPIO_ACME();
	
    getch(); 
	
}

//ENTRADA

void Menu_principal()
{	musica_principal();
	system("title CORP ACME");
	system("color 6");
	instrucciones_movimiento();
	marco_memoria();
	int x,y=5; 
 x=25;	
 {	gotoxy(x,y);cout<<"  __   __   ___   ___          __    __  __  __  ___ ";y++;
 	gotoxy(x,y);cout<<" / _) /  \\ (  ,) (  ,\\        (  )  / _)(  \\/  )(  _)";y++;
	gotoxy(x,y);cout<<"( (_ ( () ) )  \\  ) _/ _      /__\\ ( (_  )    (  ) _)";y++;
	gotoxy(x,y);cout<<" \\__) \\__/ (_)\\_)(_)  (_)    (_)(_) \\__)(_/\\/\\_)(___)";y++;
 
    gotoxy(44,12);cout<<"MEN\xE9"<<" DE JUEGOS";
	x=45;y=14;
	
	gotoxy(x,y);cout<<"\257"<<" FLASH ANZAN";y++;
	gotoxy(x,y);cout<<"\257"<<" MEMORY TRAINER";y++;
	gotoxy(x,y);cout<<"\257"<<" ESTA GUERRA MIA";y++;
	gotoxy(x,y);cout<<"\257"<<" CR\x90"<<"DITOS";y++;
	gotoxy(x,y);cout<<"\257"<<" SALIR";y++;
	
		
	           
 x=43,y=14; gotoxy(x,y);cout<<">"; 
 
 	if (y==14) 
    {while(true){
    	if (getch()){
		
		
		char tecla=getch();
		     if (tecla==77){ if(y==14) {system("cls");FLASH_ANZAN();break;} if (y==15) {system("cls");animacion_memoria();break;} 
			 if (y==16) {system("cls");EstaGuerraMia();break;}if (y==17) {system("cls");creditos();break; }if (y==18) exit(1);}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if(y!=18) y++; else y=14; }		
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if(y!=14) y--; else y=18; }
			 
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 
			gotoxy(x,y);cout<<">"; Beep(100,100);}
		     
	    }
	}
	
	
	
}
}

void PRINCIPIO_ACME()
{	system("title CORP ACME");
	OcultarCursor();
		bool estado=true;
		 int	x=24,y=0;
	int contar=0;
	
		if (contar=5)
		{
			system("cls");
			system("color 01");
			int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			Sleep(300);
			if (contar=10)
			{
				system("cls");
		    	system("color 04");
		    	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			    Sleep(300);
	    	
			    if(contar=15)
			    {
			    	system("cls");
		        	system("color 06");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
				
			  if(contar=20)
			    {
			    	system("cls");
		        	system("color 05");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			        
								  if(contar=25)
			    {
					system("cls");
		        	system("color 03");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			        
					
								  if(contar=30)
			    {
					
					system("cls");
		        	system("color 02");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			        
					
					
								  if(contar=35)
			    {
					system("cls");
		        	system("color 09");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			        
					
								  if(contar=40)
			    {
					
					system("cls");
		        	system("color 0A");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			     	
								  if(contar=45)
			    { 
					 
					system("cls");
		        	system("color 0B");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			        
								  if(contar=50)
			    {
					
					system("cls");
		        	system("color 0C");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			       	
					   
								  if(contar=55)
			    {   
					   
					system("cls");
		        	system("color 0D");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
				
			  if(contar=60)
			    {
			    	system("cls");
		        	system("color 03");
		        	int	x=24,y=0;
   gotoxy(x,y);cout<<"       ___                              _...__        "; y++;
   gotoxy(x,y);cout<<"    .-'   '--._                       .'_     '-.     "; y++;
   gotoxy(x,y);cout<<"  .'     .--._ '-._                 .'.' \\       '.   "; y++;   
   gotoxy(x,y);cout<<" /      /__   `'.  '.              / /    `\\       \\  "; y++;
   gotoxy(x,y);cout<<"/      /   '-.    `\\ \\           /'/'       \\      |  "; y++;
   gotoxy(x,y);cout<<"|     |       '.    `\\`\\        / /     _.-'|      |  "; y++;
   gotoxy(x,y);cout<<"|     |         \\     \\ \\      / /    .'    |      /  "; y++;
   gotoxy(x,y);cout<<"\\    /          '.   | |,-~-,/ /   .'      \\     /    "; y++;
   gotoxy(x,y);cout<<"  '--'           __\\               /__       '._.'    "; y++;
   gotoxy(x,y);cout<<"               .\"  '.             .'  \".              "; y++;
   gotoxy(x,y);cout<<"               |      '.       .'      |              "; y++; 
   gotoxy(x,y);cout<<"                \\ ',    '.   .'    .' /               "; y++;
   gotoxy(x,y);cout<<"                /'-.\"\"-._ \\ / _.-\"\".-'\\               "; y++;
   gotoxy(x,y);cout<<"     _.=='''--,/ '/_.--._\\'V'/_.--._\\' \\,--'''--._    "; y++;
   gotoxy(x,y);cout<<"   .'            _'-.__0_;\\ /;_0__.-' _'          '.  "; y++;
   gotoxy(x,y);cout<<"  /     ,____..-'\\'.      \"\"\"      -'/'--..____,    \\ "; y++;
   gotoxy(x,y);cout<<" /     '          \\       .=.       /          `     \\"; y++;
   gotoxy(x,y);cout<<" |             __  '-.   .-=-.   .-'  __             |"; y++;
   gotoxy(x,y);cout<<"  \\      _.--''  ''---'. .-=-. .'---''  ''--._      / "; y++;
   gotoxy(x,y);cout<<"   '----'            .-'  ___  '-.            `----'  "; y++;
   gotoxy(x,y);cout<<"                    (    '   '    )                   "; y++;
   gotoxy(x,y);cout<<"                     '.    _    .'                    "; y++;
   gotoxy(x,y);cout<<"                       '--/ \\--'                      "; y++;
   gotoxy(x,y);cout<<"                          |#|                         "; y++;
   gotoxy(x,y);cout<<"                          \\_/                         "; y++;
			        Sleep(300);
			        contar=0;
				   }
	        	}
	     	}
	    }
     }
			}
			    
			}
		}
	}
    }
   }
   }
   
	contar++;system("cls");entrada();
	
	while(true)
	{
			if (getch()){
		char tecla=getch();
	if (tecla!=80&&tecla!=72&&tecla!=77) continue;
	
	}
	}

	

}


void entrada()
{
	system("color 0F");
	system("cls");
	sleep(1);
	
	gotoxy(43,10);cout<<"CORPORACI"<<"\xE0"<<"N ACME "<<"\270";
	sleep(2);
	system("cls");
	sleep(2);
	
	gotoxy(48,10);cout<<"PRESENTA";sleep(2);system("cls");sleep(2);
	
	gotoxy(44,10);cout<<"DESARROLLADO POR";sleep(2);system("cls");Sleep(500);
	
	gotoxy(44,10);cout<<"Jos\x82 Valdez";
	gotoxy(44,11);cout<<"Yanxmarco Chan";
	gotoxy(44,12);cout<<"Junior Orme\xA4o";
	gotoxy(44,13);cout<<"Jorge Bocanegra";
	sleep(3);system("cls");
	
	Menu_principal();
	
}

void creditos()
{	system("color 0F");
	musica_creditos();
	int i=12;
	system("cls");
	gotoxy(44,i); cout<<"Desarrollado por ";
	sleep(3);
	system("cls");
	gotoxy(44,i); cout<<"Jos\x82 Valdez ";
	sleep(3);
	gotoxy(44,i); cout<<"Yanxmarco Chan      ";
	sleep(3);
	system("cls");
	gotoxy(44,i); cout<<"Junior Orme\xA4o    ";
	sleep(3);
	system("cls");
	gotoxy(44,i); cout<<"Jorge Bocanegra         ";
	sleep(3);
	system("cls");
	gotoxy(44,i); cout<<"En agradecimiento a";
	sleep(3);
	system("cls");
	gotoxy(43,i); cout<<"Miss. Yenny Sifuentes ";
	sleep(3);
	system("cls");
	Menu_principal();
}

//soundtracks-funciones

void coyote()
{
	char soundfile[] = "C:\coyote.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void intro_guerra()
{
	char soundfile[] = "C:\hogar.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void musica_principal()
{
	char soundfile[] = "C:\intro_menu_menus.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void victoria()
{
	char soundfile[] = "C:\gta.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void musica_niveles_memoria()
{
	char soundfile[] = "C:\Assasin_5.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void musica_intro_memoria()
{
	char soundfile[] = "C:\memoria.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";	
}

void musica_derrota()
{
	char soundfile[] = "C:\gameover.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_FILENAME | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void MusicaPerder(){
	char soundfile[] = "Trompeta.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_FILENAME | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}
void MusicaOpening(){
	char soundfile[] = "intro_flash.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}

void musica_creditos()
{
	char soundfile[] = "creditos2.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_LOOP | SND_ASYNC);
    gotoxy(0,0);cout<<" ";
}




//MEMORIA
void OcultarCursor() {
 CONSOLE_CURSOR_INFO cci = {100, FALSE};
 
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
void MostrarCursor() {
 CONSOLE_CURSOR_INFO cci = {10, TRUE};
 
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

//MENU PRINCIPAL DEL JUEGO DE MEMORIA
void Menu_memoria()
{	system("cls");
	marco_memoria();
	opciones_grande_memoria();
	cuadro_opciones();
	gotoxy(44,17);cout<<" 1.NIVELES";
    gotoxy(44,18);cout<<" 2.RETO";
    gotoxy(44,19);cout<<" 3.INSTRUCCIONES";
    gotoxy(44,20);cout<<" 4.REGRESAR AL MEN\xE9";
    gotoxy(44,21);cout<<"   DE JUEGOS";
    
    //SELECCIÃ“N DE MENÃš
	int x=42,y=17; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==17) {Niveles_memoria();} if (y==18) {reto_memoria();} if (y==19) {instrucciones_M();} if (y==20); {system("cls");Menu_principal();}}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=20) y++; else y=17; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=17) y--; else y=20; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}

}
//MENU DE LOS NIVELES DE MEMORIA
void Niveles_memoria()
{
	int opcion;
	system("cls");
	marco_memoria();
	niveles_grande();
	gotoxy(36,12);cout<<"1. F\xB5"<<"CIL";
	gotoxy(36,13);cout<<"2. MEDIO";
	gotoxy(36,14);cout<<"3. DIF\xD6"<<"CIL";
	gotoxy(36,15);cout<<"4. REGRESAR AL MEN\xE9 PRINCIPAL";
	
	//SELECCIÃ“N DE MENÃš
	int x=33,y=12; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==12) facil_M(); if (y==13) medio_M();; if (y==14) dificil_M(); if (y==15); {system("cls");Menu_memoria();}}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=15) y++; else y=12; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=12) y--; else y=15; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}	
}

//NIVEL FÃCIL - MEMORIA
void facil_M()
{	int nivel=5,numeros,p=0, m=2, k=2, regresar = 0, opciones2,selector=1;level=1;perdida=0;//VARIABLES UTILIZADAS
	int i,j;
	vidas=2;
	float respuesta[10][10],numero[10][10];//DECLARACION MATRICES
	musica_niveles_memoria();//INVOCACION DE SOUNDTRACK
		system("cls");
		marco_memoria();
		while(regresar!=1)//BUCLE PARA EL JUEGO
		{	if(vidas==0)
			{
				break;
			}
			switch(nivel)
			{
			case 1:
			{level_grande(nivel,selector);generando_numeros();tam=0;//INVOCACIÃ“N DE FUNCIONES Y USO DE UNA VARIABLE GLOBAL
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));//LLENADO DE NÃšMERO ALEATORIOS EN TABLAS
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			//LAMADO DE FUNCIONES PARA LLENAR TABLAS CON NUMEROS GRANDES
			NumeroGrande(numero,m,k);
			tabla_num(m);//TABLA DE NUMEROS
			Sleep(100);
			for(int s=5;s>=0;s--)//RELOJ - TIEMPO PARA EL MOSTRADO DE TABLAS
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);//
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 2:
			{level_grande(nivel,selector);generando_numeros();tam=0;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=4;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 3:
			{level_grande(nivel,selector);generando_numeros();tam=0;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=3;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 4:
			{level_grande(nivel,selector);generando_numeros();tam=0;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=3;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 5:
			{level_grande(nivel,selector);generando_numeros();tam=1;m=3;k=3;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			NumeroGrande(numero,m,k);
			tabla_num(m);
			for(int s=11;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			aumento=32;
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(43,4);cout<<"TU RESPUESTA";
			gotoxy(73,4);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";regresar=1;
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;trofeo_victoria(level);
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta.";
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
		}
		}
		system("cls"); derrota(level);
		
		

}

void medio_M()
{
	int nivel=1,numeros,p=0, m=2, k=2, regresar = 0, opciones2,selector=2;level=2;perdida=0;
	int i,j;
	float respuesta[10][10],numero[10][10];
	musica_niveles_memoria();
		system("cls");
		marco_memoria();
		while(regresar!=1)
		{	if(vidas==0)
			{
				break;
			}
			switch(nivel)
			{
			case 1:
			{level_grande(nivel,selector);generando_numeros();tam=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=2;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 2:
			{level_grande(nivel,selector);generando_numeros();tam=0;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=1;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 3:
			{level_grande(nivel,selector);generando_numeros();tam=0;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=0;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 4:
			{level_grande(nivel,selector);generando_numeros();tam=1;p=0;m=3;k=3;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=7;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 5:
			{level_grande(nivel,selector);generando_numeros();tam=1;m=3;k=3;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			NumeroGrande(numero,m,k);
			tabla_num(m);
			for(int s=11;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			aumento=32;
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(43,4);cout<<"TU RESPUESTA";
			gotoxy(73,4);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";regresar=1;
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;trofeo_victoria(level);
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta.";
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
		}
		}
		system("cls"); derrota(level);
		
}
void dificil_M()
{
	int nivel=1,numeros,p=0, m=3, k=3, regresar = 0, opciones2,selector=3;level=3;perdida=0;tam=1;
	int i,j;
	float respuesta[10][10],numero[10][10];
	musica_niveles_memoria();
		system("cls");
		marco_memoria();
		while(regresar!=1)
		{	if(vidas==0)
			{
				break;
			}
			switch(nivel)
			{
			case 1:
			{level_grande(nivel,selector);generando_numeros();
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=10;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 2:
			{level_grande(nivel,selector);generando_numeros();p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=9;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 3:
			{level_grande(nivel,selector);generando_numeros();p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=8;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 4:
			{level_grande(nivel,selector);generando_numeros();p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=7;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 5:
			{level_grande(nivel,selector);generando_numeros();tam=1;m=3;k=3;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			NumeroGrande(numero,m,k);
			tabla_num(m);
			for(int s=6;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			aumento=32;
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(43,4);cout<<"TU RESPUESTA";
			gotoxy(73,4);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";regresar=1;
			nivel=salir_avanzar(nivel);nivel++;if(vidas<10)vidas++;numeros=0;trofeo_victoria(level);
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta.";
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
		}
		}
		system("cls"); derrota(level);
			
}

void reto_memoria()
{	int nivel=1,numeros,p=0, m=3, k=3, regresar = 0, opciones2,selector=4;level=4;perdida=0;tam=1;
	int i,j;
	float respuesta[10][10],numero[10][10];
	musica_niveles_memoria();
		system("cls");
		marco_memoria();
		while(regresar!=1)
		{	if(vidas==0)
			{
				break;
			}
			switch(nivel)
			{
			case 1:
			{level_grande(nivel,selector);generando_numeros();
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=6;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 2:
			{level_grande(nivel,selector);generando_numeros();p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=5;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 3:
			{level_grande(nivel,selector);generando_numeros();p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=4;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 4:
			{level_grande(nivel,selector);generando_numeros();p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			
			srand(time(NULL));
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			
			NumeroGrande(numero,m,k);
			tabla_num(m);
			Sleep(100);
			for(int s=3;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			aumento=32;
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(40,5);cout<<"TU RESPUESTA";
			gotoxy(71,5);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta."<<endl;
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
			case 5:
			{level_grande(nivel,selector);generando_numeros();tam=1;m=3;k=3;p=0;
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			inicio(numero,m,k,tam);
			marco_memoria();cuadro_level(nivel,selector);vida(vidas);
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				numeros=0+rand()%10; 
				numero[i][j]=numeros;}
			}
			NumeroGrande(numero,m,k);
			tabla_num(m);
			for(int s=2;s>=0;s--)
			{
				reloj(s+1);sleep(1);	
			}
						
			borrar_num(numero,m,k);
			
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{
				respuesta[i][j]=10;
				}
			}
						
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";
			gotoxy(6,8);cout<<"Digite el n\xA3mero de:";
			MostrarCursor();
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
				cin>>respuesta[i][j];
				validar_respuesta2(respuesta,i,j,m,k);gotoxy(22,10);cout<<"  ";
				NumeroGrande(respuesta,m,k);
				}
			}
			OcultCursor();
			system("cls");
			cuadro_level(nivel,selector);
			vida(vidas);
			
			marco_memoria();
			NumeroGrande(respuesta,m,k);
			aumento=32;
			NumeroGrande_1D_2(numero,m,k);
			tabla_num(m);
			tabla_num2(m);
			gotoxy(43,4);cout<<"TU RESPUESTA";
			gotoxy(73,4);cout<<"TABLA INICIAL";
			for (i=0;i<m;i++)
			{	for(j=0;j<k;j++)
				{if(respuesta[i][j]==numero[i][j])
				p++;
			}
			}
				
			gotoxy(6,6);cout<<"\250Cu\xA0les fueron los n\xA3meros?";			
			if (p==(m*k))
			{gotoxy(7,9);cout<<"Respuesta correcta!!!";
			gotoxy(7,11);cout<<"NIVEL "<<nivel<<" COMPLETADO";regresar=1;
			nivel=salir_avanzar(nivel);nivel++;vidas++;numeros=0;trofeo_victoria(level);
			system("cls");
			}
			else
				{gotoxy(7,12);cout<<"Respuesta incorrecta.";
				vidas--;
				gotoxy(7,14);cout<<"Te queda(n) "<<vidas<<" vida(s)";numeros=0;p=0;vida(vidas);if (vidas==0)perdida=1;
				vidas=salir_reintentar(vidas+1);vidas--;
				system("cls");
				}
			break;}
		}
		}
		if (regresar == 0 && vidas==0)
			{system("cls"); derrota(level);
			}
		else
		{victoria();trofeo_victoria(level);
		}
	
	
}
void instrucciones_M()
{	
	system("cls");
	marco_memoria();

	gotoxy(15,4); cout<<" __  __ _  ____  ____  ____  _  _   ___   ___  __  __   __ _  ____  ____ ";
	gotoxy(15,5); cout<<"(  )(  ( \\/ ___)(_  _)(  _ \\/ )( \\ / __) / __)(  )/  \\ (  ( \\(  __)/ ___)";
	gotoxy(15,6); cout<<" )( /    /\\___ \\  )(   )   /) \\/ (( (__ ( (__  )((  O )/    / ) _) \\___ \\";
	gotoxy(15,7); cout<<"(__)\\_)__)(____/ (__) (__\\_)\\____/ \\___) \\___)(__)\\__/ \\_)__)(____)(____/";
	
	int x=12,y=9;
	gotoxy(x,y);cout<<"Memory  Trainer  es un  juego para entrenar  tu memoria.  El juego consiste en ";y=y+2;
	gotoxy(x,y);cout<<"mostrarte  tablas  con n\xA3meros  aleatorios  que van  del 0 al 9. T\xA3 misi\xA2n  es" ;y=y+2;
	gotoxy(x,y);cout<<"recordar  los n\xA3meros que se te ser\xA0n mostrados en pantalla por un determinado";y=y+2;
	gotoxy(x,y);cout<<"tiempo.  Luego se te pedir\xA0 que ingreses los n\xA3meros en orden. El orden es por  ";y=y+2;
	gotoxy(x,y);cout<<"filas,  terminando una fila se puede continuar a  la siguiente fila. Al inicio  ";y=y+2;
	gotoxy(x,y);cout<<"se te otorgar\xA0 dos vidas para que con cada respuesta correcta, esas vidas vayan ";y=y+2;
	gotoxy(x,y);cout<<"aumentando hasta un m\xA0ximo de 9.";
	
	
	//SALIR
	gotoxy(4,23); cout<<"\314";	//MARCO ARRIBA
	for(int i=5;i<15;i++){
		gotoxy(i,23);cout<<"\315";
	}
	
	gotoxy(15,23);cout<<"\273"; gotoxy(15,24);cout<<"\272";gotoxy(15,25);cout<<"\312";//DERECHA
	
	gotoxy(6,24);cout<<"<< ATR\xB5S ";
	
	
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) { Menu_memoria();}	
	if (tecla!=75) continue;
	}
    }

	
}


void NumeroGrande(float numero[][10],int fila,int columna)
{	
	int i=0,j=0,op;
	if (tam==1){
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<" |  |";
						gotoxy(40+(8*j),10+(5*i)); cout<<" |__|";
						break;
						
			case 1: 	gotoxy(40+(8*j),8+(5*i)); cout<<"   _ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"  / |";
						gotoxy(40+(8*j),10+(5*i)); cout<<"    |";
						break;
			
			case 2:    	gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"  __|";
						gotoxy(40+(8*j),10+(5*i)); cout<<" |__ ";
			            break;
						
			case 3:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"   _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  __|";
						break;
						
			case 4:		gotoxy(40+(8*j),8+(5*i)); cout<<"     ";
    					gotoxy(40+(8*j),9+(5*i)); cout<<" |__|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"    |";
						break;
						
			case 5:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
	 					gotoxy(40+(8*j),9+(5*i)); cout<<" |__ ";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  __|";
						break;
						
			case 6:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<" |__ ";
    					gotoxy(40+(8*j),10+(5*i)); cout<<" |__|";
						break;
						
			case 7:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"  __|";
    					gotoxy(40+(8*j),10+(5*i)); cout<<"    |";
						break; 
						
			case 8:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<" |__|";
    					gotoxy(40+(8*j),10+(5*i)); cout<<" |__|";
						break;
						
			case 9:     gotoxy(40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<" |__|";
    					gotoxy(40+(8*j),10+(5*i)); cout<<"    |";
						break;	
			case 10:	gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
								
		}
		}
	}
	}
	else
	{for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(40+(9*j),9+(5*i));  cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<" |  |";
						gotoxy(40+(9*j),11+(5*i)); cout<<" |__|";
						break;
						
			case 1: 	gotoxy(40+(9*j),9+(5*i));  cout<<"   _ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<"  / |";
						gotoxy(40+(9*j),11+(5*i)); cout<<"    |";
						break;
			
			case 2:    	gotoxy(40+(9*j),9+(5*i));  cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<"  __|";
						gotoxy(40+(9*j),11+(5*i)); cout<<" |__ ";
			            break;
						
			case 3:     gotoxy(40+(9*j),9+(5*i));  cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<"   _|";
						gotoxy(40+(9*j),11+(5*i)); cout<<"  __|";
						break;
						
			case 4:		gotoxy(40+(9*j),9+(5*i));  cout<<"     ";
    					gotoxy(40+(9*j),10+(5*i)); cout<<" |__|";
						gotoxy(40+(9*j),11+(5*i)); cout<<"    |";
						break;
						
			case 5:     gotoxy(40+(9*j),9+(5*i)); cout<<"  __ ";
	 					gotoxy(40+(9*j),10+(5*i)); cout<<" |__ ";
						gotoxy(40+(9*j),11+(5*i)); cout<<"  __|";
						break;
						
			case 6:     gotoxy(40+(9*j),9+(5*i)); cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<" |__ ";
    					gotoxy(40+(9*j),11+(5*i)); cout<<" |__|";
						break;
						
			case 7:     gotoxy(40+(9*j),9+(5*i)); cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<"  __|";
    					gotoxy(40+(9*j),11+(5*i)); cout<<"    |";
						break; 
						
			case 8:     gotoxy(40+(9*j),9+(5*i)); cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<" |__|";
    					gotoxy(40+(9*j),11+(5*i)); cout<<" |__|";
						break;
						
			case 9:     gotoxy(40+(9*j),9+(5*i)); cout<<"  __ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<" |__|";
    					gotoxy(40+(9*j),11+(5*i)); cout<<"    |";
						break;	
			case 10:	gotoxy(40+(9*j),9+(5*i)); cout<<" ___ ";
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|";
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
								
		}
		}
	}
	}
	
}

void marco_memoria()
{
	int i,j;
	OcultCursor();
	for(i=4;i<100;i++)  //PARA LAS LINEAS HORIZONTALES-arriba
	{
		gotoxy(i,1);cout<<"\315";
	}
	gotoxy (100,1);cout<<"\273";//ESQUINA SUPERIOR IZQUIERDA
	for(j=2;j<25;j++)  //PARA LAS LINEAS VERTICALES-derecha
    {
        gotoxy(100,j);cout<<"\272";
	}
	gotoxy (100,25);cout<<"\274";//ESQUINA INFERIOR DERECHA
	for(i=99;i>3;i--)  //PARA LAS LINEAS HORIZONTALES-abajo
	{
    	gotoxy(i,25);cout<<"\315";
	}
    gotoxy (4,25);cout<<"\310";
	for(j=24;j>1;j--)  //PARA LAS LINEAS VERTICALES-izquierda
	{
		gotoxy(4,j);cout<<"\272";
    }
    gotoxy (4,1);cout<<"\311";
    
}


void tabla_num(int m)
{
	int i,j;
	if(tam==0){
	for (i=0; i<m; i++)
	{gotoxy(32, 11+(4*i));cout<<"F ["<<i+1<<"]";} //FILAS Y NUMERO
	
	for (i=0; i<m; i++)
	{gotoxy(39+(10*i),7);cout<<"C ["<<i+1<<"]";} //COLUMNAS Y NUMERO
	
	for(i=37;i<56;i++)  //PARA LAS LINEAS HORIZONTALES-arriba
	{gotoxy(i,8);cout<<"\315";}
	
	gotoxy (55,8);cout<<"\273";//ESQUINA DERECHA - SUPERIOR
	
	for(j=9;j<18;j++)  //PARA LAS LINEAS VERTICALES - izquierda-inicio
    {
        gotoxy(37,j);cout<<"\272";
	}
	gotoxy (55,18);cout<<"\274"; //ESQUINA DERECHA - INFERIOR
	
	
	for(i=54;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - ABAJO
	{
    	gotoxy(i,18);cout<<"\315";
	}
    gotoxy (37,18);cout<<"\310";//PARA LA ESQUINA INFERIOR - IZQUIERDA
	
	for(j=17;j>8;j--)  //PARA LAS LINEAS VERTICALES - DERECHA
	{
		gotoxy(55,j);cout<<"\272";
    }
    gotoxy (37,8);cout<<"\311"; //PARA LA ESQUINA SUPERIOR - IZQUIERDA
    
    
	for(j=9;j<18;j++)  //PARA LAS LINEAS VERTICALES - MEDIO
    {
        gotoxy(46,j);cout<<"\272";
	}
	
	for(i=54;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - MEDIO
	{
    	gotoxy(i,13);cout<<"\315";
	}
	
	
	}

	else
	{
	for(i=0;i<m;i++)	
	{gotoxy(32, 9+(5*i));cout<<"F ["<<i+1<<"]";} //FILAS Y NUMERO
	
	for (i=0; i<m; i++)
	{gotoxy(39+(9*i),6);cout<<"C ["<<i+1<<"]";} //COLUMNAS Y NUMERO
	
			 
	for(i=37;i<62;i++)  //PARA LAS LINEAS HORIZONTALES-arriba
	{gotoxy(i,7);cout<<"\315";}
	
	gotoxy (62,7);cout<<"\273";//ESQUINA DERECHA - SUPERIOR
	
	for(j=8;j<22;j++)  //PARA LAS LINEAS VERTICALES - izquierda-inicio
    {
        gotoxy(37,j);cout<<"\272";
	}
	gotoxy (62,22);cout<<"\274"; //ESQUINA DERECHA - INFERIOR
	
	
	for(i=61;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - ABAJO
	{
    	gotoxy(i,22);cout<<"\315";
	}
    gotoxy (37,22);cout<<"\310";//PARA LA ESQUINA INFERIOR - IZQUIERDA
	
	for(j=21;j>7;j--)  //PARA LAS LINEAS VERTICALES - DERECHA
	{
		gotoxy(62,j);cout<<"\272";
    }
    gotoxy (37,7);cout<<"\311"; //PARA LA ESQUINA SUPERIOR - IZQUIERDA
    
    
	for(j=8;j<22;j++)  //PARA LAS LINEAS VERTICALES - MEDIO1
    {
        gotoxy(46,j);cout<<"\272";
	}
	
	for(i=61;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - MEDIO1
	{
    	gotoxy(i,12);cout<<"\315";
	}
	
	for(j=8;j<22;j++)  //PARA LAS LINEAS VERTICALES - MEDIO2
    {
        gotoxy(54,j);cout<<"\272";
	}
	
	for(i=61;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - MEDIO2
	{
    	gotoxy(i,17);cout<<"\315";
	}
	}
}

void borrar_num(float numero[][10],int fila,int columna)
{	
	int i=0,j=0,op;
	int x=72,y=11;
	gotoxy(x,y); cout<<"    _____     ";y++;
	gotoxy(x,y); cout<<"   |  _  |    ";y++;
	gotoxy(x,y); cout<<"   | | | |    ";y++;
	gotoxy(x,y); cout<<"   | | | |    ";y++;
	gotoxy(x,y); cout<<"   | |_| |    ";y++;
	gotoxy(x,y); cout<<"   |_____|    ";
							

	if(tam==1){
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 1: 	gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
			
			case 2:    	gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 3:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 4:		gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 5:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 6:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 7:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break; 
						
			case 8:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 9:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;		
		}
		}
	}
	}
	else
	{
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 1: 	gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
			
			case 2:    	gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 3:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 4:		gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 5:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 6:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 7:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break; 
						
			case 8:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 9:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;		
		}
		}
	}
	}
}

void reloj(int segundos)
{	
	
	gotoxy(75,10);cout<<"TIEMPO";
	Beep(300,100);
	int x=72,y=11;
	switch (segundos)
	{
	       	case 0:     gotoxy(x,y); cout<<"    _____     ";y++;
						gotoxy(x,y); cout<<"   |  _  |    ";y++;
						gotoxy(x,y); cout<<"   | | | |    ";y++;
						gotoxy(x,y); cout<<"   | | | |    ";y++;
						gotoxy(x,y); cout<<"   | |_| |    ";y++;
						gotoxy(x,y); cout<<"   |_____|    ";
						break;
						
			case 1: 	gotoxy(x,y); cout<<"     __       ";y++;
						gotoxy(x,y); cout<<"    /  |      ";y++;
						gotoxy(x,y); cout<<"   /_  |      ";y++;
						gotoxy(x,y); cout<<"     | |      ";y++;
						gotoxy(x,y); cout<<"     | |      ";y++;
						gotoxy(x,y); cout<<"     |_|      ";y++;
						break;
			
			case 2:    	gotoxy(x,y); cout<<"    ____      ";y++;
						gotoxy(x,y); cout<<"   / __ |     ";y++;
						gotoxy(x,y); cout<<"   |/ / /     ";y++;
						gotoxy(x,y); cout<<"     / /      ";y++;
						gotoxy(x,y); cout<<"    / /_      ";y++;
						gotoxy(x,y); cout<<"   /____|     ";
			            break;
						
			case 3:     gotoxy(x,y); cout<<"   _____      ";y++;
						gotoxy(x,y); cout<<"  |____ \\    ";y++;
						gotoxy(x,y); cout<<"    ___| |    ";y++;
						gotoxy(x,y); cout<<"   |___ <     ";y++;
						gotoxy(x,y); cout<<"   ____| |    ";y++;
						gotoxy(x,y); cout<<"  |_____/     ";
						break;
						
			case 4:		gotoxy(x,y); cout<<"   _   _      ";y++;
						gotoxy(x,y); cout<<"  | | | |     ";y++;
    					gotoxy(x,y); cout<<"  | |_| |_    ";y++;
						gotoxy(x,y); cout<<"  |___   _|   ";y++;
						gotoxy(x,y); cout<<"      | |     ";y++;
						gotoxy(x,y); cout<<"      |_|     ";
						break;
						
			case 5:     gotoxy(x,y); cout<<"   _______    ";y++;
	 					gotoxy(x,y); cout<<"  |  _____|   ";y++;
						gotoxy(x,y); cout<<"  | |_____    ";y++;
						gotoxy(x,y); cout<<"  |_____  \\   ";y++;
    					gotoxy(x,y); cout<<"   _____| |   ";y++;
						gotoxy(x,y); cout<<"  |_______/   ";
						break;
						
			case 6:     gotoxy(x,y); cout<<"    _____     ";y++;
						gotoxy(x,y); cout<<"   / ____|    ";y++;
    					gotoxy(x,y); cout<<"  / /____     ";y++;
						gotoxy(x,y); cout<<"  |  __  \\   ";y++;
						gotoxy(x,y); cout<<"  | |__| |    ";y++;
						gotoxy(x,y); cout<<"  \\______/   ";
						break;
						
			case 7:     gotoxy(x,y); cout<<"   _______    ";y++;
						gotoxy(x,y); cout<<"  |____   |   ";y++;
    					gotoxy(x,y); cout<<"       / /    ";y++;
						gotoxy(x,y); cout<<"      / /     ";y++;
						gotoxy(x,y); cout<<"     / /      ";y++;
						gotoxy(x,y); cout<<"    /_/       ";
						break; 
						
			case 8:     gotoxy(x,y); cout<<"    _____     ";y++;
						gotoxy(x,y); cout<<"   / ___ \\   ";y++;
    					gotoxy(x,y); cout<<"  | |___| |   ";y++;
						gotoxy(x,y); cout<<"   > ___ <    ";y++;
						gotoxy(x,y); cout<<"  | |___| |   ";y++;
						gotoxy(x,y); cout<<"   \\_____/   ";
						break;
						
			case 9:     gotoxy(x,y); cout<<"    _____      ";y++;
						gotoxy(x,y); cout<<"   / ___ \\    ";y++;
    					gotoxy(x,y); cout<<"  | |___| |     ";y++;
						gotoxy(x,y); cout<<"   \\____ |    ";y++;
						gotoxy(x,y); cout<<"    ____| |    ";y++;
						gotoxy(x,y); cout<<"   |_____/     ";
						break;
						
			case 10:	gotoxy(x,y); cout<<"   __   _____ ";y++;
						gotoxy(x,y); cout<<"  /  | |  _  |";y++;
						gotoxy(x,y); cout<<" /_  | | | | |";y++;
						gotoxy(x,y); cout<<"   | | | | | |";y++;
						gotoxy(x,y); cout<<"   | | | |_| |";y++;
						gotoxy(x,y); cout<<"   |_| |_____|";y++;
						break;	
			
			case 11:	gotoxy(x,y); cout<<"   __    __   ";y++;
						gotoxy(x,y); cout<<"  /  |  /  |  ";y++;
						gotoxy(x,y); cout<<" /_  | /_  |  ";y++;
						gotoxy(x,y); cout<<"   | |   | |  ";y++;
						gotoxy(x,y); cout<<"   | |   | |  ";y++;
						gotoxy(x,y); cout<<"   |_|   |_|  ";y++;
						break;
						
			case 12:	gotoxy(x,y); cout<<"   __   ____   ";y++;
						gotoxy(x,y); cout<<"  /  | / __ |  ";y++;
						gotoxy(x,y); cout<<" /_  | |/ / /  ";y++;
						gotoxy(x,y); cout<<"   | |   / /   ";y++;
						gotoxy(x,y); cout<<"   | |  / /_   ";y++;
						gotoxy(x,y); cout<<"   |_| /____|  ";y++;
						break;
	}
}

void tabla_num2(int m)
{
	int i,j;
	if (tam==0){
	for (i=0; i<m; i++)
	{gotoxy(30+aumento, 11+(4*i));cout<<"F ["<<i+1<<"]";} //FILAS Y NUMERO
	
	for (i=0; i<m; i++)
	{gotoxy(aumento+38+(9*i),7);cout<<"C ["<<i+1<<"]";} //COLUMNAS Y NUMERO
	
	for(i=35;i<54;i++)  //PARA LAS LINEAS HORIZONTALES-arriba
	{gotoxy(i+aumento,8);cout<<"\315";}
	
	gotoxy (53+aumento,8);cout<<"\273";//ESQUINA DERECHA - SUPERIOR
	
	for(j=9;j<18;j++)  //PARA LAS LINEAS VERTICALES - izquierda-inicio
    {
        gotoxy(35+aumento,j);cout<<"\272";
	}
	gotoxy (53+aumento,18);cout<<"\274"; //ESQUINA DERECHA - INFERIOR
	
	
	for(i=52;i>35;i--)  //PARA LAS LINEAS HORIZONTALES - ABAJO
	{
    	gotoxy(i+aumento,18);cout<<"\315";
	}
    gotoxy (35+aumento,18);cout<<"\310";//PARA LA ESQUINA INFERIOR - IZQUIERDA
	
	for(j=17;j>8;j--)  //PARA LAS LINEAS VERTICALES - DERECHA
	{
		gotoxy(53+aumento,j);cout<<"\272";
    }
    gotoxy (35+aumento,8);cout<<"\311"; //PARA LA ESQUINA SUPERIOR - IZQUIERDA
    
    
	for(j=9;j<18;j++)  //PARA LAS LINEAS VERTICALES - MEDIO
    {
        gotoxy(44+aumento,j);cout<<"\272";
	}
	
	for(i=52;i>35;i--)  //PARA LAS LINEAS HORIZONTALES - MEDIO
	{
    	gotoxy(i+aumento,13);cout<<"\315";
	}
	
	
	}
	else{
	for (i=0; i<m; i++)
	{gotoxy(32+aumento, 9+(5*i));cout<<"F ["<<i+1<<"]";} //FILAS Y NUMERO
	
	for (i=0; i<m; i++)
	{gotoxy(aumento+40+(9*i),6);cout<<"C ["<<i+1<<"]";} //COLUMNAS Y NUMERO
	
	{for(i=37;i<62;i++)  //PARA LAS LINEAS HORIZONTALES-arriba
	{gotoxy(i+aumento,7);cout<<"\315";}
	
	gotoxy (62+aumento,7);cout<<"\273";//ESQUINA DERECHA - SUPERIOR
	
	for(j=8;j<22;j++)  //PARA LAS LINEAS VERTICALES - izquierda-inicio
    {
        gotoxy(37+aumento,j);cout<<"\272";
	}
	gotoxy (62+aumento,22);cout<<"\274"; //ESQUINA DERECHA - INFERIOR
	
	
	for(i=61;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - ABAJO
	{
    	gotoxy(i+aumento,22);cout<<"\315";
	}
    gotoxy (37+aumento,22);cout<<"\310";//PARA LA ESQUINA INFERIOR - IZQUIERDA
	
	for(j=21;j>7;j--)  //PARA LAS LINEAS VERTICALES - DERECHA
	{
		gotoxy(62+aumento,j);cout<<"\272";
    }
    gotoxy (37+aumento,7);cout<<"\311"; //PARA LA ESQUINA SUPERIOR - IZQUIERDA
    
    
	for(j=8;j<22;j++)  //PARA LAS LINEAS VERTICALES - MEDIO1
    {
        gotoxy(46+aumento,j);cout<<"\272";
	}
	
	for(i=61;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - MEDIO1
	{
    	gotoxy(i+aumento,12);cout<<"\315";
	}
	
	for(j=8;j<22;j++)  //PARA LAS LINEAS VERTICALES - MEDIO2
    {
        gotoxy(54+aumento,j);cout<<"\272";
	}
	
	for(i=61;i>37;i--)  //PARA LAS LINEAS HORIZONTALES - MEDIO2
	{
    	gotoxy(i+aumento,17);cout<<"\315";
	}
	}
	}
}

void NumeroGrande_1D_2(float numero[][10],int fila,int columna)
{	
	int i=0,j=0,op;
	if(tam==0){
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<" |  |";
						gotoxy(aumento+38+(8*j),11+(5*i)); cout<<" |__|";
						break;
						
			case 1: 	gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"   _ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<"  / |";
						gotoxy(aumento+38+(8*j),11+(5*i)); cout<<"    |";
						break;
			
			case 2:    	gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<"  __|";
						gotoxy(aumento+38+(8*j),11+(5*i)); cout<<" |__ ";
			            break;
						
			case 3:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<"   _|";
						gotoxy(aumento+38+(8*j),11+(5*i)); cout<<"  __|";
						break;
						
			case 4:		gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"     ";
    					gotoxy(aumento+38+(8*j),10+(5*i)); cout<<" |__|";
						gotoxy(aumento+38+(8*j),11+(5*i)); cout<<"    |";
						break;
						
			case 5:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
	 					gotoxy(aumento+38+(8*j),10+(5*i)); cout<<" |__ ";
						gotoxy(aumento+38+(8*j),11+(5*i)); cout<<"  __|";
						break;
						
			case 6:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<" |__ ";
    					gotoxy(aumento+38+(8*j),11+(5*i)); cout<<" |__|";
						break;
						
			case 7:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<"  __|";
    					gotoxy(aumento+38+(8*j),11+(5*i)); cout<<"    |";
						break; 
						
			case 8:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<" |__|";
    					gotoxy(aumento+38+(8*j),11+(5*i)); cout<<" |__|";
						break;
						
			case 9:     gotoxy(aumento+38+(8*j),9+(5*i)); cout<<"  __ ";
						gotoxy(aumento+38+(8*j),10+(5*i)); cout<<" |__|";
    					gotoxy(aumento+38+(8*j),11+(5*i)); cout<<"    |";
						break;	
			
								
		}
		}
	}
	}
	else{
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<" |  |";
						gotoxy(aumento+40+(8*j),10+(5*i)); cout<<" |__|";
						break;
						
			case 1: 	gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"   _ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<"  / |";
						gotoxy(aumento+40+(8*j),10+(5*i)); cout<<"    |";
						break;
			
			case 2:    	gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<"  __|";
						gotoxy(aumento+40+(8*j),10+(5*i)); cout<<" |__ ";
			            break;
						
			case 3:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<"   _|";
						gotoxy(aumento+40+(8*j),10+(5*i)); cout<<"  __|";
						break;
						
			case 4:		gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"     ";
    					gotoxy(aumento+40+(8*j),9+(5*i)); cout<<" |__|";
						gotoxy(aumento+40+(8*j),10+(5*i)); cout<<"    |";
						break;
						
			case 5:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
	 					gotoxy(aumento+40+(8*j),9+(5*i)); cout<<" |__ ";
						gotoxy(aumento+40+(8*j),10+(5*i)); cout<<"  __|";
						break;
						
			case 6:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<" |__ ";
    					gotoxy(aumento+40+(8*j),10+(5*i)); cout<<" |__|";
						break;
						
			case 7:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<"  __|";
    					gotoxy(aumento+40+(8*j),10+(5*i)); cout<<"    |";
						break; 
						
			case 8:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<" |__|";
    					gotoxy(aumento+40+(8*j),10+(5*i)); cout<<" |__|";
						break;
						
			case 9:     gotoxy(aumento+40+(8*j),8+(5*i)); cout<<"  __ ";
						gotoxy(aumento+40+(8*j),9+(5*i)); cout<<" |__|";
    					gotoxy(aumento+40+(8*j),10+(5*i)); cout<<"    |";
						break;	
			
								
		}
		}
	}
	}
}

void cuadro_level(int nivel,int selector)
{
	int i,j;
	switch(selector)
	{
		case 1: {gotoxy(8,3);cout<<"NIVEL "<<nivel<<" - F\xB5"<<"CIL";
				break;}
		case 2:{gotoxy(8,3);cout<<"NIVEL "<<nivel<<" - MEDIO";
				break;
				}
		case 3: {gotoxy(8,3);cout<<"NIVEL "<<nivel<<" - DIF\xD6"<<"CIL";
				break;
				}
		case 4:{gotoxy(8,3);cout<<"NIVEL "<<nivel<<" - RETO";
				break;
				}
				
	}
	
	
	for(i=6;i<24;i++)  //PARA LAS LINEAS HORIZONTALES-arriba
	{gotoxy(i,2);cout<<"\315";}
	
	gotoxy (24,2);cout<<"\273";//ESQUINA DERECHA - SUPERIOR
	
	for(j=2;j<4;j++)  //PARA LAS LINEAS VERTICALES - izquierda-inicio
    {
        gotoxy(6,j);cout<<"\272";
	}
	gotoxy (24,4);cout<<"\274"; //ESQUINA DERECHA - INFERIOR
	
	
	for(i=23;i>5;i--)  //PARA LAS LINEAS HORIZONTALES - ABAJO
	{
    	gotoxy(i,4);cout<<"\315";
	}
    gotoxy (6,4);cout<<"\310";//PARA LA ESQUINA INFERIOR - IZQUIERDA
	
	for(j=3;j>2;j--)  //PARA LAS LINEAS VERTICALES - DERECHA
	{
		gotoxy(24,j);cout<<"\272";
    }
    gotoxy (6,2);cout<<"\311"; //PARA LA ESQUINA SUPERIOR - IZQUIERDA

}


void validar_respuesta2(float respuesta[][10],int i, int j, int m, int k)
{
	while (respuesta[i][j]<0 || respuesta[i][j]>9 || respuesta[i][j]-int(respuesta[i][j])!=0)
	{
		gotoxy(22,10);cout<<"        ";
		gotoxy(6,24);cout<<"NOTA: DEBE ESCRIBIR NUMEROS ENTEROS DE 0 A 9";
		sleep(2);
		gotoxy(6,24);cout<<"                                             ";
		gotoxy(6,10);cout<<"F ["<<i+1<<"] - C ["<<j+1<<"] : ";
		cin>>respuesta[i][j];		
	}
	
	
}

void niveles_grande()
{
	gotoxy(16,3);cout<<" .__   __.  __  ____    ____  _______  __       _______      _______.";
	gotoxy(16,4);cout<<" |  "<<"\\"<<" |  | |  | "<<"\\"<<"   "<<"\\"<<"  /   / |   ____||  |     |   ____|    /       |";
	gotoxy(16,5);cout<<" |   "<<"\\"<<"|  | |  |  "<<"\\"<<"   "<<"\\"<<"/   /  |  |__   |  |     |  |__      |   (----`";
	gotoxy(16,6);cout<<" |  . `  | |  |   "<<"\\"<<"      /   |   __|  |  |     |   __|      "<<"\\"<<"   "<<"\\ ";
	gotoxy(16,7);cout<<" |  |"<<"\\"<<"   | |  |    "<<"\\"<<"    /    |  |____ |  `----.|  |____ .----)   |";
	gotoxy(16,8);cout<<" |__| "<<"\\"<<"__| |__|     "<<"\\"<<"__/     |_______||_______||_______||_______/ ";
}

void instrucciones_movimiento()
{
	gotoxy(8,11);cout<<"Teclas de navegaci\xA2n: ";
	
	gotoxy(10,13);cout<<" /\\";   
    gotoxy(10,14);cout<<"/  \\";
    gotoxy(10,15);cout<<" || ";
    gotoxy(10,16);cout<<" || ";
    gotoxy(9,18);cout<<"ARRIBA";
   								    
    gotoxy(19,13);cout<<" || ";
	gotoxy(19,14);cout<<" || ";
    gotoxy(19,15);cout<<"\\  /";
    gotoxy(19,16);cout<<" \\/ ";
    gotoxy(19,18);cout<<"ABAJO";
    
    gotoxy(13,20);cout<<" ___'.";
    gotoxy(13,21);cout<<" --- .'";
	gotoxy(13,22);cout<<"    ' ";
	
	gotoxy(12,23);cout<<"SELECCI\xE0N";
    
}

void generando_numeros()
{	marco_memoria();
	{gotoxy(10,5);cout<<"  ___  ____  __ _  ____  ____   __   __ _  ____   __  ";
	gotoxy(10,6);cout<<" / __)(  __)(  ( \\(  __)(  _ \\ / _\\ (  ( \\(    \\ /  \\ ";
	gotoxy(10,7);cout<<"( (_ \\ ) _) /    / ) _)  )   //    \\/    / ) D ((  O ) ";
	gotoxy(10,8);cout<<" \\___/(____)\\_)__)(____)(__\\_)\\_/\\_/\\_)__)(____/ \\__/  ";
	gotoxy(35,10);cout<<" __ _  _  _  _  _  ____  ____   __   ____ ";
	gotoxy(35,11);cout<<"(  ( \\/ )( \\( \\/ )(  __)(  _ \\ /  \\ / ___)";
	gotoxy(35,12);cout<<"/    /) \\/ (/ \\/ \\ ) _)  )   /(  O )\\___ \\  _     _     _ ";
	gotoxy(35,13);cout<<"\\_)__)\\____/\\_)(_/(____)(__\\_) \\__/ (____/ (_)   (_)   (_)";}
	for (int i=3;i>=0;i--)
	{	
		switch (i)
		{
	    case 0:     gotoxy(50,15); cout<<"  _____ ";
					gotoxy(50,16); cout<<" |  _  |";
					gotoxy(50,17); cout<<" | | | |";
					gotoxy(50,18);cout<<" | | | |";
					gotoxy(50,19);cout<<" | |_| |";
					gotoxy(50,20);cout<<" |_____|";
					break;
		case 1: 	gotoxy(50,15); cout<<"   __   ";
					gotoxy(50,16); cout<<"  /  |  ";
					gotoxy(50,17); cout<<" /_  |  ";
					gotoxy(50,18);cout<<"   | |  ";
					gotoxy(50,19);cout<<"   | |  ";
					gotoxy(50,20);cout<<"   |_|  ";
					break;
			
		case 2:    	gotoxy(50,15); cout<<"  ____   ";
					gotoxy(50,16); cout<<" / __ |  ";
					gotoxy(50,17); cout<<" |/ / /  ";
					gotoxy(50,18);cout<<"   / /   ";
					gotoxy(50,19);cout<<"  / /_   ";
					gotoxy(50,20);cout<<" /____|  ";
		            break;
						
		case 3:     gotoxy(50,15); cout<<" _____   ";
					gotoxy(50,16); cout<<"|____ \\ ";
					gotoxy(50,17); cout<<"  ___| | ";
					gotoxy(50,18);cout<<" |___ <  ";
					gotoxy(50,19);cout<<" ____| | ";
					gotoxy(50,20);cout<<"|_____/  ";
					break;
		}
		Beep(400,100);sleep(1);
	}
	system("cls");
}

void vida(int vidas)
{
	gotoxy(26,3);cout<<"VIDAS ";
	gotoxy(31,2);cout<<" .-.-.";
	gotoxy(31,3);cout<<" . "<<vidas<<" .";
 	gotoxy(31,4);cout<<"  *.* ";
}

void level_grande(int nivel, int level)
{	marco_memoria();
	switch(level)
	{
		case 1: {gotoxy(30,5); cout<<" _______  _______  _______ _________ _         ";      
				gotoxy(30,6); cout<<"(  ____ \\(  ___  )(  ____ \\\\__   __/( \\      ";      
				gotoxy(30,7); cout<<"| (    \\/| (   ) || (    \\/   ) (   | (        ";      
				gotoxy(30,8); cout<<"| (__    | (___) || |         | |   | |         ";      
				gotoxy(30,9); cout<<"|  __)   |  ___  || |         | |   | |        ";      
				gotoxy(30,10);cout<<"| (      | (   ) || |         | |   | |        ";      
				gotoxy(30,11);cout<<"| )      | )   ( || (____/\\___) (___| (____/\\";
				gotoxy(30,12);cout<<"|/       |/     \\|(_______/\\_______/(_______/";

				gotoxy(43,2);cout<<"  __";
				gotoxy(43,3);cout<<" / /";
				gotoxy(43,4);cout<<"|_/";
				break;}
		case 2: {gotoxy(30,5);  cout<<" _______  _______  ______  _________ _______ ";
				gotoxy(30,6);  cout<<"(       )(  ____ \\(  __  \\ \\__   __/(  ___  )";
				gotoxy(30,7);  cout<<"| () () || (    \\/| (  \\  )   ) (   | (   ) |";
				gotoxy(30,8);  cout<<"| || || || (__    | |   ) |   | |   | |   | |";
				gotoxy(30,9);  cout<<"| |(_)| ||  __)   | |   | |   | |   | |   | |";
				gotoxy(30,10); cout<<"| |   | || (      | |   ) |   | |   | |   | |";
				gotoxy(30,11); cout<<"| )   ( || (____/\\| (__/  )___) (___| (___) |";
				gotoxy(30,12); cout<<"|/     \\|(_______/(______/ \\_______/(_______)";	
				break;}
				
		case 3: {gotoxy(20,5);  cout<<" ______  _________ _______ _________ _______ _________ _  ";     
				gotoxy(20,6);  cout<<"(  __  \\ \\__   __/(  ____ \\\\__   __/(  ____ \\\\__   __/( \\   ";   
				gotoxy(20,7);  cout<<"| (  \\  )   ) (   | (    \\/   ) (   | (    \\/   ) (   | (    "; 
				gotoxy(20,8);  cout<<"| |   ) |   | |   | (__       | |   | |         | |   | |   ";   
				gotoxy(20,9);  cout<<"| |   | |   | |   |  __)      | |   | |         | |   | |     "; 
				gotoxy(20,10);  cout<<"| |   ) |   | |   | (         | |   | |         | |   | |      ";
				gotoxy(20,11);  cout<<"| (__/  )___) (___| )      ___) (___| (____/\\___) (___| (____/\\";
				gotoxy(20,12);  cout<<"(______/ \\_______/|/       \\_______/(_______/\\_______/(_______/";

				gotoxy(50,2);cout<<"  __";
				gotoxy(50,3);cout<<" / /";
				gotoxy(50,4);cout<<"|_/"; break;}
				
		case 4: {int x=35,y=5;
				gotoxy(x,y);cout<<" _______  _______ _________ _______ ";y++;
				gotoxy(x,y);cout<<"(  ____ )(  ____ \\\\__   __/(  ___  )";y++;
				gotoxy(x,y);cout<<"| (    )|| (    \\/   ) (   | (   ) |";y++;
				gotoxy(x,y);cout<<"| (____)|| (__       | |   | |   | |";y++;
				gotoxy(x,y);cout<<"|     __)|  __)      | |   | |   | |";y++;
				gotoxy(x,y);cout<<"| (\\ (   | (         | |   | |   | |";y++;
				gotoxy(x,y);cout<<"| ) \\ \\__| (____/\\   | |   | (___) |";y++;
				gotoxy(x,y);cout<<"|/   \\__/(_______/   )_(   (_______)";
				
			break;}
                                    	
		
	}

	{gotoxy(20,15); cout<<" _       _________          _______  _                  ";
	gotoxy(20,16); cout<<"( (    /|\\__   __/|\\     /|(  ____ \\( \\                 ";
	gotoxy(20,17); cout<<"|  \\  ( |   ) (   | )   ( || (    \\/| (                 ";
	gotoxy(20,18); cout<<"|   \\ | |   | |   | |   | || (__    | |         _____   ";
	gotoxy(20,19); cout<<"| (\\ \\) |   | |   ( (   ) )|  __)   | |        (_____)  ";
	gotoxy(20,20); cout<<"| | \\   |   | |    \\ \\_/ / | (      | |                 ";
	gotoxy(20,21); cout<<"| )  \\  |___) (___  \\   /  | (____/\\| (____/\\           ";
	gotoxy(20,22); cout<<"|/    )_)\\_______/   \\_/   (_______/(_______/           ";}

	switch(nivel)
	{
		case 1: {gotoxy(75,15); cout<<"  __";
				gotoxy(75,16); cout<<" /  \\ "; 
				gotoxy(75,17); cout<<" \\/) )"; 
				gotoxy(75,18); cout<<"   | | ";
				gotoxy(75,19); cout<<"   | | ";
				gotoxy(75,20); cout<<"   | | ";
				gotoxy(75,21); cout<<" __) (_";
				gotoxy(75,22); cout<<" \\____/";
				break;}
		case 2:{gotoxy(75,15); cout<<" _______ ";
				gotoxy(75,16); cout<<"/ ___   )";
				gotoxy(75,17); cout<<"\\/   )  |";
				gotoxy(75,18); cout<<"    /   )",
				gotoxy(75,19); cout<<"  _/   / ";
				gotoxy(75,20); cout<<" /   _/  ";
				gotoxy(75,21); cout<<"(   (__/\\";
				gotoxy(75,22); cout<<"\\_______/";
				break;}
		case 3: {gotoxy(75,15); cout<<" ______  ";
				gotoxy(75,16); cout<<"/ ___  \\ ";
				gotoxy(75,17); cout<<"\\/   \\  \\";
				gotoxy(75,18); cout<<"   ___) /";
				gotoxy(75,19); cout<<"  (___ ( ";
				gotoxy(75,20); cout<<"      ) \\",
				gotoxy(75,21); cout<<"/\\___/  /";
				gotoxy(75,22); cout<<"\\______/ ";
				break;}
				
		case 4:{gotoxy(75,15); cout<<"    ___   ";
				gotoxy(75,16); cout<<"   /   )  ";
				gotoxy(75,17); cout<<"  / /) |  ";
				gotoxy(75,18); cout<<" / (_) (_ ";
				gotoxy(75,19); cout<<"(____   _)";
				gotoxy(75,20); cout<<"     ) (  ";
				gotoxy(75,21); cout<<"     | |  ";
				gotoxy(75,22); cout<<"     (_)";
			break;}
			
		case 5:{gotoxy(75,15); cout<<" _______ ";
				gotoxy(75,16); cout<<"(  ____ \\";
				gotoxy(75,17); cout<<"| (    \\/";
				gotoxy(75,18); cout<<"| (____  ";
				gotoxy(75,19); cout<<"(_____ \\  ";
				gotoxy(75,20); cout<<"      ) )";
				gotoxy(75,21); cout<<"/\\____) )";
				gotoxy(75,22); cout<<"\\______/ ";
			break;	}
	}
	sleep(3);system("cls");

}

void cuadro_opciones()
{
	int i,j;
	for(i=37;i<64;i++)  //PARA LAS LINEAS HORIZONTALES - ARRIBA
	{
		gotoxy(i,15);cout<<"\315";
	}
	
	for(j=16;j<23;j++)  //PARA LAS LINEAS VERTICALES - DERECHA
    {
        gotoxy(64,j);cout<<"\272";
	}
	
	for(i=37;i<64;i++)  //PARA LAS LINEAS HORIZONTALES -ABAJO
	{
    	gotoxy(i,23);cout<<"\315";
	}
    
	for(j=16;j<23;j++)  //PARA LAS LINEAS VERTICALES - IZQUIERDA
	{
		gotoxy(37,j);cout<<"\272";
    }
    
    
    gotoxy (64,15);cout<<"\273";//ESQUINA SUPERIOR DERECHA
    gotoxy (64,23);cout<<"\274";//ESQUINA INFERIOR DERECHA
    gotoxy (37,23);cout<<"\310";//ESQUINA INFERIOR IZQUIERDA
    gotoxy (37,15);cout<<"\311";//ESQUINA SUPERIOR DERECHA
}

void opciones_grande_memoria()
{
	gotoxy(21,3);cout<<"    __  ___    ______    _   __   __  __       ____     ______    ";
	gotoxy(21,4);cout<<"   /  |/  /   / ____/   / | / /  / / / /      / __ \\   / ____/   ";
	gotoxy(21,5);cout<<"  / /|_/ /   / __/     /  |/ /  / / / /      / / / /  / __/        ";
	gotoxy(21,6);cout<<" / /  / /   / /___    / /|  /  / /_/ /      / /_/ /  / /___     ";
	gotoxy(21,7);cout<<"/_/  /_/   /_____/   /_/ |_/   \\____/      /_____/  /_____/  ";
 	
	gotoxy(18,9); cout<<"   ____     ____    ______    ____   ____     _   __    ______   _____";
	gotoxy(18,10);cout<<"  / __ \\   / __ \\  / ____/   /  _/  / __ \\   / | / /   / ____/  / ___/";
	gotoxy(18,11);cout<<" / / / /  / /_/ / / /        / /   / / / /  /  |/ /   / __/     \\__ \\ ";
	gotoxy(18,12);cout<<"/ /_/ /  / ____/ / /___    _/ /   / /_/ /  / /|  /   / /___    ___/ / ";
	gotoxy(18,13);cout<<"\\____/  /_/      \\____/   /___/   \\____/  /_/ |_/   /_____/   /____/  ";
	
	gotoxy(57,2);cout<<" _";
	gotoxy(57,3);cout<<"|/ ";
}

void animacion_memoria()
{	system("title MEMORY TRAINER");
	musica_intro_memoria();
	int i,j;
	string nombre;
	for(i=4,j=100;i<50,j>50;i++,j--)  //PARA LAS LINEAS HORIZONTALES-arriba
	{
		gotoxy(i,1);cout<<"\315";gotoxy(j,1);cout<<"\315";Sleep(15);
		
	}
	gotoxy (100,1);cout<<"\273";//ESQUINA SUPERIOR IZQUIERDA
	gotoxy (4,1);cout<<"\311";
	for(j=2;j<25;j++)  //PARA LAS LINEAS VERTICALES-derecha-izquierda
    {
        gotoxy(100,j);cout<<"\272";gotoxy(4,j);cout<<"\272";Sleep(20);
	}
	gotoxy (4,25);cout<<"\310";
	gotoxy (100,25);cout<<"\274";//ESQUINA INFERIOR DERECHA
	
	for(i=99,j=5;i>53,j<53;i--,j++)  //PARA LAS LINEAS HORIZONTALES-abajo
	{
    	gotoxy(i,25);cout<<"\315";gotoxy(j,25);cout<<"\315";Sleep(15);
	}
	letras_grandes(); 
	
	gotoxy(35,22);sleep(2);system("cls");nombre=nombre_memoria();
	
	Menu_memoria();
		
	  
    
}

void letras_grandes()
{
	int color;
	
	int i=0,x=0,y=0;
	do
	{srand(time(NULL));
	color=0+rand()%5;
	switch(color)
	{
		case 0:{system("color 01");
			break;
		}
		case 1:{system("color 02");
			break;
		}
		case 2:{system("color 03");
			break;
		}
		case 3:{system("color 04");
			break;
		}
		case 4:{system("color 05");
			break;
		}
	}
	
	gotoxy(10+(x*10),4); cout<<"                                                ";
	gotoxy(10+(x*10),5); cout<<"                                               ";
	gotoxy(10+(x*10),6); cout<<"                                              ";
	gotoxy(10+(x*10),7); cout<<"                                             ";
	gotoxy(10+(x*10),8); cout<<"                                             ";
	gotoxy(10+(x*10),9); cout<<"                                             ";
	gotoxy(10+(x*10),10);cout<<"                                              ";
		
	
	gotoxy(45-(y*10),14); cout<<"                                                     ";
	gotoxy(45-(y*10),15); cout<<"                                                     ";
	gotoxy(45-(y*10),16); cout<<"                                                     ";
	gotoxy(45-(y*10),17); cout<<"                                                     ";
	gotoxy(45-(y*10),18); cout<<"                                                     ";
	gotoxy(45-(y*10),19); cout<<"                                                     ";
	gotoxy(45-(y*10),20); cout<<"                                                     ";
	srand(time(NULL));
	color=0+rand()%5;
	switch(color)
	{
		case 0:{system("color 06");
			break;
		}
		case 1:{system("color 07");
			break;
		}
		case 2:{system("color 08");
			break;
		}
		case 3:{system("color 09");
			break;
		}
		case 4:{system("color A");
			break;
		}
	}
	gotoxy(10+(x*10),4); cout<<"#     # ####### #     # ####### ######  #     # ";
	gotoxy(10+(x*10),5); cout<<"##   ## #       ##   ## #     # #     #  #   # ";
	gotoxy(10+(x*10),6); cout<<"# # # # #       # # # # #     # #     #   # # ";
	gotoxy(10+(x*10),7); cout<<"#  #  # #####   #  #  # #     # ######     # ";
	gotoxy(10+(x*10),8); cout<<"#     # #       #     # #     # #   #      # ";
	gotoxy(10+(x*10),9); cout<<"#     # #       #     # #     # #    #     # ";
	gotoxy(10+(x*10),10);cout<<"#     # ####### #     # ####### #     #    #  ";
	
	gotoxy(45-(y*10),14); cout<<" ####### ######     #    ### #     # ####### ######  ";
	gotoxy(45-(y*10),15); cout<<"    #    #     #   # #    #  ##    # #       #     # ";
	gotoxy(45-(y*10),16); cout<<"    #    #     #  #   #   #  # #   # #       #     # ";
	gotoxy(45-(y*10),17); cout<<"    #    ######  #     #  #  #  #  # #####   ######  ";
	gotoxy(45-(y*10),18); cout<<"    #    #   #   #######  #  #   # # #       #   #   ";
	gotoxy(45-(y*10),19); cout<<"    #    #    #  #     #  #  #    ## #       #    #  ";
	gotoxy(45-(y*10),20); cout<<"    #    #     # #     # ### #     # ####### #     # ";
	
	Sleep(80+(i*50));
	srand(time(NULL));
	color=0+rand()%5;
	switch(color)
	{
		case 0:{system("color A");
			break;
		}
		case 1:{system("color B");
			break;
		}
		case 2:{system("color C");
			break;
		}
		case 3:{system("color D");
			break;
		}
		case 4:{system("color E");
			break;
		}
	}
	
	gotoxy(10+(x*10),4); cout<<"                                                ";
	gotoxy(10+(x*10),5); cout<<"                                               ";
	gotoxy(10+(x*10),6); cout<<"                                              ";
	gotoxy(10+(x*10),7); cout<<"                                             ";
	gotoxy(10+(x*10),8); cout<<"                                             ";
	gotoxy(10+(x*10),9); cout<<"                                             ";
	gotoxy(10+(x*10),10);cout<<"                                              ";
	
	gotoxy(45-(y*10),14); cout<<"                                                     ";
	gotoxy(45-(y*10),15); cout<<"                                                     ";
	gotoxy(45-(y*10),16); cout<<"                                                     ";
	gotoxy(45-(y*10),17); cout<<"                                                     ";
	gotoxy(45-(y*10),18); cout<<"                                                     ";
	gotoxy(45-(y*10),19); cout<<"                                                     ";
	gotoxy(45-(y*10),20); cout<<"                                                     ";
	srand(time(NULL));
	color=0+rand()%5;
	switch(color)
	{
		case 0:{system("color 01");
			break;
		}
		case 1:{system("color 06");
			break;
		}
		case 2:{system("color 04");
			break;
		}
		case 3:{system("color 02");
			break;
		}
		case 4:{system("color F");
			break;
		}
	}
	Sleep(80+(i*50));
	i++;x++;y++;
	}while(i<5);
	x=2;y=2;
	
	system("color A");
	
	gotoxy(10+(x*10),4); cout<<"#     # ####### #     # ####### ######  #     # ";
	gotoxy(10+(x*10),5); cout<<"##   ## #       ##   ## #     # #     #  #   # ";
	gotoxy(10+(x*10),6); cout<<"# # # # #       # # # # #     # #     #   # # ";
	gotoxy(10+(x*10),7); cout<<"#  #  # #####   #  #  # #     # ######     # ";
	gotoxy(10+(x*10),8); cout<<"#     # #       #     # #     # #   #      # ";
	gotoxy(10+(x*10),9); cout<<"#     # #       #     # #     # #    #     # ";
	gotoxy(10+(x*10),10);cout<<"#     # ####### #     # ####### #     #    #  ";

	gotoxy(45-(y*10),14); cout<<" ####### ######     #    ### #     # ####### ######  ";
	gotoxy(45-(y*10),15); cout<<"    #    #     #   # #    #  ##    # #       #     # ";
	gotoxy(45-(y*10),16); cout<<"    #    #     #  #   #   #  # #   # #       #     # ";
	gotoxy(45-(y*10),17); cout<<"    #    ######  #     #  #  #  #  # #####   ######  ";
	gotoxy(45-(y*10),18); cout<<"    #    #   #   #######  #  #   # # #       #   #   ";
	gotoxy(45-(y*10),19); cout<<"    #    #    #  #     #  #  #    ## #       #    #  ";
	gotoxy(45-(y*10),20); cout<<"    #    #     # #     # ### #     # ####### #     # ";	
}

void inicio(float numero[][10],int fila,int columna,int tam)
{	
	int i=0,j=0,op;
	gotoxy(71,10); cout<<"TIEMPO";
	gotoxy(70,11); cout<<"  _____ "<<endl;
	gotoxy(70,12); cout<<" |  _  |"<<endl;
	gotoxy(70,13); cout<<" | | | |"<<endl;
	gotoxy(70,14);cout<<" | | | |"<<endl;
	gotoxy(70,15);cout<<" | |_| |"<<endl;
	gotoxy(70,16);cout<<" |_____|";

	gotoxy(35,5);cout<<"MEMORIZA LA TABLA CON N\xE9MEROS ALEATORIOS";
	
	
	if(tam==1){tabla_num(3);
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 1: 	gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
			
			case 2:    	gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 3:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 4:		gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 5:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 6:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 7:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break; 
						
			case 8:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;
						
			case 9:     gotoxy(40+(8*j),8+(5*i)); cout<<" ___ ";
						gotoxy(40+(8*j),9+(5*i)); cout<<"|  _|";
						gotoxy(40+(8*j),10+(5*i)); cout<<"  |  ";
						break;		
		}
		}
	}
	gotoxy(48,23);cout<<"\250EST\xB5S LISTO?";
	gotoxy(40,24);system("pause");
	}
	else
	{tabla_num(2);
	for (i=0;i<fila; i++)
	{	for(j=0;j<columna;j++)
		{op=numero[i][j];
		switch (op)
		{
	       	case 0:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 1: 	gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
			
			case 2:    	gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 3:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 4:		gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 5:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 6:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 7:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break; 
						
			case 8:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;
						
			case 9:     gotoxy(40+(9*j),9+(5*i)); cout<<" ___ "<<endl;
						gotoxy(40+(9*j),10+(5*i)); cout<<"|  _|"<<endl;
						gotoxy(40+(9*j),11+(5*i)); cout<<"  |  ";
						break;		
		}
		}
	}
	gotoxy(48,22);cout<<"\250EST\xB5S LISTO?";
	gotoxy(40,23);system("pause");
	}
	
	system("cls");
			
}

int salir_reintentar(int vidas)
{
	//SALIR CON IZQUIERDA, O AVANZAR
	
	gotoxy(4,23); cout<<"\314";	//MARCO ARRIBA
	for(int i=5;i<15;i++){
		gotoxy(i,23);cout<<"\315";
	}
	
	gotoxy(15,23);cout<<"\273"; gotoxy(15,24);cout<<"\272";gotoxy(15,25);cout<<"\312";//DERECHA
	
	gotoxy(99,23);cout<<"\271";
	for(int i=99;i>85;i--){
		gotoxy(i,23);cout<<"\315";
	}
	gotoxy(85,23);cout<<"\311";gotoxy(85,24);cout<<"\272";gotoxy(85,25);cout<<"\312";
	gotoxy(6,24);cout<<"<< SALIR ";
	if(perdida==0){gotoxy(87,24); cout<<"REINTENTAR >>";}else{gotoxy(87,24); cout<<"CONTINUAR >>";	}
	
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) {if (level!=4){musica_intro_memoria();Niveles_memoria();}else musica_intro_memoria();Menu_memoria();}
	if (tecla==77) return vidas--;
	if (tecla!=75&&tecla!=77) continue;
	}
               }
}

int salir_avanzar(int nivel)
{
	//SALIR CON IZQUIERDA, O AVANZAR
	
	gotoxy(4,23); cout<<"\314";	//MARCO ARRIBA
	for(int i=5;i<15;i++){
		gotoxy(i,23);cout<<"\315";
	}
	
	gotoxy(15,23);cout<<"\273"; gotoxy(15,24);cout<<"\272";gotoxy(15,25);cout<<"\312";//DERECHA
	
	gotoxy(99,23);cout<<"\271";
	for(int i=99;i>85;i--){
		gotoxy(i,23);cout<<"\315";
	}
	gotoxy(85,23);cout<<"\311";gotoxy(85,24);cout<<"\272";gotoxy(85,25);cout<<"\312";
	gotoxy(6,24);cout<<"<< SALIR ";
	if(nivel<6){if (nivel==5){gotoxy(87,24); cout<<"CONTINUAR >>";}else {gotoxy(87,24); cout<<"NIVEL "<<nivel+1<<" >>";}}
	
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) {if (level!=4){musica_intro_memoria();Niveles_memoria();}else musica_intro_memoria();Menu_memoria();}
	if (tecla==77) return nivel++;
	if (tecla!=75&&tecla!=77) continue;
	}
        Beep(100,100);       }
}

void trofeo_victoria(int level)
{
	
	
	system("cls");victoria();marco_memoria();
	gotoxy(6,2) ;cout<<"        ##########################"; 
	gotoxy(6,3) ;cout<<"        ########################## "; 
	gotoxy(6,4) ;cout<<"   ##################################### "; 
	gotoxy(6,5) ;cout<<" ######################################### "; 
	gotoxy(6,6); cout<<"####      ######################       #### "; 
	gotoxy(6,7); cout<<"###       ######################        ### "; 
	gotoxy(6,8); cout<<"##        ######################        ### "; 
	gotoxy(6,9); cout<<"###     ##########################      ### "; 
	gotoxy(6,10);cout<<"###    ############################    #### "; 
	gotoxy(6,11);cout<<" ###   ### #################### ###    ### "; 
	gotoxy(6,12);cout<<" ####   ### ################## ####  #### "; 
	gotoxy(6,13);cout<<"   ####  ######################### ##### "; 
	gotoxy(6,14);cout<<"    ######## ################ ######### "; 
	gotoxy(6,15);cout<<"      ######  ##############   ###### "; 
	gotoxy(6,16);cout<<"               ############ "; 
	gotoxy(6,17);cout<<"                 ######## "; 
	gotoxy(6,18);cout<<"                   #### "; 
	gotoxy(6,19);cout<<"                   #### "; 
	gotoxy(6,20);cout<<"                   #### "; 
	gotoxy(6,21);cout<<"                   #### "; 
	gotoxy(6,22);cout<<"               ############ "; 
	gotoxy(6,23);cout<<"            ################## "; 
	
	switch(level)
	{
		case 1: {gotoxy(50,10);cout<<"FELICITACIONES!!! HAS COMPLETADO EL NIVEL F\xB5"<<"CIL";
				gotoxy(60,12);cout<<"1. CONTINUAR AL NIVEL MEDIO";
				gotoxy(60,13);cout<<"2. REGRESAR AL MEN\xE9"<<" DE NIVELES";
				int x=57,y=12; gotoxy(x,y);cout<<"->";
   			 while(true){
    		if (getch()){
			char tecla=getch();
		     if (tecla==77){ if(y==12) medio_M(); if (y==13) {musica_intro_memoria();Niveles_memoria();}; {system("cls");musica_intro_memoria();Menu_principal();}}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=13) y++; else y=12; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=12) y--; else y=13; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     Beep(100,100);
	   				 }
						}
			break;}
		
		case 2: {gotoxy(50,10);cout<<"FELICITACIONES!!! HAS COMPLETADO EL NIVEL MEDIO";
				gotoxy(60,12);cout<<"1. CONTINUAR AL NIVEL DIF\xD6"<<"CIL";
				gotoxy(60,13);cout<<"2. REGRESAR AL MENxE9"<<" DE NIVELES";
				int x=57,y=12; gotoxy(x,y);cout<<"->";
   			 while(true){
    		if (getch()){
			char tecla=getch();
		     if (tecla==77){ if(y==12) dificil_M(); if (y==13) {musica_intro_memoria();Niveles_memoria();} {system("cls");musica_intro_memoria();Menu_principal();}}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=13) y++; else y=12; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=12) y--; else y=13; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     Beep(100,100);
	   				 }
						}
			break;}
				
		case 3: {gotoxy(50,10);cout<<"FELICITACIONES!!! HAS COMPLETADO EL NIVEL DIF\xD6"<<"CIL";
				gotoxy(50,11);cout<<"ESTAS LISTO PARA ENFRENTAR NUESTRO RETO";
				gotoxy(60,12);cout<<"1. CONTINUAR AL RETO";
				gotoxy(60,13);cout<<"2. REGRESAR AL MENxE9"<<" DE NIVELES";
				int x=57,y=12; gotoxy(x,y);cout<<"->";
   			 while(true){
    		if (getch()){
			char tecla=getch();
		     if (tecla==77){ if(y==12) reto_memoria(); if (y==13) {musica_intro_memoria();Niveles_memoria();} {system("cls");musica_intro_memoria();Menu_principal();}}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=13) y++; else y=12; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=12) y--; else y=13; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     Beep(100,100);
	   				 }
						}
			break;}
				
		case 4: {gotoxy(50,10);cout<<"FELICITACIONES!!! HAS COMPLETADO NUESTRO RETO";
				gotoxy(50,11);cout<<"ESTAS LISTO PARA ENFRENTAR NUESTRO RETO";
				gotoxy(60,12);cout<<"1. CONTINUAR AL RETO";
				gotoxy(60,13);cout<<"2. REGRESAR AL MEN\xE9"<<" PRINCIPAL";
				
				break;}
	}	
	
}

void derrota(int level)
{marco_memoria();musica_derrota();
gotoxy(10,4);cout<<"   ______    ___     __  ___    ______          ____  _    __    ______    ____ ";
gotoxy(10,5);cout<<"  / ____/   /   |   /  |/  /   / ____/         / __ \\| |  / /   / ____/   / __ \\";
gotoxy(10,6);cout<<" / / __    / /| |  / /|_/ /   / __/           / / / /| | / /   / __/     / /_/ /";
gotoxy(10,7);cout<<"/ /_/ /   / ___ | / /  / /   / /___          / /_/ / | |/ /   / /___    / _, _/ ";
gotoxy(10,8);cout<<"\\____/   /_/  |_|/_/  /_/   /_____/          \\____/  |___/   /_____/   /_/ |_|";


gotoxy(33,13);cout<<"NO TE RINDAS, SIGUE INTENTANDO...";

//SALIR CON IZQUIERDA, O AVANZAR
	
	gotoxy(4,23); cout<<"\314";	//MARCO ARRIBA
	for(int i=5;i<15;i++){
		gotoxy(i,23);cout<<"\315";
	}
	
	gotoxy(15,23);cout<<"\273"; gotoxy(15,24);cout<<"\272";gotoxy(15,25);cout<<"\312";//DERECHA
	
	gotoxy(99,23);cout<<"\271";
	for(int i=99;i>85;i--){
		gotoxy(i,23);cout<<"\315";
	}
	gotoxy(85,23);cout<<"\311";gotoxy(85,24);cout<<"\272";gotoxy(85,25);cout<<"\312";
	gotoxy(6,24);cout<<"<< ATRAS ";
	gotoxy(87,24); cout<<"REINTENTAR >>";
	
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {switch (level){case 1:{vidas=2;facil_M();break;	} case 2: {vidas=2;medio_M();break;	} case 3: {vidas=2;dificil_M();break; }case 4: {vidas=4;reto_memoria();	}	}}
	if (tecla==75) {if (level == 4 ){	musica_intro_memoria();Menu_memoria();	}else{	musica_intro_memoria();Niveles_memoria();	}}
	if (tecla!=75&&tecla!=77) continue;
	}Beep(100,100);
    }	
}

string nombre_memoria()
{
	marco_memoria();
	gotoxy(41,9);cout<<"INSERTA TU NOMBRE";
	gotoxy(34,10);cout<<"\332"; 
	for (int i=35;i<62;i++){
		gotoxy(i,10);cout<<"\304";
	}
	gotoxy(62,10);cout<<"\277"; gotoxy(62,11);cout<<"\263"; gotoxy(62,12);cout<<"\331";
	for(int i=61;i>34;i--){
		gotoxy(i,12);cout<<"\304";
	}
	gotoxy(34,12);cout<<"\300"; gotoxy(34,11);cout<<"\263";
	char name[7];
	gotoxy(37,15);cout<<"M\xB5XIMO 6 LETRAS O N\xE9MEROS";
	MostrarCursor();
	gotoxy(36,11);{ gets(name); }
	OcultarCursor();
	
		for (int k=8;k<16;k++){
		gotoxy(27,k);cout<<"                                         ";
        }
    gotoxy(32,11);cout<<"Bienvenido(a) "<<name<<", pulsa una TECLA."; 	system("pause>nul");
	gotoxy(27,11);cout<<"                                        ";
	return name;
}

//FLASH

void Rayos(){    //Mostra Rayos en pantalla
	gotoxy(10,5); cout<<"    ___     ";
	gotoxy(10,6); cout<<"   /  /     ";
	gotoxy(10,7);cout<<"  /  /----. ";
	gotoxy(10,8);cout<<" /____   /  ";   
	gotoxy(10,9);cout<<"     /  /   ";
	gotoxy(10,10);cout<<"    /__/    ";
	gotoxy(73,5); cout<<"    ___     ";
	gotoxy(73,6); cout<<"   /  /     ";
	gotoxy(73,7);cout<<"  /  /----. ";
	gotoxy(73,8);cout<<" /____   /  ";   
	gotoxy(73,9);cout<<"     /  /   ";
	gotoxy(73,10);cout<<"    /__/    ";
}
string ImprimirName(int i){
	ifstream names;      //Abrir archivo
	string name,archivo; 
	switch(i){
	case 0: archivo="datos/names.txt"; break;
	case 1: archivo="datos/names1.txt"; break;
	case 2: archivo="datos/names2.txt"; break;
	case 3: archivo="datos/names3.txt"; break;
	case 4: archivo="datos/names4.txt"; break;
    case 5: archivo="datos/names5.txt"; break;
   
	}
	names.open(archivo,ios::in);
	if (names.fail()){
		exit(1);
	}
	while (!names.eof()){ //Mientras no sea el final del archivo
		getline(names,name);
	}
	names.close();
	return name;
}
void GuardarName(string name,int esp){
ofstream names;  string archivo;  //Guardar arhivo de texto
switch(esp){
	case 0: archivo="datos/names.txt"; break;
	case 1: archivo="datos/names1.txt"; break;
	case 2: archivo="datos/names2.txt"; break;
	case 3: archivo="datos/names3.txt"; break;
	case 4: archivo="datos/names4.txt"; break;
    case 5: archivo="datos/names5.txt"; break;
}
names.open(archivo,ios::out);
if (names.fail()){
exit(1);
}
names<<name; //Guardamos el Name 
}
void GuardarNivel(int nivel,int esp){   //Guardar archivo de texto
ofstream niveles;  string archivo;
switch(esp){
	case 0: archivo="datos/config.txt"; break;
	case 1: archivo="datos/config1.txt"; break;
	case 2: archivo="datos/config2.txt"; break;
	case 3: archivo="datos/config3.txt"; break;
	case 4: archivo="datos/config4.txt"; break;
    case 5: archivo="datos/config5.txt"; break;
}
niveles.open(archivo,ios::out);
if (niveles.fail()){
exit(1);
}
niveles<<nivel; //Guardamos el Nivel 
}
int ImprimirNivel(int i){
	ifstream niveles;   //Abrir archivo de texto
	int nivel; string archivo;
	switch(i){
	case 0: archivo="datos/config.txt"; break;
	case 1: archivo="datos/config1.txt"; break;
	case 2: archivo="datos/config2.txt"; break;
	case 3: archivo="datos/config3.txt"; break;
	case 4: archivo="datos/config4.txt"; break;
    case 5: archivo="datos/config5.txt"; break;

	}
	niveles.open(archivo,ios::in);
	if (niveles.fail()){
		exit(1);
	}
	while (!niveles.eof()){ //Mientras no sea el final del archivo
		niveles>>nivel;
	}
	niveles.close();
	return nivel;
}
void NumeroGrande_1D(int numero) //Mostrar numeros
{
	switch (numero)
	{
	       	case 0:     gotoxy(43,7); cout<<" _____ "<<endl;
						gotoxy(43,8); cout<<"|  _  |"<<endl;
						gotoxy(43,9); cout<<"| | | |"<<endl;
						gotoxy(43,10);cout<<"| | | |"<<endl;
						gotoxy(43,11);cout<<"| |_| |"<<endl;
						gotoxy(43,12);cout<<"|_____|";
						break;
						
			case 1: 	gotoxy(44,7); cout<<"  __ "<<endl;
						gotoxy(44,8); cout<<" /  |"<<endl;
						gotoxy(44,9); cout<<"/_  |"<<endl;
						gotoxy(44,10);cout<<"  | |"<<endl;
						gotoxy(44,11);cout<<"  | |"<<endl;
						gotoxy(44,12);cout<<"  |_|";
						break;
			
			case 2:    	gotoxy(44,7); cout<<" ____ "<<endl;
						gotoxy(44,8); cout<<"/ __ |"<<endl;
						gotoxy(44,9); cout<<"|/ / /"<<endl;
						gotoxy(44,10);cout<<"  / / "<<endl;
						gotoxy(44,11);cout<<" / /_ "<<endl;
						gotoxy(44,12);cout<<"/____|";
			            break;
						
			case 3:     gotoxy(43,7); cout<<" _____  "<<endl;
						gotoxy(43,8); cout<<"|____ \\"<<endl;
						gotoxy(43,9); cout<<"  ___| |"<<endl;
						gotoxy(43,10);cout<<" |___ < "<<endl;
						gotoxy(43,11);cout<<" ____| |"<<endl;
						gotoxy(43,12);cout<<"|_____/ ";
						break;
						
			case 4:		gotoxy(43,7); cout<<" _   _   "<<endl;
						gotoxy(43,8); cout<<"| | | |  "<<endl;
    					gotoxy(43,9); cout<<"| |_| |_ "<<endl;
						gotoxy(43,10);cout<<"|___   _|"<<endl;
						gotoxy(43,11);cout<<"    | |  "<<endl;
						gotoxy(43,12);cout<<"    |_|  ";
						break;
						
			case 5:     gotoxy(43,7); cout<<" _______  "<<endl;
	 					gotoxy(43,8); cout<<"|  _____| "<<endl;
						gotoxy(43,9); cout<<"| |_____  "<<endl;
						gotoxy(43,10);cout<<"|_____  \\"<<endl;
    					gotoxy(43,11);cout<<" _____| | "<<endl;
						gotoxy(43,12);cout<<"|_______/ ";
						break;
						
			case 6:     gotoxy(43,7); cout<<"  _____  "<<endl;
						gotoxy(43,8); cout<<" / ____| "<<endl;
    					gotoxy(43,9); cout<<"/ /____  "<<endl;
						gotoxy(43,10);cout<<"|  __  \\"<<endl;
						gotoxy(43,11);cout<<"| |__| | "<<endl;
						gotoxy(43,12);cout<<"\\______/";
						break;
						
			case 7:     gotoxy(43,7); cout<<" _______ "<<endl;
						gotoxy(43,8); cout<<"|____   |"<<endl;
    					gotoxy(43,9); cout<<"     / / "<<endl;
						gotoxy(43,10);cout<<"    / /  "<<endl;
						gotoxy(43,11);cout<<"   / /   "<<endl;
						gotoxy(43,12);cout<<"  /_/    ";
						break; 
						
			case 8:     gotoxy(43,7); cout<<"  _____  "<<endl;
						gotoxy(43,8); cout<<" / ___ \\"<<endl;
    					gotoxy(43,9); cout<<"| |___| |"<<endl;
						gotoxy(43,10);cout<<" > ___ < "<<endl;
						gotoxy(43,11);cout<<"| |___| |"<<endl;
						gotoxy(43,12);cout<<" \\_____/";
						break;
						
			case 9:     gotoxy(43,7); cout<<"  _____   "<<endl;
						gotoxy(43,8); cout<<" / ___ \\ "<<endl;
    					gotoxy(43,9); cout<<"| |___| | "<<endl;
						gotoxy(43,10);cout<<" \\____  |"<<endl;
						gotoxy(43,11);cout<<"  ____| | "<<endl;
						gotoxy(43,12);cout<<" |_____/  ";
						break;		
	}
}
void NumeroGrande_2D(int numero) //Mostrar numeros
{
	int a,b;
	a=numero/10; b=numero%10;
	switch (a)
	{
	       	case 0:     gotoxy(39,7); cout<<" _____ "<<endl;
						gotoxy(39,8); cout<<"|  _  |"<<endl;
						gotoxy(39,9); cout<<"| | | |"<<endl;
						gotoxy(39,10);cout<<"| | | |"<<endl;
						gotoxy(39,11);cout<<"| |_| |"<<endl;
						gotoxy(39,12);cout<<"|_____|";
						break;
						
			case 1: 	gotoxy(41,7); cout<<"  __ "<<endl;
						gotoxy(41,8); cout<<" /  |"<<endl;
						gotoxy(41,9); cout<<"/_  |"<<endl;
						gotoxy(41,10);cout<<"  | |"<<endl;
						gotoxy(41,11);cout<<"  | |"<<endl;
						gotoxy(41,12);cout<<"  |_|";
						break;
			
			case 2:    	gotoxy(40,7); cout<<" ____ "<<endl;
						gotoxy(40,8); cout<<"/ __ |"<<endl;
						gotoxy(40,9); cout<<"|/ / /"<<endl;
						gotoxy(40,10);cout<<"  / / "<<endl;
						gotoxy(40,11);cout<<" / /_ "<<endl;
						gotoxy(40,12);cout<<"/____|";
			            break;
						
			case 3:     gotoxy(39,7); cout<<" _____  "<<endl;
						gotoxy(39,8); cout<<"|____ \\"<<endl;
						gotoxy(39,9); cout<<"  ___| |"<<endl;
						gotoxy(39,10);cout<<" |___ < "<<endl;
						gotoxy(39,11);cout<<" ____| |"<<endl;
						gotoxy(39,12);cout<<"|_____/ ";
						break;
						
			case 4:		gotoxy(38,7); cout<<" _   _   "<<endl;
						gotoxy(38,8); cout<<"| | | |  "<<endl;
    					gotoxy(38,9); cout<<"| |_| |_ "<<endl;
						gotoxy(38,10);cout<<"|___   _|"<<endl;
						gotoxy(38,11);cout<<"    | |  "<<endl;
						gotoxy(38,12);cout<<"    |_|  ";
						break;
						
			case 5:     gotoxy(38,7); cout<<" ______ "<<endl;
	 					gotoxy(38,8); cout<<"|  ____|"<<endl;
						gotoxy(38,9); cout<<"| |____ "<<endl;
						gotoxy(38,10);cout<<"|____  \\"<<endl;
    					gotoxy(38,11);cout<<" ____| |"<<endl;
						gotoxy(38,12);cout<<"|______/";
						break;
						
			case 6:     gotoxy(39,7); cout<<"  _____ "<<endl;
						gotoxy(39,8); cout<<" / ____|"<<endl;
    					gotoxy(39,9); cout<<"/ /____ "<<endl;
						gotoxy(39,10);cout<<"|  __  \\"<<endl;
						gotoxy(39,11);cout<<"| |__| | "<<endl;
						gotoxy(39,12);cout<<"\\______/";
						break;
						
			case 7:     gotoxy(39,7); cout<<" ______ "<<endl;
						gotoxy(39,8); cout<<"|___   |"<<endl;
    					gotoxy(39,9); cout<<"    / / "<<endl;
						gotoxy(39,10);cout<<"   / / "<<endl;
						gotoxy(39,11);cout<<"  / /  "<<endl;
						gotoxy(39,12);cout<<" /_/   ";
						break;
						
			case 8:     gotoxy(38,7); cout<<"  _____  "<<endl;
						gotoxy(38,8); cout<<" / ___ \\"<<endl;
    					gotoxy(38,9); cout<<"| |___| |"<<endl;
						gotoxy(38,10);cout<<" > ___ < "<<endl;
						gotoxy(38,11);cout<<"| |___| |"<<endl;
						gotoxy(38,12);cout<<" \\_____/";
						break;
						
			case 9:     gotoxy(38,7); cout<<"  _____  "<<endl;
						gotoxy(38,8); cout<<" / ___ \\"<<endl;
    					gotoxy(38,9); cout<<"| |___| | "<<endl;
						gotoxy(38,10);cout<<" \\____  |"<<endl;
						gotoxy(38,11);cout<<"  ____| |"<<endl;
						gotoxy(38,12);cout<<" |_____/ ";
						break;		
	}
	switch (b)
	{
	       	case 0:     gotoxy(47,7); cout<<" _____ "<<endl;
						gotoxy(47,8); cout<<"|  _  |"<<endl;
						gotoxy(47,9); cout<<"| | | |"<<endl;
						gotoxy(47,10);cout<<"| | | |"<<endl;
						gotoxy(47,11);cout<<"| |_| |"<<endl;
						gotoxy(47,12);cout<<"|_____|";
						break;
						
			case 1: 	gotoxy(47,7); cout<<"  __ "<<endl;
						gotoxy(47,8); cout<<" /  |"<<endl;
						gotoxy(47,9); cout<<"/_  |"<<endl;
						gotoxy(47,10);cout<<"  | |"<<endl;
						gotoxy(47,11);cout<<"  | |"<<endl;
						gotoxy(47,12);cout<<"  |_|";
						break;
			
			case 2:    	gotoxy(47,7); cout<<" ____ "<<endl;
						gotoxy(47,8); cout<<"/ __ |"<<endl;
						gotoxy(47,9); cout<<"|/ / /"<<endl;
						gotoxy(47,10);cout<<"  / / "<<endl;
						gotoxy(47,11);cout<<" / /_ "<<endl;
						gotoxy(47,12);cout<<"/____|";
			            break;
						
			case 3:     gotoxy(47,7); cout<<" _____  "<<endl;
						gotoxy(47,8); cout<<"|____ \\"<<endl;
						gotoxy(47,9); cout<<"  ___| |"<<endl;
						gotoxy(47,10);cout<<" |___ < "<<endl;
						gotoxy(47,11);cout<<" ____| |"<<endl;
						gotoxy(47,12);cout<<"|_____/ ";
						break;
						
			case 4:		gotoxy(47,7); cout<<" _   _ "<<endl;
						gotoxy(47,8); cout<<"| | | | "<<endl;
    					gotoxy(47,9); cout<<"| |_| |_"<<endl;
						gotoxy(47,10);cout<<"|___   _|"<<endl;
						gotoxy(47,11);cout<<"    | | "<<endl;
						gotoxy(47,12);cout<<"    |_| ";
						break;
						
			case 5:     gotoxy(47,7); cout<<" ______ "<<endl;
	 					gotoxy(47,8); cout<<"|  ____|"<<endl;
						gotoxy(47,9); cout<<"| |____ "<<endl;
						gotoxy(47,10);cout<<"|____  \\"<<endl;
    					gotoxy(47,11);cout<<" ____| |"<<endl;
						gotoxy(47,12);cout<<"|______/";
						break;
						
			case 6:     gotoxy(47,7); cout<<"  _____ "<<endl;
						gotoxy(47,8); cout<<" / ____|"<<endl;
    					gotoxy(47,9); cout<<"/ /____ "<<endl;
						gotoxy(47,10);cout<<"|  __  \\"<<endl;
						gotoxy(47,11);cout<<"| |__| | "<<endl;
						gotoxy(47,12);cout<<"\\______/";
						break;
						
			case 7:     gotoxy(47,7); cout<<" ______ "<<endl;
						gotoxy(47,8); cout<<"|___   |"<<endl;
    					gotoxy(47,9); cout<<"    / / "<<endl;
						gotoxy(47,10);cout<<"   / / "<<endl;
						gotoxy(47,11);cout<<"  / /  "<<endl;
						gotoxy(47,12);cout<<" /_/   ";
						break; 
						
			case 8:     gotoxy(47,7); cout<<"  _____  "<<endl;
						gotoxy(47,8); cout<<" / ___ \\"<<endl;
    					gotoxy(47,9); cout<<"| |___| |"<<endl;
						gotoxy(47,10);cout<<" > ___ < "<<endl;
						gotoxy(47,11);cout<<"| |___| |"<<endl;
						gotoxy(47,12);cout<<" \\_____/";
						break;
						
			case 9:     gotoxy(47,7); cout<<"  _____  "<<endl;
						gotoxy(47,8); cout<<" / ___ \\ "<<endl;
    					gotoxy(47,9); cout<<"| |___| | "<<endl;
						gotoxy(47,10);cout<<" \\____  |"<<endl;
						gotoxy(47,11);cout<<"  ____| |"<<endl;
						gotoxy(47,12);cout<<" |_____/ ";
						break;		
	}
}
void NumeroGrande_3D(int numero) //Mostrar numeros
{
	int a,b,c;
	a=(numero/10)/10; b=(numero/10)%10; c=numero%10;
	switch (a)
	{ 
	       	case 0:     gotoxy(35,7); cout<<" _____ "<<endl;
						gotoxy(35,8); cout<<"|  _  |"<<endl;
						gotoxy(35,9); cout<<"| | | |"<<endl;
						gotoxy(35,10);cout<<"| | | |"<<endl;
						gotoxy(35,11);cout<<"| |_| |"<<endl;
						gotoxy(35,12);cout<<"|_____|";
						break;
						
			case 1: 	gotoxy(37,7); cout<<"  __ "<<endl;
						gotoxy(37,8); cout<<" /  |"<<endl;
						gotoxy(37,9); cout<<"/_  |"<<endl;
						gotoxy(37,10);cout<<"  | |"<<endl;
						gotoxy(37,11);cout<<"  | |"<<endl;
						gotoxy(37,12);cout<<"  |_|";
						break;
			
			case 2:    	gotoxy(36,7); cout<<" ____ "<<endl;
						gotoxy(36,8); cout<<"/ __ |"<<endl;
						gotoxy(36,9); cout<<"|/ / /"<<endl;
						gotoxy(36,10);cout<<"  / / "<<endl;
						gotoxy(36,11);cout<<" / /_ "<<endl;
						gotoxy(36,12);cout<<"/____|";
			            break;
						
			case 3:     gotoxy(35,7); cout<<" _____  "<<endl;
						gotoxy(35,8); cout<<"|____ \\"<<endl;
						gotoxy(35,9); cout<<"  ___| |"<<endl;
						gotoxy(35,10);cout<<" |___ < "<<endl;
						gotoxy(35,11);cout<<" ____| |"<<endl;
						gotoxy(35,12);cout<<"|_____/ ";
						break;
						
			case 4:		gotoxy(34,7); cout<<" _   _   "<<endl;
						gotoxy(34,8); cout<<"| | | |  "<<endl;
    					gotoxy(34,9); cout<<"| |_| |_ "<<endl;
						gotoxy(34,10);cout<<"|___   _|"<<endl;
						gotoxy(34,11);cout<<"    | |  "<<endl;
						gotoxy(34,12);cout<<"    |_|  ";
						break;
						
			case 5:     gotoxy(34,7); cout<<" ______ "<<endl;
	 					gotoxy(34,8); cout<<"|  ____|"<<endl;
						gotoxy(34,9); cout<<"| |____ "<<endl;
						gotoxy(34,10);cout<<"|____  \\"<<endl;
    					gotoxy(34,11);cout<<" ____| |"<<endl;
						gotoxy(34,12);cout<<"|______/";
						break;
						
			case 6:     gotoxy(34,7); cout<<"  _____ "<<endl;
						gotoxy(34,8); cout<<" / ____|"<<endl;
    					gotoxy(34,9); cout<<"/ /____ "<<endl;
						gotoxy(34,10);cout<<"|  __  \\"<<endl;
						gotoxy(34,11);cout<<"| |__| | "<<endl;
						gotoxy(34,12);cout<<"\\______/";
						break;
						
			case 7:     gotoxy(35,7); cout<<" ______ "<<endl;
						gotoxy(35,8); cout<<"|___   |"<<endl;
    					gotoxy(35,9); cout<<"    / / "<<endl;
						gotoxy(35,10);cout<<"   / / "<<endl;
						gotoxy(35,11);cout<<"  / /  "<<endl;
						gotoxy(35,12);cout<<" /_/   ";
						break;
						
			case 8:     gotoxy(34,7); cout<<"  _____  "<<endl;
						gotoxy(34,8); cout<<" / ___ \\"<<endl;
    					gotoxy(34,9); cout<<"| |___| |"<<endl;
						gotoxy(34,10);cout<<" > ___ < "<<endl;
						gotoxy(34,11);cout<<"| |___| |"<<endl;
						gotoxy(34,12);cout<<" \\_____/";
						break;
						
			case 9:     gotoxy(34,7); cout<<"  _____  "<<endl;
						gotoxy(34,8); cout<<" / ___ \\"<<endl;
    					gotoxy(34,9); cout<<"| |___| | "<<endl;
						gotoxy(34,10);cout<<" \\____  |"<<endl;
						gotoxy(34,11);cout<<"  ____| |"<<endl;
						gotoxy(34,12);cout<<" |_____/ ";
						break;		
	}
	switch (b)
	{
	       	case 0:     gotoxy(43,7); cout<<" _____ "<<endl;
						gotoxy(43,8); cout<<"|  _  |"<<endl;
						gotoxy(43,9); cout<<"| | | |"<<endl;
						gotoxy(43,10);cout<<"| | | |"<<endl;
						gotoxy(43,11);cout<<"| |_| |"<<endl;
						gotoxy(43,12);cout<<"|_____|";
						break;
						
			case 1: 	gotoxy(44,7); cout<<"  __ "<<endl;
						gotoxy(44,8); cout<<" /  |"<<endl;
						gotoxy(44,9); cout<<"/_  |"<<endl;
						gotoxy(44,10);cout<<"  | |"<<endl;
						gotoxy(44,11);cout<<"  | |"<<endl;
						gotoxy(44,12);cout<<"  |_|";
						break;
			
			case 2:    	gotoxy(44,7); cout<<" ____ "<<endl;
						gotoxy(44,8); cout<<"/ __ |"<<endl;
						gotoxy(44,9); cout<<"|/ / /"<<endl;
						gotoxy(44,10);cout<<"  / / "<<endl;
						gotoxy(44,11);cout<<" / /_ "<<endl;
						gotoxy(44,12);cout<<"/____|";
			            break;
						
			case 3:     gotoxy(43,7); cout<<" _____  "<<endl;
						gotoxy(43,8); cout<<"|____ \\"<<endl;
						gotoxy(43,9); cout<<"  ___| |"<<endl;
						gotoxy(43,10);cout<<" |___ < "<<endl;
						gotoxy(43,11);cout<<" ____| |"<<endl;
						gotoxy(43,12);cout<<"|_____/ ";
						break;
						
			case 4:		gotoxy(43,7); cout<<" _   _ "<<endl;
						gotoxy(43,8); cout<<"| | | | "<<endl;
    					gotoxy(43,9); cout<<"| |_| |_"<<endl;
						gotoxy(43,10);cout<<"|___   _|"<<endl;
						gotoxy(43,11);cout<<"    | | "<<endl;
						gotoxy(43,12);cout<<"    |_| ";
						break;
						
			case 5:     gotoxy(43,7); cout<<" ______ "<<endl;
	 					gotoxy(43,8); cout<<"|  ____|"<<endl;
						gotoxy(43,9); cout<<"| |____ "<<endl;
						gotoxy(43,10);cout<<"|____  \\"<<endl;
    					gotoxy(43,11);cout<<" ____| |"<<endl;
						gotoxy(43,12);cout<<"|______/";
						break;
						
			case 6:     gotoxy(43,7); cout<<"  _____ "<<endl;
						gotoxy(43,8); cout<<" / ____|"<<endl;
    					gotoxy(43,9); cout<<"/ /____ "<<endl;
						gotoxy(43,10);cout<<"|  __  \\"<<endl;
						gotoxy(43,11);cout<<"| |__| | "<<endl;
						gotoxy(43,12);cout<<"\\______/";
						break;
						
			case 7:     gotoxy(43,7); cout<<" ______ "<<endl;
						gotoxy(43,8); cout<<"|___   |"<<endl;
    					gotoxy(43,9); cout<<"    / / "<<endl;
						gotoxy(43,10);cout<<"   / / "<<endl;
						gotoxy(43,11);cout<<"  / /  "<<endl;
						gotoxy(43,12);cout<<" /_/   ";
						break; 
						
			case 8:     gotoxy(43,7); cout<<"  _____  "<<endl;
						gotoxy(43,8); cout<<" / ___ \\"<<endl;
    					gotoxy(43,9); cout<<"| |___| |"<<endl;
						gotoxy(43,10);cout<<" > ___ < "<<endl;
						gotoxy(43,11);cout<<"| |___| |"<<endl;
						gotoxy(43,12);cout<<" \\_____/";
						break;
						
			case 9:     gotoxy(43,7); cout<<"  _____  "<<endl;
						gotoxy(43,8); cout<<" / ___ \\ "<<endl;
    					gotoxy(43,9); cout<<"| |___| |"<<endl;
						gotoxy(43,10);cout<<" \\____  |"<<endl;
						gotoxy(43,11);cout<<"  ____| |"<<endl;
						gotoxy(43,12);cout<<" |_____/ ";
						break;		
	}
	switch (c)
	{
	       	case 0:     gotoxy(52,7); cout<<" _____ "<<endl;
						gotoxy(52,8); cout<<"|  _  |"<<endl;
						gotoxy(52,9); cout<<"| | | |"<<endl;
						gotoxy(52,10);cout<<"| | | |"<<endl;
						gotoxy(52,11);cout<<"| |_| |"<<endl;
						gotoxy(52,12);cout<<"|_____|";
						break;
						
			case 1: 	gotoxy(52,7); cout<<"  __ "<<endl;
						gotoxy(52,8); cout<<" /  |"<<endl;
						gotoxy(52,9); cout<<"/_  |"<<endl;
						gotoxy(52,10);cout<<"  | |"<<endl;
						gotoxy(52,11);cout<<"  | |"<<endl;
						gotoxy(52,12);cout<<"  |_|";
						break;
			
			case 2:    	gotoxy(52,7); cout<<" ____ "<<endl;
						gotoxy(52,8); cout<<"/ __ |"<<endl;
						gotoxy(52,9); cout<<"|/ / /"<<endl;
						gotoxy(52,10);cout<<"  / / "<<endl;
						gotoxy(52,11);cout<<" / /_ "<<endl;
						gotoxy(52,12);cout<<"/____|";
			            break;
						
			case 3:     gotoxy(51,7); cout<<" _____  "<<endl;
						gotoxy(51,8); cout<<"|____ \\"<<endl;
						gotoxy(51,9); cout<<"  ___| |"<<endl;
						gotoxy(51,10);cout<<" |___ < "<<endl;
						gotoxy(51,11);cout<<" ____| |"<<endl;
						gotoxy(51,12);cout<<"|_____/ ";
						break;
						
			case 4:		gotoxy(51,7); cout<<" _   _ "<<endl;
						gotoxy(51,8); cout<<"| | | | "<<endl;
    					gotoxy(51,9); cout<<"| |_| |_"<<endl;
						gotoxy(51,10);cout<<"|___   _|"<<endl;
						gotoxy(51,11);cout<<"    | | "<<endl;
						gotoxy(51,12);cout<<"    |_| ";
						break;
						
			case 5:     gotoxy(52,7); cout<<" ______ "<<endl;
	 					gotoxy(52,8); cout<<"|  ____|"<<endl;
						gotoxy(52,9); cout<<"| |____ "<<endl;
						gotoxy(52,10);cout<<"|____  \\"<<endl;
    					gotoxy(52,11);cout<<" ____| |"<<endl;
						gotoxy(52,12);cout<<"|______/";
						break;
						
			case 6:     gotoxy(53,7); cout<<"  _____ "<<endl;
						gotoxy(53,8); cout<<" / ____|"<<endl;
    					gotoxy(53,9); cout<<"/ /____ "<<endl;
						gotoxy(53,10);cout<<"|  __  \\"<<endl;
						gotoxy(53,11);cout<<"| |__| | "<<endl;
						gotoxy(53,12);cout<<"\\______/";
						break;
						
			case 7:     gotoxy(51,7); cout<<" ______ "<<endl;
						gotoxy(51,8); cout<<"|___   |"<<endl;
    					gotoxy(51,9); cout<<"    / / "<<endl;
						gotoxy(51,10);cout<<"   / / "<<endl;
						gotoxy(51,11);cout<<"  / /  "<<endl;
						gotoxy(51,12);cout<<" /_/   ";
						break; 
						
			case 8:     gotoxy(52,7); cout<<"  _____  "<<endl;
						gotoxy(52,8); cout<<" / ___ \\"<<endl;
    					gotoxy(52,9); cout<<"| |___| |"<<endl;
						gotoxy(52,10);cout<<" > ___ < "<<endl;
						gotoxy(52,11);cout<<"| |___| |"<<endl;
						gotoxy(52,12);cout<<" \\_____/";
						break;
						
			case 9:     gotoxy(52,7); cout<<"  _____  "<<endl;
						gotoxy(52,8); cout<<" / ___ \\ "<<endl;
    					gotoxy(52,9); cout<<"| |___| | "<<endl;
						gotoxy(52,10);cout<<" \\____  |"<<endl;
						gotoxy(52,11);cout<<"  ____| |"<<endl;
						gotoxy(52,12);cout<<" |_____/ ";
						break;		
	}
}
void marcoAnimacion() //Animoacion marco
{
	int x,y,i,j;
	OcultarCursor();
	for(i=4;i<90;i++)  //PARA LAS LINEAS HORIZONTALES
	{
		gotoxy(i,1);cout<<"\315";Sleep(1);
	}
	gotoxy (90,1);cout<<"\273";Sleep(1);
	for(j=2;j<20;j++)  //PARA LAS LINEAS VERTICALES
    {
        gotoxy(90,j);cout<<"\272";Sleep(1);
	}
	gotoxy (90,20);cout<<"\274";
	for(i=89;i>3;i--)  //PARA LAS LINEAS HORIZONTALES
	{
    	gotoxy(i,20);cout<<"\315";Sleep(1);
	}
    gotoxy (4,20);cout<<"\310";Sleep(1);
	for(j=19;j>1;j--)  //PARA LAS LINEAS VERTICALES
	{
		gotoxy(4,j);cout<<"\272";Sleep(1);
    }
    gotoxy (4,1);cout<<"\311";Sleep(1);
    MostrarCursor();
}
void marco() //El marco sin animacion
{
	int x,y,i,j;
	OcultarCursor();
	for(i=4;i<90;i++)  //PARA LAS LINEAS HORIZONTALES
	{
		gotoxy(i,1);cout<<"\315";
	}
	gotoxy (90,1);cout<<"\273";
	for(j=2;j<20;j++)  //PARA LAS LINEAS VERTICALES
    {
        gotoxy(90,j);cout<<"\272";
	}
	gotoxy (90,20);cout<<"\274";
	for(i=89;i>3;i--)  //PARA LAS LINEAS HORIZONTALES
	{
    	gotoxy(i,20);cout<<"\315";
	}
    gotoxy (4,20);cout<<"\310";
	for(j=19;j>1;j--)  //PARA LAS LINEAS VERTICALES
	{
		gotoxy(4,j);cout<<"\272";
    }
    gotoxy (4,1);cout<<"\311";
}
void tapar(){ //Tapar parte del texto
	for (int y=2;y<8;y++){
	gotoxy(60,y);cout<<"                              "; } 
	for (int y=8;y<14;y++){
	gotoxy(5,y); cout<<"                          "; }
}
void taparAvanza(int x){
	x=35+x;
	for (int y=2;y<8;y++){
	gotoxy(x,y);cout<<"\t\t\t\t"; } 
	
}
void taparAvanza2(int x){
	x=31-x;
	for (int y=8;y<14;y++){
	gotoxy(x,y); cout<<"\t\t\t\t"; }
}

void corazon(int n){
	gotoxy(85,2); cout<<"    ";
	gotoxy(83,1); cout<<"\313"; gotoxy(83,2);cout<<"\272"; gotoxy(83,3);cout<<"\310"; gotoxy(84,3);cout<<"\315\315\315\315\315\315";
	gotoxy(90,3); cout<<"\271";
	switch (n){
		case 1: gotoxy(88,2); cout<<"\333"; break;
		case 2: gotoxy(87,2); cout<<"\333"<<"\333"; break;
		case 3: gotoxy(86,2); cout<<"\333\333\333"; break;
		case 4: gotoxy(85,2); cout<<"\333\333\333\333"; break;
	}
}
void Flash_Opening()
{ 
MusicaOpening(); OcultarCursor();  system("color 01");  marcoAnimacion(); OcultarCursor();  
int x,y,w=0; 
for(x=35;x>5;x--){ 
gotoxy(x,2);cout<<" _______  __           ___          _______  __    __  "; 
gotoxy(x,3);cout<<"|   ____||  |         /   \\        /       ||  |  |  | ";
gotoxy(x,4);cout<<"|  |__   |  |        /  ^  \\      |   (----'|  |__|  | "; 
gotoxy(x,5);cout<<"|   __|  |  |       /  /_\\  \\      \\   \\    |   __   | "; 
gotoxy(x,6);cout<<"|  |     |  '----. /  _____  \\ .----)   |   |  |  |  | "; 
gotoxy(x,7);cout<<"|__|     |_______|/__/     \\__\\|_______/    |__|  |__| ";  if (x>8) taparAvanza(w);  w++; tapar(); Sleep(100); }
w=0;
for (x=5;x<32;x++){
gotoxy(x,8); cout<<"     ___      .__   __.  ________       ___      .__   __."; 
gotoxy(x,9); cout<<"    /   \\     |  \\ |  | |       /      /   \\     |  \\ |  |"; 
gotoxy(x,10);cout<<"   /  ^  \\    |   \\|  | `---/  /      /  ^  \\    |   \\|  |"; 
gotoxy(x,11);cout<<"  /  /_\\  \\   |  . `  |    /  /      /  /_\\  \\   |  . `  |"; 
gotoxy(x,12);cout<<" /  _____  \\  |  |\\   |   /  /----. /  _____  \\  |  |\\   |"; 
gotoxy(x,13);cout<<"/__/     \\__\\ |__| \\__|  /________|/__/     \\__\\ |__| \\__|"; if (x<31) taparAvanza2(w); w++; tapar(); Sleep(100);}
sleep(1);
gotoxy(15,8); cout<<"    ___     ";
gotoxy(15,9); cout<<"   /  /     ";
gotoxy(15,10);cout<<"  /  /----. ";
gotoxy(15,11);cout<<" /____   /  ";   
gotoxy(15,12);cout<<"     /  /   ";
gotoxy(15,13);cout<<"    /__/    ";
sleep(1);
}
void Flash_Opening_SinAnimacion()
{
 system("color 01");
marco();
gotoxy(6,2);cout<<" _______  __           ___          _______  __    __  "; 
gotoxy(6,3);cout<<"|   ____||  |         /   \\        /       ||  |  |  | ";
gotoxy(6,4);cout<<"|  |__   |  |        /  ^  \\      |   (----'|  |__|  | "; 
gotoxy(6,5);cout<<"|   __|  |  |       /  /_\\  \\      \\   \\    |   __   | "; 
gotoxy(6,6);cout<<"|  |     |  '----. /  _____  \\ .----)   |   |  |  |  | "; 
gotoxy(6,7);cout<<"|__|     |_______|/__/     \\__\\|_______/    |__|  |__| ";  

gotoxy(31,8); cout<<"     ___      .__   __.  ________       ___      .__   __."; 
gotoxy(31,9); cout<<"    /   \\     |  \\ |  | |       /      /   \\     |  \\ |  |"; 
gotoxy(31,10);cout<<"   /  ^  \\    |   \\|  | `---/  /      /  ^  \\    |   \\|  |"; 
gotoxy(31,11);cout<<"  /  /_\\  \\   |  . `  |    /  /      /  /_\\  \\   |  . `  |"; 
gotoxy(31,12);cout<<" /  _____  \\  |  |\\   |   /  /----. /  _____  \\  |  |\\   |"; 
gotoxy(31,13);cout<<"/__/     \\__\\ |__| \\__|  /________|/__/     \\__\\ |__| \\__|";

gotoxy(15,8); cout<<"    ___     ";
gotoxy(15,9); cout<<"   /  /     ";
gotoxy(15,10);cout<<"  /  /----. ";
gotoxy(15,11);cout<<" /____   /  ";   
gotoxy(15,12);cout<<"     /  /   ";
gotoxy(15,13);cout<<"    /__/    ";
 
}

void advertencia(){
OcultarCursor();
cout<<"\a";
gotoxy(15,16);cout<<"\332"; gotoxy(79,16);cout<<"\277";
for (int x=16;x<79;x++){gotoxy(x,16);cout<<"\304";}
gotoxy(15,17);cout<<"\263";gotoxy(15,18);cout<<"\263";  gotoxy(79,17);cout<<"\263";gotoxy(79,18);cout<<"\263";
gotoxy(17,17);cout<<"\xAD"<<"ADVERTENCIA\x21 Usted no ha ingresado un n\xA3mero v\xA0lido. Intente";
gotoxy(17,18);cout<<"otra vez por favor.";
gotoxy(15,19);cout<<"\300";gotoxy(79,19);cout<<"\331";
for (int x=16;x<79;x++){gotoxy(x,19);cout<<"\304";}
sleep(3);
for (int y=16;y<20;y++){
gotoxy(15,y);cout<<"                                                                  ";
}
MostrarCursor();
}
int preguntaSuma(){
	float aux; int pregunta;
	while(true){
	gotoxy(31,9);cout<<"\xA8"<<"CU\xB5L ES LA SUMA DE LOS N\xE9MEROS\x3F"; gotoxy(0,12);cout<<"   ";
	gotoxy(50,11);cout<<"\263                                       "; gotoxy(42,11);cout<<"\263       "; 
	gotoxy(42,12);cout<<"\300\304\304\304\304\304\304\304\331"; 
	gotoxy(42,10);cout<<"\332\304\304\304\304\304\304\304\277"; gotoxy(29,16);cout<<"PULSA ENTER PARA GUARDAR TU RESPUESTA.";
	gotoxy(45,11);cin>>aux; if(!cin.good()) { cin.clear(); cin.ignore(1000,'\n'); advertencia(); continue; }
	pregunta=aux; if (aux-pregunta!=0) {advertencia(); continue;}
	if (pregunta<0) {advertencia(); continue;}
	if (pregunta>99999) {advertencia(); continue;}
	
	break;
	}
	gotoxy(29,16);cout<<"                                            ";
	return pregunta;
}

int pregunta_menu_o_avanza(int nivel){
	gotoxy(4,18); cout<<"\314";
	for(int i=5;i<15;i++){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(15,18);cout<<"\273"; gotoxy(15,19);cout<<"\272";gotoxy(15,20);cout<<"\312";
	gotoxy(90,18);cout<<"\271";
	for(int i=89;i>76;i--){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(77,18);cout<<"\311";gotoxy(77,19);cout<<"\272";gotoxy(77,20);cout<<"\312";
	gotoxy(6,19);cout<<"<< Salir ";
	gotoxy(78,19); cout<<" Nivel "<<nivel<<" >>";
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) return 1;
	if (tecla==77) return 0;
	if (tecla!=75&&tecla!=77) continue;
	}
               }
}
bool pregunta_menu_u_otravez(){
	gotoxy(4,18); cout<<"\314";
	for(int i=5;i<15;i++){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(15,18);cout<<"\273"; gotoxy(15,19);cout<<"\272";gotoxy(15,20);cout<<"\312";
	gotoxy(90,18);cout<<"\271";
	for(int i=89;i>67;i--){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(67,18);cout<<"\311";gotoxy(67,19);cout<<"\272";gotoxy(67,20);cout<<"\312";
	gotoxy(6,19);cout<<"<< Salir ";
	gotoxy(68,19); cout<<" Intentar otra vez >>";
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) return false;
	if (tecla==77) return true;
	if (tecla!=75&&tecla!=77) continue;
	}
               }
}

void pregunta_solo_menu(){
	gotoxy(4,18); cout<<"\314";
	for(int i=5;i<15;i++){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(15,18);cout<<"\273"; gotoxy(15,19);cout<<"\272";gotoxy(15,20);cout<<"\312";
	gotoxy(6,19);cout<<"<< Salir ";
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) break;
	if (tecla!=75) continue;
	}
               }
}
void semaforo(){
	   
  	int aux=0; OcultarCursor();
	switch(aux){  
	case 0: 
	for (int i=46;i<49;i++){
	gotoxy(39,10);cout<<"\334\334\334\334\334";
	gotoxy(39,11);cout<<"\333   \333";   
    gotoxy(39,12);cout<<"\337\337\337\337\337"; 
	gotoxy(45,10);cout<<"\334\334\334\334\334";
	gotoxy(45,11);cout<<"\333   \333";   
    gotoxy(45,12);cout<<"\337\337\337\337\337";
	gotoxy(51,10);cout<<"\334\334\334\334\334";
	gotoxy(51,11);cout<<"\333   \333";   
    gotoxy(51,12);cout<<"\337\337\337\337\337";
	gotoxy(i,9);cout<<"."; Sleep(300);   }
    case 1:
    system("color 04");
    gotoxy(42,9);cout<<"\xAD"<<"PREPARADO\x21";
    gotoxy(39,10);cout<<"\334\334\334\334\334";
	gotoxy(39,11);cout<<"\333\333\333\333\333";   
    gotoxy(39,12);cout<<"\337\337\337\337\337";
    gotoxy(45,10);cout<<"\334\334\334\334\334";
	gotoxy(45,11);cout<<"\333   \333";   
    gotoxy(45,12);cout<<"\337\337\337\337\337";
	gotoxy(51,10);cout<<"\334\334\334\334\334";
	gotoxy(51,11);cout<<"\333   \333";   
    gotoxy(51,12);cout<<"\337\337\337\337\337"; Beep(600,150); sleep(1); 
    case 2:
    system("color 06");
    gotoxy(42,9);cout<<"                      ";
	gotoxy(44,9);cout<<"\xAD"<<"LISTO\x21";
    gotoxy(39,10);cout<<"\334\334\334\334\334";
	gotoxy(39,11);cout<<"\333\333\333\333\333";   
    gotoxy(39,12);cout<<"\337\337\337\337\337";
    gotoxy(45,10);cout<<"\334\334\334\334\334";
	gotoxy(45,11);cout<<"\333\333\333\333\333";   
    gotoxy(45,12);cout<<"\337\337\337\337\337";
	gotoxy(51,10);cout<<"\334\334\334\334\334";
	gotoxy(51,11);cout<<"\333   \333";   
    gotoxy(51,12);cout<<"\337\337\337\337\337"; Beep(650,150); sleep(1);
    case 3:
    system("color 02");
    gotoxy(42,9);cout<<"                      ";
	gotoxy(46,9);cout<<"\xAD"<<"YA\x21";
    gotoxy(39,10);cout<<"\334\334\334\334\334";
	gotoxy(39,11);cout<<"\333\333\333\333\333";   
    gotoxy(39,12);cout<<"\337\337\337\337\337";
    gotoxy(45,10);cout<<"\334\334\334\334\334";
	gotoxy(45,11);cout<<"\333\333\333\333\333";   
    gotoxy(45,12);cout<<"\337\337\337\337\337";
	gotoxy(51,10);cout<<"\334\334\334\334\334";
	gotoxy(51,11);cout<<"\333\333\333\333\333";   
    gotoxy(51,12);cout<<"\337\337\337\337\337"; Beep(700,150); sleep(1); 
    case 4:
    system("color 01");
	for (int i=9;i<13;i++){
	gotoxy(38,i);cout<<"                      "; }
	}
}


void MarcoSuperior()
{
	    for (int i=30;i<63;i++)
    	{
	    	gotoxy(i,2);cout<<"\315";
    	}
    	gotoxy(30,2);cout<<"\311";
	    gotoxy(63,2);cout<<"\273";
    	for (int i=30;i<63;i++)
    	{
	    	gotoxy(i,4);cout<<"\315";
    	}
    	gotoxy(30,4);cout<<"\310";
       	gotoxy(63,4);cout<<"\274";
	
    	gotoxy(30,3);cout<<"\272";  //esquina izquierda
	    gotoxy(32,3);cout<<"ENTRENAMIENTO DE N\351MEROS FLASH";gotoxy(63,3);cout<<"\272";
}

void figuritas_1()
{
	system("color 06");    //FELIZ
	//CARA IZQUIERDA
	gotoxy(13,6);cout<<"\334\334\337\337";gotoxy(17,6);cout<<"\337\334\334";
	gotoxy(10,7);cout<<"\334\333\337";gotoxy(20,7);cout<<"\337\333\334";  ////extre
    gotoxy(9,8);cout<<"\333\337";gotoxy(22,8);cout<<"\337\333";
    gotoxy(8,9);cout<<"\333";gotoxy(24,9);cout<<"\333"; gotoxy(13,9);cout<<"\333"; gotoxy(19,9);cout<<"\333";
    gotoxy(7,10);cout<<"\333";gotoxy(25,10);cout<<"\333";
    gotoxy(7,11);cout<<"\337\334";gotoxy(24,11);cout<<"\334\337"; gotoxy(12,11);cout<<"\334";gotoxy(20,11);cout<<"\334";
    gotoxy(8,12);cout<<"\337\334";gotoxy(23,12);cout<<"\334\337";  gotoxy(13,12);cout<<"\337\334\334\334\334\334\337";
	gotoxy(9,13);cout<<"\337\333\334";gotoxy(21,13);cout<<"\334\333\337";//Extre
	gotoxy(11,14);cout<<"\337\337\334\334";gotoxy(18,14);cout<<"\334\334\337\337";
	gotoxy(15,15);cout<<"\337\337\337";
	
	///CARA DEREHA
	
	gotoxy(75,6);cout<<"\334\334\337\337";gotoxy(79,6);cout<<"\337\334\334";
	gotoxy(72,7);cout<<"\334\333\337";gotoxy(82,7);cout<<"\337\333\334";  //EXTRE
	gotoxy(71,8);cout<<"\333\337";gotoxy(84,8);cout<<"\337\333";
    gotoxy(70,9);cout<<"\333";gotoxy(86,9);cout<<"\333"; gotoxy(75,9);cout<<"\333"; gotoxy(81,9);cout<<"\333";
    gotoxy(69,10);cout<<"\333";gotoxy(87,10);cout<<"\333";
    gotoxy(69,11);cout<<"\337\334";gotoxy(86,11);cout<<"\334\337"; gotoxy(74,11);cout<<"\334";gotoxy(82,11);cout<<"\334";
    gotoxy(70,12);cout<<"\337\334";gotoxy(85,12);cout<<"\334\337";  gotoxy(75,12);cout<<"\337\334\334\334\334\334\337";
	gotoxy(71,13);cout<<"\337\333\334";gotoxy(83,13);cout<<"\334\333\337";  //EXTRE
	gotoxy(73,14);cout<<"\337\337\334\334";gotoxy(80,14);cout<<"\334\334\337\337";
	gotoxy(77,15);cout<<"\337\337\337"; Beep(1000,900);sleep(2); 
	
}

void figuritas_2()
{
	system("color 04");    //ENOJADO
	//CARA IZQUIERDA

	gotoxy(13,6);cout<<"\334\334\337\337";gotoxy(17,6);cout<<"\337\334\334";
	gotoxy(10,7);cout<<"\334\333\337";gotoxy(20,7);cout<<"\337\333\334";  ////extre
    gotoxy(9,8);cout<<"\333\337";gotoxy(22,8);cout<<"\337\333"; 
    gotoxy(8,9);cout<<"\333";gotoxy(24,9);cout<<"\333"; gotoxy(13,9);cout<<"\236"; gotoxy(19,9);cout<<"\236";
    gotoxy(7,10);cout<<"\333";gotoxy(25,10);cout<<"\333";    
    gotoxy(7,11);cout<<"\337\334";gotoxy(24,11);cout<<"\334\337";  gotoxy(13,11);cout<<"\334\337\337\337\337\337\334";
    gotoxy(8,12);cout<<"\337\334";gotoxy(23,12);cout<<"\334\337";  gotoxy(12,12);cout<<"\333";gotoxy(20,12);cout<<"\333";
	gotoxy(9,13);cout<<"\337\333\334";gotoxy(21,13);cout<<"\334\333\337";//Extre
	gotoxy(11,14);cout<<"\337\337\334\334";gotoxy(18,14);cout<<"\334\334\337\337";
	gotoxy(15,15);cout<<"\337\337\337"; 
	
	///CARA DEREHA
	
	gotoxy(75,6);cout<<"\334\334\337\337";gotoxy(79,6);cout<<"\337\334\334";
	gotoxy(72,7);cout<<"\334\333\337";gotoxy(82,7);cout<<"\337\333\334";  //EXTRE 
	gotoxy(71,8);cout<<"\333\337";gotoxy(84,8);cout<<"\337\333";
    gotoxy(70,9);cout<<"\333";gotoxy(86,9);cout<<"\333"; gotoxy(75,9);cout<<"\236"; gotoxy(81,9);cout<<"\236";
    gotoxy(69,10);cout<<"\333";gotoxy(87,10);cout<<"\333";
    gotoxy(69,11);cout<<"\337\334";gotoxy(86,11);cout<<"\334\337";  gotoxy(75,11);cout<<"\334\337\337\337\337\337\334";
    gotoxy(70,12);cout<<"\337\334";gotoxy(85,12);cout<<"\334\337";  gotoxy(74,12);cout<<"\333";gotoxy(82,12);cout<<"\333";
	gotoxy(71,13);cout<<"\337\333\334";gotoxy(83,13);cout<<"\334\333\337";  //EXTRE
	gotoxy(73,14);cout<<"\337\337\334\334";gotoxy(80,14);cout<<"\334\334\337\337";
	gotoxy(77,15);cout<<"\337\337\337"; Beep(4000,900);
	sleep(2);
	
}

void figuritas_3()
{
	system("color 01");     //NEUTRAL
	//CARA IZQUIERDA
	gotoxy(13,6);cout<<"\334\334\337\337";gotoxy(17,6);cout<<"\337\334\334";
	gotoxy(10,7);cout<<"\334\333\337";gotoxy(20,7);cout<<"\337\333\334";  ////extre
    gotoxy(9,8);cout<<"\333\337";gotoxy(22,8);cout<<"\337\333"; 
    gotoxy(8,9);cout<<"\333";gotoxy(24,9);cout<<"\333"; gotoxy(13,9);cout<<"\333"; gotoxy(19,9);cout<<"\333";
    gotoxy(7,10);cout<<"\333";gotoxy(25,10);cout<<"\333";
    gotoxy(7,11);cout<<"\337\334";gotoxy(24,11);cout<<"\334\337"; gotoxy(12,11);cout<<"\334";gotoxy(20,11);cout<<"\334";
    gotoxy(8,12);cout<<"\337\334";gotoxy(23,12);cout<<"\334\337";  gotoxy(13,12);cout<<"\337\337\337\337\337\337\337";
	gotoxy(9,13);cout<<"\337\333\334";gotoxy(21,13);cout<<"\334\333\337";//Extre
	gotoxy(11,14);cout<<"\337\337\334\334";gotoxy(18,14);cout<<"\334\334\337\337";
	gotoxy(15,15);cout<<"\337\337\337";
	
	///CARA DEREHA
	
	gotoxy(75,6);cout<<"\334\334\337\337";gotoxy(79,6);cout<<"\337\334\334";
	gotoxy(72,7);cout<<"\334\333\337";gotoxy(82,7);cout<<"\337\333\334";  //EXTRE 
	gotoxy(71,8);cout<<"\333\337";gotoxy(84,8);cout<<"\337\333";
    gotoxy(70,9);cout<<"\333";gotoxy(86,9);cout<<"\333"; gotoxy(75,9);cout<<"\333"; gotoxy(81,9);cout<<"\333";
    gotoxy(69,10);cout<<"\333";gotoxy(87,10);cout<<"\333";
    gotoxy(69,11);cout<<"\337\334";gotoxy(86,11);cout<<"\334\337"; gotoxy(74,11);cout<<"\334";gotoxy(82,11);cout<<"\334";
    gotoxy(70,12);cout<<"\337\334";gotoxy(85,12);cout<<"\334\337";  gotoxy(75,12);cout<<"\337\337\337\337\337\337\337";
	gotoxy(71,13);cout<<"\337\333\334";gotoxy(83,13);cout<<"\334\333\337";  //EXTRE
	gotoxy(73,14);cout<<"\337\337\334\334";gotoxy(80,14);cout<<"\334\334\337\337";
	gotoxy(77,15);cout<<"\337\337\337";
	
}

void advertencia_1()
{

cout<<"\a"; 
gotoxy(15,16);cout<<"\332"; gotoxy(79,16);cout<<"\277";
for (int x=16;x<79;x++){gotoxy(x,16);cout<<"\304";}
gotoxy(15,17);cout<<"\263";gotoxy(15,18);cout<<"\263";  gotoxy(79,17);cout<<"\263";gotoxy(79,18);cout<<"\263";
gotoxy(17,17);cout<<"\xAD"<<"ADVERTENCIA\x21 Excediste el l\241mite de n\243meros a ingresar.";
gotoxy(17,18);cout<<"Int\202ntelo denuevo.";
gotoxy(15,19);cout<<"\300";gotoxy(79,19);cout<<"\331";
for (int x=16;x<79;x++){gotoxy(x,19);cout<<"\304";}
sleep(3);
for (int y=16;y<20;y++){
gotoxy(15,y);cout<<"                                                                 ";
}

}

int preguntaDigitos()
{
	float digitos; int pregunta;
	while(true)
	{
    	gotoxy(35,8);cout<<"Ingrese n\243mero de d\241gitos";
    	gotoxy(43,12);cout<<"\263         "; gotoxy(51,12);cout<<"\263              "; 
	    gotoxy(43,13);cout<<"\300\304\304\304\304\304\304\304\331"; 
    	gotoxy(43,11);cout<<"\332\304\304\304\304\304\304\304\277";
    	gotoxy(47,12);cin>>digitos;
		if(!cin.good())
		{
		    cin.clear(); cin.ignore(1000,'\n'); advertencia_1();
			continue;
		}
    	pregunta=digitos;
		if (digitos-pregunta!=0)
		{
		    advertencia_1();
			continue;
		}
    	if (pregunta<0)
		{
		    advertencia_1();
			continue;
		}
    	if (pregunta>3)
		{
		    advertencia_1();
			continue;
		}

	break;
	}
	return pregunta;
}

int preguntaVelo()
{
	float velocidad; int pregunta;
	while(true)
	{
    	gotoxy(37,8);cout<<"Ingrese velocidad (s)";
    	gotoxy(43,12);cout<<"\263         "; gotoxy(51,12);cout<<"\263            "; 
	    gotoxy(43,13);cout<<"\300\304\304\304\304\304\304\304\331"; 
    	gotoxy(43,11);cout<<"\332\304\304\304\304\304\304\304\277";
    	gotoxy(47,12);cin>>velocidad;
		if(!cin.good())
		{
		    cin.clear(); cin.ignore(1000,'\n'); advertencia_1();
			continue;
		}
    	pregunta=velocidad;
		if (velocidad-pregunta!=0)
		{
		    advertencia_1();
			continue;
		}
    	if (pregunta<0)
		{
		    advertencia_1();
			continue;
		}
    	if (pregunta>5)
		{
		    advertencia_1();
			continue;
		}

	break;
	}
    return pregunta;
}

int preguntaCantNum()
{
	float Cnumeros; int pregunta;
	while(true)
	{
    	gotoxy(35,8);cout<<"Ingrese n\243meros a mostrar";
    	gotoxy(43,12);cout<<"\263         "; gotoxy(51,12);cout<<"\263           "; 
	    gotoxy(43,13);cout<<"\300\304\304\304\304\304\304\304\331"; 
    	gotoxy(43,11);cout<<"\332\304\304\304\304\304\304\304\277";
    	gotoxy(47,12);cin>>Cnumeros;
		if(!cin.good())
		{
		    cin.clear(); cin.ignore(1000,'\n'); advertencia_1();
			continue;
		}
    	pregunta=Cnumeros;
		if (Cnumeros-pregunta!=0)
		{
		    advertencia_1();
			continue;
		}
    	if (pregunta<0)
		{
		    advertencia_1();
			continue;
		}
    	if (pregunta>20)
		{
		    advertencia_1();
			continue;
		}
		
	break;
	}
    return pregunta;
}

int preguntaSuma2(){
	float aux; int pregunta;
	while(true){
	gotoxy(31,6);cout<<"\xA8"<<"CU\xB5L ES LA SUMA DE LOS N\xE9MEROS\x3F"; //HASTA LA O ANTES DE LA S EL GOTOXY
	gotoxy(43,9);cout<<"\263            "; gotoxy(51,9);cout<<"\263"; 
	gotoxy(43,10);cout<<"\300\304\304\304\304\304\304\304\331"; 
	gotoxy(43,8);cout<<"\332\304\304\304\304\304\304\304\277";
	gotoxy(47,9);cin>>aux; if(!cin.good()) { cin.clear(); cin.ignore(1000,'\n'); advertencia_1(); continue; }
	pregunta=aux; if (aux-pregunta!=0) {advertencia_1(); continue;}
	if (pregunta<0) {advertencia_1(); continue;}
	if (pregunta>99999) {advertencia_1(); continue;}
	
	break;
	}
	return pregunta;
}


bool pregunta_menu_u_otravez_2(){

	gotoxy(4,18); cout<<"\314";
	for(int i=5;i<15;i++){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(15,18);cout<<"\273"; gotoxy(15,19);cout<<"\272";gotoxy(15,20);cout<<"\312";
	gotoxy(90,18);cout<<"\271";
	for(int i=89;i>67;i--){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(67,18);cout<<"\311";gotoxy(67,19);cout<<"\272";gotoxy(67,20);cout<<"\312";
	gotoxy(6,19);cout<<"<< Salir ";
	gotoxy(68,19); cout<<" Intentar otra vez >>";
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) return false;
	if (tecla==77) return  Funcion_otra_vez(); ////////////////////////////////////////// RETORNA AL PRINCIPIO
	if (tecla!=75&&tecla!=77) continue;
	}
               }
}

int Funcion_otra_vez()
{
	
	int numeros,suma2,numero[999],pregunta;
	int d,v,n;
	system("cls");marco();figuritas_3(); OcultCursor();
	bool repetir=true;
	MarcoSuperior();
	int limite_menor,limite_superior; float velocidad;   //CAMBIE A FLOAT A LADO DE VELOciDAD
	d=preguntaDigitos();
		for(int i=35;i<61;i++){gotoxy(i,8);cout<<" ";
		}
        v=preguntaVelo();
        n=preguntaCantNum();
		OcultCursor(); //////////////////////////////////////////
		//system("CLS"); /////////////////////////////////
		switch(d){
			case 1: limite_menor=1; limite_superior=9; break;
			case 2: limite_menor=10; limite_superior=99; break;
			case 3: limite_menor=100; limite_superior=999; break;
		}
		OcultCursor();//////////////
		
		
		srand(time(NULL));suma2=0;
			for (int i=0;i<n;i++){
			numeros=limite_menor+rand()%(limite_superior+1-limite_menor);
			switch(d){
				case 1: cout<<"\a"; system("cls");NumeroGrande_1D(numeros); break;
				case 2: cout<<"\a"; system("cls");NumeroGrande_2D(numeros); break;
				case 3: cout<<"\a"; system("cls");NumeroGrande_3D(numeros); break;
			}
			MarcoSuperior();marco();figuritas_3(); OcultCursor(); //////////////////////////////////////
			suma2=suma2+numeros; numero[i]=numeros; sleep(v);
			}
			system("cls");
			OcultCursor();/////////////////
			MarcoSuperior();marco();figuritas_3();
			
			while(repetir)
			{
				pregunta=preguntaSuma2();
				
				OcultCursor(); ////-------------------------------->>>>>>>>>>>>>
				
				if (pregunta==suma2)
				{
					gotoxy(40,15); cout<<"\xAD"<<"FELICIDADES\x21";
					gotoxy(32,17); cout<<"BIEN HECHO CRACK, SIGUE AS\326."; //repetir=false;
			        figuritas_1();figuritas_3();
			        
			        pregunta_solo_menu(); break;    
				}
			
				else{
				        gotoxy(28,12);cout<<"RESPUESTA INCORRECTA. LOS N\xE9MEROS SON:";
			    	    for (int i=0;i<n;i++)
			        	{
				    	gotoxy(41+i+i+i,14);
			    		{ cout<<numero[i]; if (i!=n-1) cout<<"-";}
			        	}
		     	    	gotoxy(40,17); cout<<"LA SUMA ES: "<<suma2;
			        	figuritas_2();
			
			        	repetir=pregunta_menu_u_otravez_2();
				    } 
			    
  	        continue;
			}
		    //break;
return 0;
}
void OcultCursor()   
{
	HANDLE hCon;  
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize=2;
    cci.bVisible=FALSE;
    
    SetConsoleCursorInfo (hCon,&cci);
}

void leerContra(char frase[]){
    int i=0;  
    cout.flush();

    do
    {
        frase[i] = (unsigned char)getch();

        if(frase[i]!=8)  // no es retroceso
        {
            cout << '*';  // muestra por pantalla
            i++;
        }
        else if(i>0)    // es retroceso y hay caracteres
        {
            cout << (char)8 << (char)32 << (char)8;
            i--;  //el caracter a borrar e el backspace
        }
        cout.flush();

    }while(frase[i-1]!=13);  // si presiona ENTER

    frase[i-1] = 0;
    cout << endl;
}
void LanzarNumerosYNombresOrdenados(int niveles[],string nombres[],int log){
	int aux; string asi; //Mostrar numeros en orden 
	for (int i=0;i<log;i++){
		for(int j=0;j<log-1;j++){
			if(niveles[j]<niveles[j+1]){
				aux=niveles[j]; asi=nombres[j];
				niveles[j]=niveles[j+1]; nombres[j]=nombres[j+1];
				niveles[j+1]=aux; nombres[j+1]=asi;
			}
			
		}
	}
	int y=8;
	for (int i=0;i<log;i++){
		gotoxy(27,y); cout<<"("<<i+1<<")           "<<nombres[i]; gotoxy(60,y); cout<<niveles[i];
		y=y+1;
	}
	
}
	
void pregunta_menu_o_resetear(){
	gotoxy(4,18); cout<<"\314"; //Preguntar si resetea
	for(int i=5;i<15;i++){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(15,18);cout<<"\273"; gotoxy(15,19);cout<<"\272";gotoxy(15,20);cout<<"\312";
	gotoxy(90,18);cout<<"\271";
	for(int i=89;i>76;i--){
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(77,18);cout<<"\311";gotoxy(77,19);cout<<"\272";gotoxy(77,20);cout<<"\312";
	gotoxy(6,19);cout<<"<< Salir ";
	gotoxy(78,19); cout<<" Resetear >>";
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==75) break;
	if (tecla==77) {
		system("cls");marco(); Rayos();
		gotoxy(23,6);cout<<"\xAD"<<"ADVERTENCIA\x21";
		gotoxy(23,7);cout<<"Necesita tener una contrase\xA4"<<"a para ejecutar la";
		gotoxy(23,8);cout<<"siguiente acci\xA2n, si la tiene, presione [<],si";
		gotoxy(23,9);cout<<"no es as\xA1, regrese al men\xA3 presionando [>].";
		while (true){
		if (getch()){
			char tecla=getch();
			if (tecla==77) break;
			if (tecla==75) {
				char Pass[20]; int nivel,aux=0;
				while (true){
				MostrarCursor();
				gotoxy(23,11);{cout<<"Contrase\xA4"<<"a: "; leerContra(Pass); } 
				if((strcmp(Pass,"unt21"))==0) {OcultarCursor(); gotoxy(23,13);cout<<"Correcta."; sleep(2);
				gotoxy(23,13);cout<<"RESETEANDO..."; sleep(3);
				int NIVELES[6]; string NOMBRES[6];
				for (int i=0;i<6;i++){
    			NIVELES[i]=0; NOMBRES[i]="--    ";
				}
				ofstream espacios; int espacio=0;
				espacios.open("datos/ESPACIOS.txt",ios::out);
				if (espacios.fail()){
				exit(1); }
				espacios<<espacio;
				
				for (int i=0;i<6;i++){
					GuardarNivel(NIVELES[i],i); GuardarName(NOMBRES[i],i);
				}

				
				break;
				} 
				OcultarCursor();
				gotoxy(23,13);cout<<"Incorrecta."; aux++; sleep(2); if(aux==4) break; 
				gotoxy(23,11);cout<<"                                                                  ";
				gotoxy(23,13);cout<<"                                                                  ";} break;
			}
			if (tecla!=75&&tecla!=77) continue;
			}
		}
    	
	break;	
	}
	if (tecla!=75&&tecla!=77) continue;
	}
               }
}
void Records(){
	system("cls"); marco(); Rayos(); //Mejores jugadores
	gotoxy(23,4);cout<<"RECORDS"; gotoxy(23,5);cout<<"\337\337\337\337\337\337\337";
gotoxy(26,7);cout<<"\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304";
gotoxy(45,7);cout<<"\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304";
	gotoxy(26,6);cout<<"PUESTO"; gotoxy(39,6);cout<<"JUGADORES"; gotoxy(56,6);cout<<"MAX. NIVEL";
	int NIVELES[6]; string NOMBRES[6];
    for (int i=0;i<6;i++){
    	NIVELES[i]=ImprimirNivel(i); NOMBRES[i]=ImprimirName(i);
	}
	LanzarNumerosYNombresOrdenados(NIVELES,NOMBRES,6);
    
	pregunta_menu_o_resetear(); 
}
int Menu_2(){
	OcultarCursor();Rayos(); //SUB menu de Niveles
	gotoxy(43,4);cout<<"MEN\xE9"; gotoxy(43,5);cout<<"\337\337\337\337";
	gotoxy(39,6); cout<<"INICIAR JUEGO";
    gotoxy(39,7); cout<<"ELEGIR NIVEL";
    gotoxy(39,8); cout<<"RECORDS";
    gotoxy(39,9);cout<<"MEN\xE9 PRINCIPAL";
    int x=36,y=6; gotoxy(x,y);cout<<">>";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==6) return 1; if (y==7) return 2; if (y==8) return 3; if (y==9); return 4;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=9) y++; else y=6; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=6) y--; else y=9; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<">>"; Beep(100,100);
		     
	    }
	}
}


int ElegirNivel(){
	 system("cls");marco(); Rayos(); OcultarCursor(); // Elegir el nivel
	gotoxy(23,6);cout<<"\xAD"<<"ADVERTENCIA\x21";
	gotoxy(23,7);cout<<"La opci\xA2n que eligi\xA2 es solo para desarrolladores";
	gotoxy(23,8);cout<<"del juego, si usted es uno presione [<], si no es";
	gotoxy(23,9);cout<<"as\xA1, regrese al men\xA3 presionando [>].";
	while (true){
		if (getch()){
			char tecla=getch();
			if (tecla==77) return 0;
			if (tecla==75) break;
			if (tecla!=75&&tecla!=77) continue;
		}
	}
    char Pass[20]; int nivel,aux=0; //Se llama a la función pass para guardar pass
	while (true){
	MostrarCursor();
	gotoxy(23,11);{cout<<"Contrase\xA4"<<"a: "; leerContra(Pass); } 
	if((strcmp(Pass,"unt21"))==0) {MostrarCursor(); gotoxy(23,13);cout<<"Correcta.";gotoxy(23,15);cout<<"NIVEL: "; cin>>nivel; return nivel;} 
	OcultarCursor();
	gotoxy(23,13);cout<<"Incorrecta."; aux++; sleep(2); if(aux==4) return 0; 
	gotoxy(23,11);cout<<"                                                                  ";
	gotoxy(23,13);cout<<"                                                                  ";} 
}

int Menu_Principal(){
	gotoxy(40,15);cout<<"NIVELES";
	gotoxy(40,16);cout<<"PERSONALIZAR";
	gotoxy(40,17);cout<<"INSTRUCCIONES";
	gotoxy(40,18);cout<<"SALIR";
	int x=37,y=15; gotoxy(x,y);cout<<">>";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==15) return 2; if (y==16) return 1; if (y==17) return 3; if (y==18) return 4;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=18) y++; else y=15; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=15) y--; else y=18; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<">>"; Beep(100,100);
		     
	    }
	}
}
void felicidades(int nivel){
	char name[7]; 
    victoria();
	system("cls");	system("color 0A"); marco(); 
	gotoxy(6,2); cout<<" __^__                                      		                   __^__ ";
    gotoxy(6,3); cout<<"( ___ )---------------------------------------------------------------------( ___ )";
    gotoxy(6,4); cout<<" | / |                                                                       | \\ | ";
    gotoxy(6,5); cout<<" | / |                                                                       | \\ | ";
    gotoxy(6,6); cout<<" | / |                                                                       | \\ | ";
    gotoxy(6,7); cout<<" | / |                                                                       | \\ | ";
    gotoxy(6,8); cout<<" | / |                                                                       | \\ | ";
    gotoxy(6,18); cout<<"(_____)---------------------------------------------------------------------(_____)";
    gotoxy(6,9);  cout<<" | / |                                                                       | \\ |";
    gotoxy(6,10); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,11); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,12); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,13); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,14); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,15); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,16); cout<<" | / |                                                                       | \\ |";
    gotoxy(6,17); cout<<" |___|                                                                       |___|";
 	gotoxy(15,4);cout<<" _____         _   _         _       _             _             ";
 	gotoxy(15,5);cout<<"|  ___|  ___  | | (_)  ___  (_)   __| |  __ _   __| |  ___   ___ ";
	gotoxy(15,6);cout<<"| |_    / _ \\ | | | | / __| | |  / _` | / _` | / _` | / _ \\ / __|";
 	gotoxy(15,7);cout<<"|  _|  |  __/ | | | || (__  | | | (_| || (_| || (_| ||  __/ \\__ \\";
 	gotoxy(15,8);cout<<"|_|     \\___| |_| |_| \\___| |_|  \\__,_| \\__,_| \\__,_| \\___| |___/"; 
	gotoxy(15,10);cout<<"Lograste completar nuestro reto, definitivamente eres el mejor en";
    gotoxy(15,11);cout<<"lo que respecta a la velocidad mental, por favor ingresa aqu\xA1  tu";
    gotoxy(15,12);cout<<"nombre o seud\xA2"<<"nimo para poder registrarte como el  mejor  jugador";
    gotoxy(15,13);cout<<"de este minijuego (se registrar\xA0 un m\xA0ximo de 6 letras/n\xA3meros).";
	gotoxy(15,17);cout<<"UNA VEZ INGRESADO PULSE ENTER PARA GUARDAR SU NOMBRE.";
	MostrarCursor();
	gotoxy(15,15);{cout<<"Nombre: ";  cin.ignore(); cin.getline(name,7,'\n'); }
	int espacio;
	//Lee si espacios es menor que 6
		
		ifstream espacios;
		espacios.open("datos/ESPACIOS.txt",ios::in);
		if (espacios.fail()){
		exit(1);}
		while (!espacios.eof()){ //Mientras no sea el final del archivo
		espacios>>espacio;
		}
		if (espacio==6) espacio--;
		espacios.close(); 
		
		 GuardarName(name,espacio); GuardarNivel(nivel,espacio);
		
		//Guarda si espacios es menor que 6
		if (espacio<6){
		ofstream espacios;
		espacios.open("datos/ESPACIOS.txt",ios::out);
		if (espacios.fail()){
		exit(1); }
		espacios<<espacio+1; }
	
	OcultarCursor();
	for (int i=4;i<18;i++){
		gotoxy(15,i);cout<<"                                                                 "; 
	}
	marco();
	gotoxy(15,4);cout<<"Muchas gracias "<<name<<" por completar este minijuego. Esperamos";
	gotoxy(15,5);cout<<"que haya sido de tu agrado, no olvides que este juego no es para"; 
	gotoxy(15,6);cout<<"cualquiera,una mente capaz de sumar tan r\xA0"<<"pido es incre\xA1"<<"blemente"; 
	gotoxy(15,7);cout<<"asombroso, sigue practicando y llegar\xA0"<<"s muy lejos, campe\xA2n.";
	gotoxy(15,14);cout<<"Nos despedimos, te deseamos mucha suerte, de parte de todos los";
	gotoxy(15,15);cout<<"compa\xA4"<<"eros que hicieron posible este juego.";
    
    for(int iii=15;iii<54;iii++){
	gotoxy(iii,9);cout<<" ..../\"\"\"\"\"\"\"\"|======[]    ";               gotoxy(iii-1,9);cout<<" ";
	gotoxy(iii,10);cout<<"..../\"\"\"\"\"\"\"\"\"\"\"\"|         ";          gotoxy(iii-1,10);cout<<" ";
	gotoxy(iii,11);cout<<"/\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\\";gotoxy(iii-1,11);cout<<" ";
	gotoxy(iii,12);cout<<"\\(@) (@) (@) (@) (@) (@)/  ";                     gotoxy(iii-1,12);cout<<" ";  Sleep(100); } 
	
	gotoxy(15,9); cout<<" ____  ____  ____  ____  ____  ____ "; 
	gotoxy(15,10);cout<<"||  ||||  ||||  ||||  ||||  ||||  ||";
	gotoxy(15,11);cout<<"||__||||__||||__||||__||||__||||__||";
	gotoxy(15,12);cout<<"|/__\\||/__\\||/__\\||/__\\||/__\\||/__\\|";
	gotoxy(17,10);cout<<name[0]; gotoxy(23,10);cout<<name[1]; gotoxy(29,10);cout<<name[2];
	gotoxy(35,10);cout<<name[3]; gotoxy(41,10);cout<<name[4]; gotoxy(47,10);cout<<name[5];
	
	gotoxy(28,17);cout<<"PULSE UNA TECLA PARA REGRESAR AL MEN\xE9";
	system("pause>nul"); system("color 01");MusicaOpening();
}
void gameover(int nivel,int esp){
	OcultarCursor();
	system("cls");marco();
	char name[7];
	gotoxy(12,5);cout<<"   ______  ___     __  ___  ______      ____  _    __  ______  ____     __";
	gotoxy(12,6);cout<<"  / ____/ /   |   /  |/  / / ____/     / __ \\| |  / / / ____/ / __ \\   / /";
	gotoxy(12,7);cout<<" / / __  / /| |  / /|_/ / / __/       / / / /| | / / / __/   / /_/ /  / / ";
	gotoxy(12,8);cout<<"/ /_/ / / ___ | / /  / / / /___      / /_/ / | |/ / / /___  / _, _/  /_/  ";
	gotoxy(12,9);cout<<"\\____/ /_/  |_|/_/  /_/ /_____/      \\____/  |___/ /_____/ /_/ |_|  (_) "; 
	MusicaPerder(); gotoxy(70,9);cout<<" ";
	gotoxy(13,11);cout<<"POR FAVOR INGRESE SU NOMBRE O SEUD\xE0"<<"NIMO. SE REGISTRAR\xB5 UN M\xB5XIMO";
	gotoxy(13,12);cout<<"DE 6 LETRAS/N\xE9MEROS."; 
	MostrarCursor();
	gotoxy(13,14);{cout<<"NOMBRE: "; cin.ignore(); cin.getline(name,7,'\n');}
	OcultarCursor(); GuardarName(name,esp); GuardarNivel(nivel,esp);
	gotoxy(33,16);cout<<"Suerte para la pr\xA2xima "<<name<<" :)"; 
	gotoxy(30,18);cout<<"PULSE UNA TECLA PARA REGRESAR AL MEN\xE9.";
	system("pause>nul"); MusicaOpening();
}
//Opcion 1: Elije
//Opcion 2: Predefinido
void FLASH_ANZAN()
{
	system("title FLASH ANZAN"); bool SALIR=true;
	Flash_Opening(); 
while (SALIR)
{
   system("cls");marco();
   Flash_Opening_SinAnimacion();
   int op,nivel,numeros,suma,suma2,numero[999],pregunta,ante,espacio;
   int opcion;
   int d,v,n; /// <---
   opcion=Menu_Principal(); 
   switch(opcion)
	{
	case 1: //OPCION 1 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        system("cls"); 
    	int rema;
	while(true)
	{
        system("cls");marco();figuritas_3(); OcultCursor();////////
        bool repetir=true;
        int menu=0;
        //rema=Menu_Principal();

        MarcoSuperior();  ///////////////////////
	    
		int limite_menor,limite_superior;  //CAMBIE A FLOAT A LADO DE VELOciDAD
		d=preguntaDigitos();
		for(int i=35;i<61;i++){gotoxy(i,8);cout<<" ";
		}
        v=preguntaVelo();
        n=preguntaCantNum();
		OcultCursor(); //////////////////////////////////////////
		//system("CLS"); /////////////////////////////////
		switch(d){
			case 1: limite_menor=1; limite_superior=9; break;
			case 2: limite_menor=10; limite_superior=99; break;
			case 3: limite_menor=100; limite_superior=999; break;
		}
		OcultCursor();//////////////
		
		
		srand(time(NULL));suma2=0;
			for (int i=0;i<n;i++){
			numeros=limite_menor+rand()%(limite_superior+1-limite_menor);
			switch(d){
				case 1: cout<<"\a"; system("cls");NumeroGrande_1D(numeros); break;
				case 2: cout<<"\a"; system("cls");NumeroGrande_2D(numeros); break;
				case 3: cout<<"\a"; system("cls");NumeroGrande_3D(numeros); break;
			}
			MarcoSuperior();marco();figuritas_3(); OcultCursor(); //////////////////////////////////////
			suma2=suma2+numeros; numero[i]=numeros; sleep(v);
			}
			system("cls");
			OcultCursor();/////////////////
			MarcoSuperior();marco();figuritas_3();
			
			while(repetir)
			{
				pregunta=preguntaSuma2();
				
				OcultCursor(); ////-------------------------------->>>>>>>>>>>>>
				
				
				if (pregunta==suma2)
				{
					gotoxy(40,15); cout<<"\xAD"<<"FELICIDADES\x21";
					gotoxy(32,17); cout<<"BIEN HECHO CRACK, SIGUE AS\326."; //repetir=false;
			        figuritas_1();figuritas_3();
			        
			        pregunta_solo_menu(); break;    
				}
			
				else{
                        gotoxy(28,12);cout<<"RESPUESTA INCORRECTA. LOS N\xE9MEROS SON:";
			
		        		for (int i=0;i<n;i++)
				        {
			    		gotoxy(41+i+i+i,14);
			    		{ cout<<numero[i]; if (i!=n-1) cout<<"-";} 
         				}
			        	gotoxy(40,17); cout<<"LA SUMA ES: "<<suma2;
		        		figuritas_2();
			
		        		repetir=pregunta_menu_u_otravez_2();
			        }
			    
  	        continue;
			}
		    break;
     }
	
	break;
	
	
	
	case 2: //OPCION 2 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	 int que,rea; 
	while (true)
	{
		system("cls"); marco(); 
		int romperbucle=0,intentos=4,menu=0; bool repetir=true,ganar=false;
	    que=Menu_2(); //Se llama a la función Menu para elegir y devolver un valor
		
		if (que==1){
			nivel=0; 
		}
        
		if (que==2){
		nivel=ElegirNivel(); if (nivel==0) continue;
		}
		
		if (que==3) {Records(); continue;}
				
		if (que==4) break;
		
		while (romperbucle==0)
		    {
			
			if (que==1){
			    if (intentos==0) break; 
				if (menu==1) break;
				nivel=nivel+1; repetir=true; 
				 
			}
			
			if (que==2)
			romperbucle=1; //FIN BUCLE
		
			switch(nivel)
			{
			
			case 1: //NIVEL 1 <---
				while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2); cout<<" _  _   _               _     _ ";
 				gotoxy(31,3); cout<<"| \\| | (_) __ __  ___  | |   / |";
 				gotoxy(31,4); cout<<"| .` | | | \\ V / / -_) | |   | |";
 				gotoxy(31,5); cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_|";
 				Rayos();
				semaforo();
				OcultarCursor();
				//Generar Numeros 
				srand(time(NULL)); suma=0;
				for (int i=0;i<5;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(2);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
		
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(32,17); cout<<"TU RESPUESTA ES ACERTADA, GENIO."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<5;i++){
					gotoxy(43+i+i,15);{ cout<<numero[i]; if (i!=4) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
			
			case 2: //NIVEL 2 <----
				while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _     ___ ";
				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   |_  )";
				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |    / / ";
				gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   /___|";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<6;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(2);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
	
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(41,15); cout<<"\xAD"<<"FANT\xB5"<<"STICO\x21";
					gotoxy(27,17); cout<<"SIGUE AS\xD6 CAMPE\xE0N, TU RESPUESTA ES ACERTADA."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<6;i++){
					gotoxy(41+i+i,15);{ cout<<numero[i]; if (i!=5) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
			
			case 3: //NIVEL 3
				while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				 gotoxy(31,2);cout<<" _  _   _               _     ____";
				 gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   |__ /";
				 gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |    |_ \\";
 				 gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |___/";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<7;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(2);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
			
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(28,17); cout<<"TU RESPUESTA ES ACERTADA, ERES INCRE\xD6"<<"BLE."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<7;i++){
					gotoxy(40+i+i,15);{ cout<<numero[i]; if (i!=6) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
			case 4: //NIVEL 4 <---
			    while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _     _ _  "; 
 				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   | | | ";
 				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |   |_  _|";
 				gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|     |_| ";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<8;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(2);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
		
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"FELICIDADES\x21";
					gotoxy(27,17); cout<<"TU RESPUESTA ES CORRECTA, ERES SENSACIONAL."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<8;i++){
					gotoxy(39+i+i,15);{ cout<<numero[i]; if (i!=7) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
			case 5: //NIVEL 5 <---
			     while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _     ___ ";
 				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   | __|";
 				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |   |__ \\";
			    gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |___/";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<10;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(2);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
			
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(41,15); cout<<"\xAD"<<"ASOMBROSO\x21";
					gotoxy(23,17); cout<<"RESPUESTA CORRECTA, \xA8"<<"HAY ALGO QUE NO PUEDAS HACER\x3F."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<10;i++){
					gotoxy(38+i+i,15);{ cout<<numero[i]; if (i!=9) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
		    case 6: //NIVEL 6
		         while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _      __ ";
 				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |    / / ";
 				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |   / _ \\";
 				gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   \\___/";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<5;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(1);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }

				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(17,17); cout<<"TU RESPUESTA ES ACERTADA, VEAMOS SI PUEDES CON LOS DEM\xB5"<<"S NIVELES :)"; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<5;i++){
					gotoxy(43+i+i,15);{ cout<<numero[i]; if (i!=4) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
			case 7: //NIVEL 7 <---
			     while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _     ____ ";
 				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   |__  |";
 				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |     / / ";
 				gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|    /_/  ";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<6;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(1);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
			
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"FELICIDADES\x21";
					gotoxy(20,17); cout<<"TU RESPUESTA ES CORRECTA, SUPERAS TODAS LAS EXPECTATIVAS."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<6;i++){
					gotoxy(42+i+i,15);{ cout<<numero[i]; if (i!=5) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
					
		    case 8: //NIVEL 8 <--
		         while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _     ___ ";
 				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   ( _ )";
 				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |   / _ \\";
 				gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   \\___/";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<8;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; Sleep(700);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
				
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(30,17); cout<<"RESPUESTA CORRECTA, ERES MAGN\xD6"<<"FICO."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<8;i++){
					gotoxy(39+i+i,15);{ cout<<numero[i]; if (i!=7) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
			case 9: //NIVEL 9	<--
			     while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(31,2);cout<<" _  _   _               _     ___ ";
 				gotoxy(31,3);cout<<"| \\| | (_) __ __  ___  | |   / _ \\";
 				gotoxy(31,4);cout<<"| .` | | | \\ V / / -_) | |   \\_, /";
 				gotoxy(31,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|    /_/ ";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<9;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; Sleep(700);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
		
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(24,17); cout<<"RESPUESTA ACERTADA, TU RAPIDEZ MENTAL ES PERFECTA."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<9;i++){
					gotoxy(38+i+i,15);{ cout<<numero[i]; if (i!=8) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
		    case 10: //NIVEL 10<----
		         while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(28,2);cout<<" _  _   _               _     _    __  ";
 				gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / |  /  \\ ";
 				gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | | () |";
 				gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_|  \\__/ ";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<10;i++){
				numeros=1+rand()%9; 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==0) numeros=numeros+2;
				
				NumeroGrande_1D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; Sleep(700);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
			
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(32,15); cout<<"\xAD"<<"FELICIDADES\x21"; gotoxy(47,15); cout<<"RESPUESTA CORRECTA.";
			gotoxy(18,17); cout<<"A PARTIR DE AQU\xD6 COMPLICAREMOS UN POCO LAS COSAS. \xA8"<<"EST\xB5"<<"S LISTO\x3F"; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<10;i++){
					gotoxy(37+i+i,15);{ cout<<numero[i]; if (i!=9) cout<<"-";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
		    case 11: //NIVEL 11 <---
		         while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(28,2);cout<<" _  _   _               _     _   _ ";
 				gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | / |";
 				gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | | |";
 				gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_| |_|";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<5;i++){
				numeros=10+rand()%(99+1-10); 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==9) numeros=numeros+2;
				
				NumeroGrande_2D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(3);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
	
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(22,17); cout<<"RESPUESTA ACERTADA, NO EXISTE NADA QUE TE PUEDA FRENAR."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<5;i++){
					gotoxy(37+i+i+i+i+i,15);{ cout<<numero[i]; if (i!=4) cout<<" -";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
			case 12: //NIVEL 12 <----
				      while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     _   ___ ";
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | |_  )";
 					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | |  / / ";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_| /___|";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<6;i++){
					numeros=10+rand()%(99+1-10); 
					if (ante==numeros) numeros=numeros-1;
					if (numeros==9) numeros=numeros+2;
				
					NumeroGrande_2D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; sleep(3);
			   		for(int o=7;o<13;o++){
			   		gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
					
					for(int o=7;o<13;o++){
			   		gotoxy(32,o);cout<<"                                          "; }
				
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(33,17); cout<<"RESPUESTA CORRECTA, M\xB5"<<"QUINA."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<6;i++){
					gotoxy(35+i+i+i+i+i,15);{ cout<<numero[i]; if (i!=5) cout<<" -";}
					}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				  }
			      }
				
				
			    } 
				
				break;
				
			case 13: //NIVEL 13 <---
				       while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     _   ____";
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | |__ /";
 					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | |  |_ \\";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_| |___/";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<6;i++){
					numeros=10+rand()%(99+1-10); 
					if (ante==numeros) numeros=numeros-1;
					if (numeros==9) numeros=numeros+2;
				
					NumeroGrande_2D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; sleep(3);
			   		for(int o=7;o<13;o++){
			   		gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
					
					for(int o=7;o<13;o++){
			   		gotoxy(32,o);cout<<"                                          "; }
				
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(20,17); cout<<"TU RESPUESTA ES ACERTADA, DEFINITIVAMENTE NO TIENES L\xD6"<<"MITES."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<6;i++){
					gotoxy(35+i+i+i+i+i,15);{ cout<<numero[i]; if (i!=5) cout<<" -";}
					}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				  }
			      }
				
				
			    } 
				
				break;
				
		    case 14: //NIVEK 14 <---
   				   while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     _   _ _  ";
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | | | | ";
 					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | |_  _|";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_|   |_| ";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<7;i++){
					numeros=10+rand()%(99+1-10); 
					if (ante==numeros) numeros=numeros-1;
					if (numeros==9) numeros=numeros+2;
				
					NumeroGrande_2D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; sleep(2);
			   		for(int o=7;o<13;o++){
			   		gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
					
					for(int o=7;o<13;o++){
			   		gotoxy(32,o);cout<<"                                          "; }
		
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"FELICIDADES\x21";
					gotoxy(25,17); cout<<"TU RESPUESTA ES ACERTADA, ASOMBROSO, VAS POR TODO."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<7;i++){
					gotoxy(33+i+i+i+i+i,15);{ cout<<numero[i]; if (i!=6) cout<<" -";}
					}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				  }
			      }
				
				
			    } 
				
				break;
				
			case 15: //NIVEL 15  <----
				      while (repetir){
				system("cls"); marco(); if (que==1) corazon(intentos);
				gotoxy(28,2);cout<<" _  _   _               _     _   ___ ";
 				gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | | __|";
 				gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | |__ \\";
 				gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_| |___/";
 				Rayos();
				semaforo();
				OcultarCursor(); 
				srand(time(NULL)); suma=0;
				for (int i=0;i<8;i++){
				numeros=10+rand()%(99+1-10); 
				if (ante==numeros) numeros=numeros-1;
				if (numeros==9) numeros=numeros+2;
				
				NumeroGrande_2D(numeros); Beep(440,300);
				suma=suma+numeros; numero[i]=numeros; sleep(2);
			   	for(int o=7;o<13;o++){
			   	gotoxy(32,o); cout<<"                                         "; }
				ante=numeros;
				}
				MostrarCursor();
				
				for(int o=7;o<13;o++){
			   	gotoxy(32,o);cout<<"                                          "; }
			
				pregunta=preguntaSuma();
				
				OcultarCursor();
				
				if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(10,17); cout<<"RESPUESTA ACERTADA, FALTA POCO PARA QUE TE CORONES COMO EL MEJOR DE TODOS :)"; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
				}
				else{
				gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
				for (int i=0;i<8;i++){
					gotoxy(30+i+i+i+i+i,15);{ cout<<numero[i]; if (i!=7) cout<<" -";}
					}
				gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
				if (que==2) { pregunta_solo_menu(); break;}
				
				if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
				 }
			    }
				
				
			    }
				
				break;
				
			case 16: //Nivel 16 <---
				  	   while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     _    __ ";
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / |  / / ";
 					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | / _ \\";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_| \\___/";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<8;i++){
					numeros=1+rand()%9; 
					if (ante==numeros) numeros=numeros-1;
					if (numeros==0) numeros=numeros+2;
				
					NumeroGrande_1D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; Sleep(300);
				   	for(int o=7;o<13;o++){
				   	gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
				
					for(int o=7;o<13;o++){
			 	  	gotoxy(32,o);cout<<"                                          "; }
				
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(26,17); cout<<"RESPUESTA CORRECTA, YA ERES UNO DE LOS GRANDES."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<8;i++){
						gotoxy(39+i+i,15);{ cout<<numero[i]; if (i!=7) cout<<"-";}
						}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
					 }
				    }
				
				
				    }
				
				break;
										
			case 17: //Nivel 17 <----
				     while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     _   ____ ";
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | |__  |";
 					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | |   / / ";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_|  /_/  ";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<9;i++){
					numeros=1+rand()%9; 
					if (ante==numeros) numeros=numeros-1;
					if (numeros==0) numeros=numeros+2;
				
					NumeroGrande_1D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; Sleep(300);
				   	for(int o=7;o<13;o++){
				   	gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
				
					for(int o=7;o<13;o++){
			 	  	gotoxy(32,o);cout<<"                                          "; }
				
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"FELICIDADES\x21";
					gotoxy(20,17); cout<<"TU RESPUESTA ES 100% CORRECTA, TIENES MIS RESPETOS GENIO."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<9;i++){
						gotoxy(38+i+i,15);{ cout<<numero[i]; if (i!=8) cout<<"-";}
						}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
					 }
				    }
				
				
				    }
				
				break;
						
			case 18: //Nivel 18<-----
				     while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     _   ___ ";
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | ( _ )";
 					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | / _ \\";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_| \\___/";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<10;i++){
					numeros=1+rand()%9; 
					if (ante==numeros) numeros=numeros-1;
					if (numeros==0) numeros=numeros+2;
				
					NumeroGrande_1D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; Sleep(300);
				   	for(int o=7;o<13;o++){
				   	gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
				
					for(int o=7;o<13;o++){
			 	  	gotoxy(32,o);cout<<"                                          "; }
			
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(11,17); cout<<"RESPUESTA CORRECTA, M\xB5"<<"STER, LE PONDREMOS UN POCO DE DIFICULTAD AL SIGUIENTE."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<10;i++){
						gotoxy(37+i+i,15);{ cout<<numero[i]; if (i!=9) cout<<"-";}
						}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
					 }
				    }
				
				
				    }
				
				break;
				
			case 19: //Nivel 19 <--
				       while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					    gotoxy(28,2);cout<<" _  _   _               _     _   ___ ";
 						gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   / | / _ \\";
 						gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |   | | \\_, /";
 						gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   |_|  /_/ ";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<5;i++){
					numeros=100+rand()%(999+1-100);
					if (ante==numeros) numeros=numeros-1;
					if (numeros==99) numeros=numeros+2;
				
					NumeroGrande_3D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; sleep(2);
				   	for(int o=7;o<13;o++){
				   	gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
				
					for(int o=7;o<13;o++){
			 	  	gotoxy(32,o);cout<<"                                          "; }
			
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(7,17); cout<<"RESPUESTA ACERTADA, VENCISTE TODOS NUESTROS OBST\xB5"<<"CULOS, SOLO FALTA 1 M\xB5"<<"S, M\xB5"<<"QUINA."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					menu=pregunta_menu_o_avanza(nivel+1);
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<5;i++){
						gotoxy(39+i+i+i+i,15);{ cout<<numero[i]; if (i!=4) cout<<"-";}
						}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
					 }
				    }
				
				
				    }
				
				break;
				
			case 20: //Nivel 20 <----
				      while (repetir){
					system("cls"); marco(); if (que==1) corazon(intentos);
					gotoxy(28,2);cout<<" _  _   _               _     ___    __  "; 
 					gotoxy(28,3);cout<<"| \\| | (_) __ __  ___  | |   |_  )  /  \\ ";
					gotoxy(28,4);cout<<"| .` | | | \\ V / / -_) | |    / /  | () |";
 					gotoxy(28,5);cout<<"|_|\\_| |_|  \\_/  \\___| |_|   /___|  \\__/ ";
 					Rayos();
					semaforo();
					OcultarCursor(); 
					srand(time(NULL)); suma=0;
					for (int i=0;i<6;i++){
					numeros=100+rand()%(999+1-100);
					if (ante==numeros) numeros=numeros-1;
					if (numeros==99) numeros=numeros+2;
				
					NumeroGrande_3D(numeros); Beep(440,300);
					suma=suma+numeros; numero[i]=numeros; sleep(2);
				   	for(int o=7;o<13;o++){
				   	gotoxy(32,o); cout<<"                                         "; }
					ante=numeros;
					}
					MostrarCursor();
				
					for(int o=7;o<13;o++){
			 	  	gotoxy(32,o);cout<<"                                          "; }
			
					pregunta=preguntaSuma();
				
					OcultarCursor();
				
					if (pregunta==suma){
					Beep(90,100); gotoxy(40,15); cout<<"\xAD"<<"ENHORABUENA\x21";
					gotoxy(32,17); cout<<"TU RESPUESTA ES 100% CORRECTA."; repetir=false;
			        
			        if (que==2) { pregunta_solo_menu(); break;}
					sleep(3); romperbucle=1; ganar=true; felicidades(nivel); break;
					}
					else{
					gotoxy(26,13);cout<<"LA RESPUESTA NO ES CORRECTA. LOS N\xE9MEROS SON:";
					for (int i=0;i<6;i++){
						gotoxy(36+i+i+i+i,15);{ cout<<numero[i]; if (i!=5) cout<<"-";}
						}
					gotoxy(40,17); cout<<"LA SUMA ES: "<<suma;
				
					if (que==2) { pregunta_solo_menu(); break;}
				
					if (que==1){
					intentos--; corazon(intentos); 
					if (intentos==0){
						break;
					}
					repetir=pregunta_menu_u_otravez();
					if (repetir == false) menu=1;
					 }
				    }
				
				
				    }
				
				break;
					  
					    
		    }
	
	        }
	if (ganar==true) continue;
	
	if (que==1&&menu==0){
		sleep(3);
		//Lee si espacios es menor que 6
		
		ifstream espacios;
		espacios.open("datos/ESPACIOS.txt",ios::in);
		if (espacios.fail()){
		exit(1);}
		while (!espacios.eof()){ //Mientras no sea el final del archivo
		espacios>>espacio;
		}
		if (espacio==6) espacio--;
		espacios.close(); 
		
		gameover(nivel,espacio);
		
		//Guarda si espacios es menor que 6
		if (espacio<6){
		ofstream espacios;
		espacios.open("datos/ESPACIOS.txt",ios::out);
		if (espacios.fail()){
		exit(1); }
		espacios<<espacio+1; }
	}
  
  	continue;
	
	
    }
	
	break;
    
    
    case 3: //OPCION 3 ||||||||||||||||||||||||||||||||||||||||||||
    system("cls"); marco();
    gotoxy(8,2);cout<<"INSTRUCCIONES"; gotoxy(8,3);cout<<"\337\337\337\337\337\337\337\337\337\337\337\337\337";
    gotoxy(8,4);cout<<"Flash Anzan es un juego de ingenio y destreza mental, consiste en sumar n\xA3meros";
    gotoxy(8,5);cout<<"de diversa longitud que aparecer\xA0n en pantalla r\xA0pidamente. Para esto se cuenta";
    gotoxy(8,6);cout<<"con 2 modos de juego: \"PERSONALIZAR\" y \"NIVELES\".";
    gotoxy(9,8);cout<<"MODO NIVELES: ";
    gotoxy(9,9);cout<<"Consta de 20 niveles, necesitas completar cada nivel para poder avanzar al";
    gotoxy(9,10);cout<<"siguiente, obtienes 4 intentos para completar todo el modo, podr\xA0s guardar";
    gotoxy(9,11);cout<<"tu nombre una vez perdido  \xA2 ganado el juego.  Se guardar\xA0 autom\xA0ticamente";
    gotoxy(9,12);cout<<"en \"RECORDS\" a los mejores, adem\xA0s la dificultad incremente cada nivel.";
    gotoxy(9,14);cout<<"MODO PERSONALIZAR: ";
    gotoxy(9,15);cout<<"Este modo pone a prueba tu mente para precisar tus operaciones de suma y as\xA1";
    gotoxy(9,16);cout<<"practicar tu habilidad para el MODO NIVELES, ya que te permite escoger  la";
    gotoxy(9,17);cout<<"velocidad, cantidad de d\xA1"<<"gitos y cifras, seg\xA3"<<"n tus capacidades matem\xA0"<<"ticas.";
    pregunta_solo_menu(); 
    break;
    
    
    
    case 4: SALIR=false; 
    break;
	}
  

}

system("cls");Menu_principal();

}

//GUERRA MIA

void marco_GUERRA(){
	int x,y,i,j;
	OcultarCursor();
	for(i=4;i<90;i++)  //PARA LAS LINEAS HORIZONTALES
	{
		gotoxy(i,1);cout<<"\315";
	}
	gotoxy (90,1);cout<<"\273";
	for(j=2;j<20;j++)  //PARA LAS LINEAS VERTICALES
    {
        gotoxy(90,j);cout<<"\272";
	}
	gotoxy (90,20);cout<<"\274";
	for(i=89;i>3;i--)  //PARA LAS LINEAS HORIZONTALES
	{
    	gotoxy(i,20);cout<<"\315";
	}
    gotoxy (4,20);cout<<"\310";
	for(j=19;j>1;j--)  //PARA LAS LINEAS VERTICALES
	{
		gotoxy(4,j);cout<<"\272";
    }
    gotoxy (4,1);cout<<"\311";
}
void ak_47(){
	char A={'\364'};
	gotoxy(5,4); cout<<"	                                                     "<<A<<A;
	gotoxy(5,5); cout<<"                                          "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,6);cout<<"                                 "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,7);cout<<"                        "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,8);cout<<"                  "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,9);cout<<"               "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,10);cout<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,11);cout<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<" "<<A<<" "<<A<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,12);cout<<" "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<" "<<A<<A<<A<<A<<A<<"   "<<A<<"  "<<A<<A<<A<<A<<A<<A;
    gotoxy(5,13);cout<<"  "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<"    "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<"   "<<A<<A<<A<<A<<A<<A;
    gotoxy(5,14);cout<<"   "<<A<<A<<A<<A<<A<<A<<A<<A<<A<<A<<"     "<<A<<A<<A<<A<<A<<"        "<<A<<A<<A<<A<<A<<A;
	gotoxy(5,15);cout<<"    "<<A<<A<<A<<A<<A<<A<<A<<"       "<<A<<A<<A<<A<<A<<"         "<<A<<A<<A<<A<<A<<A<<A;
	gotoxy(5,16);cout<<"     "<<A<<A<<A<<A<<"         "<<A<<A<<A<<A<<A<<"          "<<A<<A<<A<<A<<A<<A<<A<<A;
}
void OpeningDeEstaGuerraMia(){
	
    marco_GUERRA();                                                                                
                                                                                   
gotoxy(10,3);cout<<"######   ####  #####   ##         ####  #    # ###### #####  #####    ##  ";   
gotoxy(10,4);cout<<"#       #        #    #  #       #    # #    # #      #    # #    #  #  # ";   
gotoxy(10,5);cout<<"#####    ####    #   #    #      #      #    # #####  #    # #    # #    #";
gotoxy(10,6);cout<<"#           ##   #   ######      #  ### #    # #      #####  #####  ######";   
gotoxy(10,7);cout<<"#       #   ##   #   #    #      #    # #    # #      #   #  #   #  #    #";     
gotoxy(10,8);cout<<"######  #####    #   #    #       ####   ####  ###### #    # #    # #    #";   

gotoxy(38,10);cout<<"#    #  #    ##  "; 
gotoxy(38,11);cout<<"##  ##  #   #  # "; 
gotoxy(38,12);cout<<"# ## #  #  #    #"; 
gotoxy(38,13);cout<<"#    #  #  ######"; 
gotoxy(38,14);cout<<"#    #  #  #    #"; 
gotoxy(38,15);cout<<"#    #  #  #    #";

gotoxy(8,13);cout<<" ..../\"\"\"\"\"\"\"\"|======[]    ";               
gotoxy(8,14);cout<<"..../\"\"\"\"\"\"\"\"\"\"\"\"|         ";         
gotoxy(8,15);cout<<"/\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\\";
gotoxy(8,16);cout<<"\\(@) (@) (@) (@) (@) (@)/  ";                     

gotoxy(61,13);cout<<"  []======|\"\"\"\"\"\"\"\"\\....";               
gotoxy(61,14);cout<<"       |\"\"\"\"\"\"\"\"\"\"\"\"\\....";         
gotoxy(61,15);cout<<"/\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\\";
gotoxy(61,16);cout<<"\\(@) (@) (@) (@) (@) (@)/  ";                     

gotoxy(31,19);cout<<"PRESIONE UNA TECLA PARA CONTINUAR";
system("pause>nul"); system("cls"); 
	
}

string nombre(){
    ak_47(); marco_GUERRA(); gotoxy(60,9);cout<<"INSERTA TU NOMBRE";
	gotoxy(54,10);cout<<"\332"; 
	for (int i=55;i<82;i++){
		gotoxy(i,10);cout<<"\304";
	}
	gotoxy(82,10);cout<<"\277"; gotoxy(82,11);cout<<"\263"; gotoxy(82,12);cout<<"\331";
	for(int i=81;i>54;i--){
		gotoxy(i,12);cout<<"\304";
	}
	gotoxy(54,12);cout<<"\300"; gotoxy(54,11);cout<<"\263";
	char name[7];
	gotoxy(57,15);cout<<"M\xB5XIMO 6 LETRAS O N\xE9MEROS";
	MostrarCursor();
	gotoxy(56,11);{ cin.ignore();cin.getline(name,7,'\n'); }
	OcultarCursor();
	
		for (int k=8;k<16;k++){
		gotoxy(47,k);cout<<"                                         ";
        }
    gotoxy(49,11);cout<<"Bienvenido(a) "<<name<<", pulsa una TECLA."; 	system("pause>nul");
	gotoxy(47,11);cout<<"                                        ";
	return name;
    
}

void historia_2()
{
		OcultCursor();
	    marco_2();
	    int opcion,elegir,op,elige;
	    marco_2();
	    radio();
        miesposa();
        felizmente();
        pregunta_continuar();
        
        OcultCursor();
	    marco_2();
        apago_maquina();
        subo_al_tren();
        pregunta_continuar();
        
        OcultCursor();
	    marco_2();
        sera_posible();
	    vecino();
	    opcion=Menu();
        switch(opcion)
        {
        	case 1: system("cls");
			        OcultCursor();
	                marco_2();
					respuesta_1_vecino();
			        pregunta_continuar();
			        
			        OcultCursor();
	                marco_2();
	                Continua_Historia_Jamas_R1();
	                pregunta_continuar();
	                
	                OcultCursor();
	                marco_2();
	                la_noche_R1();
	                //MENU DE 5 OPCIOnES
	                elegir=Menu_R1();
	                switch(elegir)
	                {
	                	case 1: system("cls");
	                            OcultCursor();
	                            marco_2();
	                            MuchasGracias_R1();
	                            //MENU ELIGE 3 OPCIONES
	                            op=Menu_R1_1();
	                            switch(op)
	                            {
	                            	case 1: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_comida_R1_parte1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Recuerdo_joyas_R1_caso1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1_caso1();
											
											
											
											break;
	                            		
	                            		
	                            		
	                            		
	                            	case 2: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Recuerdo_joyas_R1_2();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											La_manana_llego_R1_1();
	                                        
	                                        
	                                        
	                                        break;
	                            		
	                            		
	                            		
	                            	case 3: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_dinero_parte_1_R1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Sugerir_dinero_parte_2_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_3_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_4_R1();
	                                        
	                                        
	                                        break;
	                            		
								}
	                            
	                            
	                            
	                            break;
	                            
	                            
	                            
	                    case 2: system("cls");
	                            OcultCursor();
	                            marco_2();
	                            Espera_un_momento_R1();
	                            //MENU ELIGE 3 OPCIONES
	                            op=Menu_R1_2();
	                            switch(op)
	                            {
	                            	case 1: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_comida_R1_parte1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Recuerdo_joyas_R1_caso1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1_caso1();
											
											
											
											break;
	                            		
	                            		
	                            		
	                            		
	                            	case 2: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Recuerdo_joyas_R1_2();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											La_manana_llego_R1_1();
	                                        
	                                        
	                                        
	                                        break;
	                            		
	                            		
	                            		
	                            	case 3: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_dinero_parte_1_R1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Sugerir_dinero_parte_2_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_3_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_4_R1();
	                                        
	                                        
	                                        break;
	                            		

								}
	                            

	                            break;

	                            
	                    case 3: system("cls");
	                            OcultCursor();
	                            marco_2();
	                            Como_te_pago_R1();
	                            //MENU ELIGE 3 OPCIONES
	                            op=Menu_R1_3();
	                            switch(op)
	                            {
	                            	case 1: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_comida_R1_parte1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Recuerdo_joyas_R1_caso1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1_caso1();
											
											
											
											break;
	                            		
	                            		
	                            		
	                            		
	                            	case 2: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Recuerdo_joyas_R1_2();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											La_manana_llego_R1_1();
	                                        
	                                        
	                                        
	                                        break;
	                            		
	                            		
	                            		
	                            	case 3: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_dinero_parte_1_R1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Sugerir_dinero_parte_2_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_3_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_4_R1();
	                                        
	                                        
	                                        break;
	                            		

								}
	                            
	                            
	                            
	                            break;

	                	
					}
	                
			        break;
			        
			case 2: system("cls");
			        OcultCursor();
	                marco_2();
	                respuesta_2_vecino();
	                pregunta_continuar();
	                
	                OcultCursor();
	                marco_2();
	                se_que_no_hay_mucho_R2();
	                pregunta_continuar();
	                
	                OcultCursor();
	                marco_2();
	                no_fue_hasta_la_tarde_R2();
	                //MENU DE 5 OPCIOnES
	                elegir=Menu_R2();
	                switch(elegir)
	                {
	                	case 1: //system("cls");
	                            OcultCursor();
	                            marco_2();
	                            MuchasGracias_R2();
	                            //MENU ELIGE 3 OPCIONES
	                            op=Menu_R2_1();
	                            switch(op)
	                            {
	                            	case 1: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_comida_R2_parte1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Recuerdo_joyas_R2_caso1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Recuerdo_joyas_R2_fin_2();
	       
	                                        break;
	                                        
	                                        
	                                        
	                                case 2: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Recuerdo_joyas_R1_2();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											La_manana_llego_R1_1();
	                                        
	                                        
	                                        
	                                        break;
	                            		
	                            		
	                            		
	                            	case 3: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_dinero_parte_1_R1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Sugerir_dinero_parte_2_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_3_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_4_R1();
	                                        
	                                        
	                                        break;
								}
								
								
								
								
								
								
								break;
								
								
									                		
	                	case 2: system("cls");
	                            OcultCursor();
	                            marco_2();
	                            Espera_un_momento_R2();
	                            //MENU ELIGE 3 OPCIONES
	                            op=Menu_R2_2();
	                            switch(op)
	                            {
	                            	case 1: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_comida_R1_parte1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Recuerdo_joyas_R1_caso1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1_caso1();
											
											
											
											break;
	                            		
	                            		
	                            		
	                            		
	                            	case 2: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Recuerdo_joyas_R1_2();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											La_manana_llego_R1_1();
	                                        
	                                        
	                                        
	                                        break;
	                            		
	                            		
	                            		
	                            	case 3: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_dinero_parte_1_R1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Sugerir_dinero_parte_2_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_3_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_4_R1();
	                                        
	                                        
	                                        break;
								}
	                            
	                            
	                            
	                            
	                            break;
	                		
	                		
	                		
	                		
	                		
	                		
	                		
	                	case 3: system("cls");
	                            OcultCursor();
	                            marco_2();
	                            Como_te_pago_R2();
	                            //MENU ELIGE 3 OPCIONES
	                            op=Menu_R2_3();
	                             switch(op)
	                            {
	                            	case 1: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_comida_R1_parte1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Recuerdo_joyas_R1_caso1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1_caso1();
											
											
											
											break;
	                            		
	                            		
	                            		
	                            		
	                            	case 2: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Recuerdo_joyas_R1_2();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Tengo_unas_joyas_parte1_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											La_manana_llego_R1_1();
	                                        
	                                        
	                                        
	                                        break;
	                            		
	                            		
	                            		
	                            	case 3: system("cls");
	                                        OcultCursor();
	                                        marco_2();
	                                        Sugerir_dinero_parte_1_R1();
	                                        pregunta_continuar();
	                                        
	                                        OcultCursor();
											marco_2();
											Sugerir_dinero_parte_2_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_3_R1();
											pregunta_continuar();
											
											OcultCursor();
											marco_2();
											Sugerir_dinero_parte_4_R1();
	                                        
	                                        
	                                        break;
								}
	                            
	                            
	                            
	                            
	                            break;
	                            
	                            
	                            
					}
	                
	                break;
	                
		}

	tu_hermano_te_visita();
	
}

void radio()
{
	gotoxy (7,3);cout<<"La radio todav\241a tiene uso para rela_";
	gotoxy (7,4);cout<<"jar un poco la tensi\242n en medio de";
	gotoxy (7,5);cout<<"todo este conflicto. Sin embargo,";
	gotoxy (7,6);cout<<"todav\241a podemos usarlo para algo m\240s";
	gotoxy (7,7);cout<<"\243til.";
}
void miesposa()
{
	gotoxy (7,9);cout<<"Mi esposa y yo originalmente lo com_";
	gotoxy (7,10);cout<<"pra como regalo para mi jefe de traba_";
	gotoxy (7,11);cout<<"jo, gracias a las insistencias de";
	gotoxy (7,12);cout<<"B\240rbara decidimos comprar el modelo";
	gotoxy (7,13);cout<<"m\240s caro disponible para ganar el";
	gotoxy (7,14);cout<<"favor del se\244or Marco, lamentablemen_";
	gotoxy (7,15);cout<<"te la guerra estall\242 y como el";
	gotoxy (7,16);cout<<"cumplea\244os del estimado ser\241a impo_";
	gotoxy (7,17);cout<<"sible en estas terribles condiciones.";
}

void felizmente()
{
	gotoxy (50,3);cout<<"Felizmente, esta coincidencia podr\241a";
	gotoxy (50,4);cout<<"salvarle la vida a mi hija.";
	gotoxy (50,5);cout<<"Este modelo ten\241a un transmisor, que,";
	gotoxy (50,6);cout<<"pese a que era de baja potencia,"; 
	gotoxy (50,7);cout<<"al menos podr\241a transmitir cortos";
	gotoxy (50,8);cout<<"mensajes a cualquier receptora";
	gotoxy (50,9);cout<<"disponible.";
	gotoxy (50,10);cout<<"La encend\241 y supliqu\202 a cualquier";	
	gotoxy (50,11);cout<<"alma que oyera:";
	gotoxy (50,12);cout<<"\x22"<<"\250Hola?"<<"\x22";
	gotoxy (50,13);cout<<"\x22"<<"Por favor, quien sea, responda..."<<"\x22";
	gotoxy (50,14);cout<<"\x22"<<"Mi hija est\240 muy enferma.";
	gotoxy (50,15);cout<<"Necesitamos vendas y medicamentos."<<"\x22";
	gotoxy (50,16);cout<<"\x22"<<"Estamos en los departamentos de la";
	gotoxy (50,17);cout<<"calle Brace Mulic y la avenida.";
	gotoxy (50,18);cout<<"Transverzala"<<"\x22";
}

void apago_maquina()
{
	gotoxy (7,3);cout<<"Apago la m\240quina...";	
	gotoxy (7,4);cout<<"Est\240 funcionando a bater\241as y s\202"; 	
	gotoxy (7,5);cout<<"que decir m\240s ser\241a acortar la corta";	
	gotoxy (7,6);cout<<"vida que le queda a la radio, cosa que"; 	
	gotoxy (7,7);cout<<"quiero evitar a toda costa.";	
	gotoxy (7,8);cout<<"El llanto de Amelia se intensifica,";	
	gotoxy (7,9);cout<<"no puedo hacer nada para parar este";
	gotoxy (7,10);cout<<"sufrimiento.";
	gotoxy (7,11);cout<<"Al fin de todo solo soy un humano.";
	gotoxy (7,12);cout<<"Subo a la cama y encuentro mucosidad y";
	gotoxy (7,13);cout<<"l\240grimas ensuciando la cara de la per_";
	gotoxy (7,14);cout<<"sona que tanto amo, me siento in\243til.";
	gotoxy (7,15);cout<<"S\202 que las cosas no pueden seguir as\241,";
	gotoxy (7,16);cout<<"pero la casa est\240 vac\241a y no hay";
	gotoxy (7,17);cout<<"ning\243n tipo de medicina que alivie el";
	gotoxy (7,18);cout<<"dolor que tanto le aflige.";
	
}

void subo_al_tren()
{
	gotoxy (50,3);cout<<"Espero que darle de comer ayude en algo.";
	gotoxy (50,4);cout<<"Subo al tercer piso donde yace ah\241 la";
	gotoxy (50,5);cout<<"cocina de kerosene, intento calentar un"; 
	gotoxy (50,6);cout<<"poco de agua y sopa enlatada para ella,";
	gotoxy (50,7);cout<<"el agua es indiferente a los llantos,";
	gotoxy (50,8);cout<<"que ella provoca. Soy el \243nico que";
	gotoxy (50,9);cout<<"ella tiene a su cuidado.";
	gotoxy (50,10);cout<<"\x22"<<"Mira peque\244a. Tengo algo de comida."<<"\x22";
	gotoxy (50,11);cout<<"Le doy cuchara a cuchara en su peque\244a";
	gotoxy (50,12);cout<<"boca, ella apenas tiene las fuerzas"; 
	gotoxy (50,13);cout<<"para masticar y d\202bilmente come lo que";
	gotoxy (50,14);cout<<"le ofrezco.";
	gotoxy (50,15);cout<<"\x22"<<"As\241 es, esa es mi ni\244a. Come todo,";
	gotoxy (50,16);cout<<"te vas a sentir mejor pronto."<<"\x22";
	gotoxy (50,17);cout<<"En ese momento escucho lo impensable."; 
}

void sera_posible()
{
	gotoxy (7,3);cout<<"En medio del sonido infernal de la";
	gotoxy (7,4);cout<<"ciudad escucho el sonido de la puerta.";
	gotoxy (7,5);cout<<"\250Ser\240 posible?, \250Alguien esperando";
	gotoxy (7,6);cout<<"afuera de esta casa pese a todo lo que";
	gotoxy (7,7);cout<<"est\240 sucediendo?";
	gotoxy (7,8);cout<<"\x22"<<"Abran la puerta, tengo algunas cosas";
	gotoxy (7,9);cout<<"que te puedan gustar."<<"\x22";
	gotoxy (7,10);cout<<"Inmediatamente me apresuro a bajar";
	gotoxy (7,11);cout<<"para responder al individuo.";
	gotoxy (7,12);cout<<"Miro por la ventana y encuentro un";
	gotoxy (7,13);cout<<"hombre con varias mochilas y pantalo_";
	gotoxy (7,14);cout<<"nes de varios bolsillos. No puedo"; 
	gotoxy (7,15);cout<<"creerlo, es nuestro vecino de anta\244o.";
    gotoxy (7,16);cout<<"Nunca pudimos interactuar mucho en el";
    gotoxy (7,17);cout<<"pasado, de hecho, ni siquiera recuerdo";
    gotoxy (7,18);cout<<"su nombre, pero ahora est\240 conmigo.";
}

void vecino()          /////// hasta ac primera historia
{
	gotoxy (50,3);cout<<"Me decido a abrir la puerta s\202 que \202l";
	gotoxy (50,4);cout<<"no es un gran amigo m\202o, pero tampoco";
	gotoxy (50,5);cout<<"fue un hombre de desconfianza.";
	gotoxy (50,6);cout<<"\x22"<<"\250Y? \250C\242mo va a ser?"<<"\x22";
	
	gotoxy (50,8);cout<<"El mercader espera tu respuesta:";  //OPCIONESS

}

void respuesta_1_vecino()   // OIGA Me ReCONOCE
{
	gotoxy (7,3);cout<<"\x22"<<"Oiga, \250me reconoces?"<<"\x22";
	gotoxy (7,4);cout<<"\x22"<<"Dudo que nos conozcamos, incluso si";
    gotoxy (7,5);cout<<"fuera as\241 no cambia por lo que vine";
    gotoxy (7,6);cout<<"aqu\241.";
    gotoxy (7,7);cout<<"Mira, tengo un par de cosas aqu\241, te";
    gotoxy (7,8);cout<<"puedo cambiar por comida, agua o un";
    gotoxy (7,9);cout<<"arma."<<"\x22";
    gotoxy (7,10);cout<<"Parece que no recordarme, desear\241a ha_";
    gotoxy (7,11);cout<<"ber tenido mejores relaciones con \202l.";
    respuesta_1_vecino_1();
}

void respuesta_1_vecino_1()
{
	gotoxy (7,12);cout<<"Reviso la mochila, bolsas y bolsillos";
	gotoxy (7,13);cout<<"que tiene el invitado. Tiene cigarri_";
	gotoxy (7,14);cout<<"llos, hojas de tabaco, unas latas de"; 
	gotoxy (7,15);cout<<"comida, agua, un par de balas sueltas";
	gotoxy (7,16);cout<<"y pedazos de electr\242nicos.";
	gotoxy (7,17);cout<<"Nada es de importancia para m\241 y no va";
	gotoxy (7,18);cout<<"a ayudar a Amelia.";
	
	gotoxy (50,3);cout<<"\x22"<<"Tendr\240s medicina o vendas para mi";
	gotoxy (50,4);cout<<"peque\244a"<<"\x22";
	gotoxy (50,5);cout<<"\x22"<<"Eh, espera. \250El tipo que estaba";
	gotoxy (50,6);cout<<"dando esa se\244al de radio es usted?"<<"\x22";
	gotoxy (50,7);cout<<"\x22"<<"S\241, soy yo. Mi ni\244a est\240 demasiado";
	gotoxy (50,8);cout<<"enferma. Necesito pastillas para que";
	gotoxy (50,9);cout<<"se cure."<<"\x22";
	gotoxy (50,10);cout<<"\x22"<<"\250De qu\202 hablas?"<<"\x22";
	gotoxy (50,11);cout<<"\x22"<<"Necesito la medicina, en serio."<<"\x22";
	respuesta_1_vecino_2();
}

void respuesta_1_vecino_2()    // FIN RESPUESTA 1
{
	gotoxy (50,12);cout<<"\x22"<<"No te mentir\202 amigo, encontrar";
	gotoxy (50,13);cout<<"cosas como esa no es tarea f\240cil"<<"\x22";
	gotoxy (50,14);cout<<"\x22"<<"Puedo cambiarte un par de cosas que";
	gotoxy (50,15);cout<<"tengo, no quiero que mi ni\244a muera."<<"\x22";
	gotoxy (50,16);cout<<"\x22"<<"Ver\202 lo que puedo hacer. No esperes";
	gotoxy (50,17);cout<<"que cumpla mi promesa."<<"\x22";
	
}

void respuesta_2_vecino()    // MI HIA ESTA MUY ENferMA
{
	gotoxy (7,3);cout<<"\x22"<<"Mi hija est\240 muy enferma, necesito";
	gotoxy (7,4);cout<<"medicina"<<"\x22";
	gotoxy (7,5);cout<<"\x22"<<"Ah, eres el tipo de la radio"<<"\x22";
	gotoxy (7,6);cout<<"\x22"<<"\x21"<<"S\241!, \250Tienes medicina?"<<"\x22";
	gotoxy (7,7);cout<<"\x22"<<"Es dif\241cil encontrar medicinas,";
	gotoxy (7,8);cout<<"amigo."<<"\x22";
	gotoxy (7,9);cout<<"\x22"<<"Te lo ruego, ella es todo lo que";
	gotoxy (7,10);cout<<"tengo."<<"\x22";
	gotoxy (7,11);cout<<"\x22"<<"Demasiado peligroso para m\241"<<"\x22";
	respuesta_2_vecino_1();
    
}

void respuesta_2_vecino_1()
{
	gotoxy (7,12);cout<<"\x22"<<"Por favor, tengo unas joyas y algo";
	gotoxy (7,13);cout<<"de dinero. Tambi\202n puedo darte una";
	gotoxy (7,14);cout<<"parte de nuestra comida y agua."<<"\x22";
	gotoxy (7,15);cout<<"\x22"<<"Entendido. Har\202 lo que pueda,";
	gotoxy (7,16);cout<<"pero no puedo prometer nada. Casi";
	gotoxy (7,17);cout<<"me disparan en mi camino hacia aqu\241"<<"\x22";
	Continua_Historia_Jamas_R2();
}

void Continua_Historia_Jamas_R1()      // EMPIEZA HISTORIA
{
	gotoxy (7,3);cout<<"Jam\240s en mi vida estuve tan feliz de";
	gotoxy (7,4);cout<<"depender en alguien m\240s. Pese a las";
	gotoxy (7,5);cout<<"cosas horribles que pasaron todav\241a";
	gotoxy (7,6);cout<<"hay algo de esperanza en este mundo";
	gotoxy (7,7);cout<<"cruel.";
	gotoxy (7,8);cout<<"El hombre regres\242 por un camino que";
	gotoxy (7,9);cout<<"desconozco y volvi\242 a su tarea del";
    gotoxy (7,10);cout<<"trueque ancestral para poder subsistir";
    gotoxy (7,11);cout<<"en estos duros tiempos.";
    gotoxy (7,12);cout<<"S\202 que no hay mucho que pueda hacer y";
	gotoxy (7,13);cout<<"vuelvo a ver a mi ni\244a. El llanto y";
	gotoxy (7,14);cout<<"aullidos de dolor acabaron, pero no";
	gotoxy (7,15);cout<<"porque se sintiera mejor sino porque";
	gotoxy (7,16);cout<<"ya no ten\241a fuerzas para derramar m\240s";
	gotoxy (7,17);cout<<"l\240grimas.";
	se_que_no_hay_mucho_R1();

}

void Continua_Historia_Jamas_R2()      // EMPIEZA HISTORIA
{
	gotoxy (50,3);cout<<"Jam\240s en mi vida estuve tan feliz de";
	gotoxy (50,4);cout<<"depender en alguien m\240s. Pese a las";
	gotoxy (50,5);cout<<"cosas horribles que pasaron todav\241a";
	gotoxy (50,6);cout<<"hay algo de esperanza en este mundo";
	gotoxy (50,7);cout<<"cruel.";
	gotoxy (50,8);cout<<"El hombre regres\242 por un camino que";
	gotoxy (50,9);cout<<"desconozco y volvi\242 a su tarea del";
	gotoxy (50,10);cout<<"trueque ancestral para poder subsistir";
	gotoxy (50,11);cout<<"en estos duros tiempos.";
	gotoxy (50,12);cout<<"S\202 que no hay mucho que pueda hacer y";
	gotoxy (50,13);cout<<"vuelvo a ver a mi ni\244a. El llanto y";
	gotoxy (50,14);cout<<"aullidos de dolor acabaron, pero no";
	gotoxy (50,15);cout<<"porque se sintiera mejor sino porque";
	gotoxy (50,16);cout<<"ya no ten\241a fuerzas para derramar m\240s";
	gotoxy (50,17);cout<<"l\240grimas.";

}

void se_que_no_hay_mucho_R1()
{	
	gotoxy (50,3);cout<<"Intentar\202 buscar m\240s cosas por estos";
	gotoxy (50,4);cout<<"decr\202pitos departamentos.";
	gotoxy (50,5);cout<<"Luego se me vino la idea";
	gotoxy (50,6);cout<<"de rebuscar entre los escombros de mi";
	gotoxy (50,7);cout<<"antigua casa, ser\240 dif\241cil, pero no";
	gotoxy (50,8);cout<<"puedo quedarme de brazos cruzados";
	gotoxy (50,9);cout<<"mientras mi ni\244a sufre tanto.";
	gotoxy (50,10);cout<<"La tarea ser\240 ardua y me costar\240 va_";
	gotoxy (50,11);cout<<"rios d\241as moverlos con mi mano; pero,";
	gotoxy (50,12);cout<<"debo de hacerlo por Amelia.";
	gotoxy (50,14);cout<<"La noche no fue tranquila esta vez.";
	gotoxy (50,15);cout<<"Los disparos continuaron incluso en la";
	gotoxy (50,16);cout<<"noche y el insomnio no me permit\241a";
	gotoxy (50,17);cout<<"hallar refugio de esta horrible reali_";
	gotoxy (50,18);cout<<"dad que vivimos.";

}

void se_que_no_hay_mucho_R2()
{
	
	gotoxy (7,3);cout<<"Intentar\202 buscar m\240s cosas por estos";
	gotoxy (7,4);cout<<"decr\202pitos departamentos.";
	gotoxy (7,5);cout<<"Luego se me vino la idea de rebuscar";
	gotoxy (7,6);cout<<"entre los escombros de mi antigua";
	gotoxy (7,7);cout<<"casa, ser\240 dif\241cil, pero no puedo";
	gotoxy (7,8);cout<<"quedarme de brazos cruzados mientras";
	gotoxy (7,9);cout<<"mi ni\244a sufre tanto.";
	gotoxy (7,10);cout<<"La tarea ser\240 ardua y me costar\240 va_";
	gotoxy (7,11);cout<<"rios d\241as moverlos con mi mano; pero,";
	gotoxy (7,12);cout<<"debo de hacerlo por Amelia.";
	
	gotoxy (7,14);cout<<"La noche no fue tranquila esta vez.";
	gotoxy (7,15);cout<<"Los disparos continuaron incluso en la";
	gotoxy (7,16);cout<<"noche y el insomnio no me permit\241a";
	gotoxy (7,17);cout<<"hallar refugio de esta horrible reali_";
	gotoxy (7,18);cout<<"dad que vivimos.";
	la_noche_R2();
	
}


void la_noche_R1()
{
	
	gotoxy (7,3);cout<<"Los llantos de mi ni\244a fueron reempla_";
	gotoxy (7,4);cout<<"zados con un agonizante silencio,"; 
	gotoxy (7,5);cout<<"tortur\240ndome cada segundo por no ser";
	gotoxy (7,6);cout<<"lo suficientemente apto para cuidar de";
	gotoxy (7,7);cout<<"ella en estas condiciones.";
	gotoxy (7,8);cout<<"Apenas pude recuperar fuerzas anoche,";
	gotoxy (7,9);cout<<"pero tras darle un pedazo de la comida";
	gotoxy (7,10);cout<<"restante a Amelia me puse a trabajar";
	gotoxy (7,11);cout<<"en los escombros de mi casa original.";
	gotoxy (7,13);cout<<"No fue hasta la tarde, que milagrosa_";
	gotoxy (7,14);cout<<"mente pude escuchar noticias del";	
	gotoxy (7,15);cout<<"mercader que se hab\241a acercado ayer.";	
	gotoxy (7,16);cout<<"No entiendo c\242mo vino tan r\240pido";	
	gotoxy (7,17);cout<<"pero no podr\241a estar m\240s agradecido.";	
	gotoxy (7,18);cout<<"\x22"<<"Me cost\242 un brazo y una pierna, pero";
	no_fue_hasta_la_tarde_R1();
	
	
}

void la_noche_R2()
{

	gotoxy (50,3);cout<<"Los llantos de mi ni\244a fueron reempla_";
	gotoxy (50,4);cout<<"zados con un agonizante silencio,"; 
	gotoxy (50,5);cout<<"tortur\240ndome cada segundo por no ser";
	gotoxy (50,6);cout<<"lo suficientemente apto para cuidar de";
	gotoxy (50,7);cout<<"ella en estas condiciones.";
	gotoxy (50,8);cout<<"Apenas pude recuperar fuerzas anoche,";
	gotoxy (50,9);cout<<"pero tras darle un pedazo de la comida";
	gotoxy (50,10);cout<<"restante a Amelia me puse a trabajar";
	gotoxy (50,11);cout<<"en los escombros de mi casa original.";
	gotoxy (50,13);cout<<"No fue hasta la tarde, que milagrosa_";
	gotoxy (50,14);cout<<"mente pude escuchar noticias del";	
	gotoxy (50,15);cout<<"mercader que se hab\241a acercado ayer.";	
	gotoxy (50,16);cout<<"No entiendo c\242mo vino tan r\240pido";	
	gotoxy (50,17);cout<<"pero no podr\241a estar m\240s agradecido.";	

}

void no_fue_hasta_la_tarde_R1()    // FINALIZA LA HISTORIA R1 Y R2
{
	gotoxy (50,3);cout<<"tengo estos medicamentos que me";
	gotoxy (50,4);cout<<"pediste."<<"\x22";	
	gotoxy (50,5);cout<<"Lo que originalmente podr\241a haberse";
	gotoxy (50,6);cout<<"interpretado como una broma ligera en";	
	gotoxy (50,7);cout<<"tiempos de anta\244o ahora es una muestra";	
	gotoxy (50,8);cout<<"del miedo y terror que ronda por las";
	gotoxy (50,9);cout<<"calles pues se ha vuelto una realidad.";
	
	gotoxy (50,11);cout<<"Me distraje un momento, pero el";
	gotoxy (50,12);cout<<"mercader a\243n espera mi respuesta:"; // ESTA RESPUESTA SERIA EN LA OTRA HOJA	
	
}

void no_fue_hasta_la_tarde_R2()    // FINALIZA LA HISTORIA R1 Y R2
{

	gotoxy (7,3);cout<<"\x22"<<"Me cost\242 un brazo y una pierna, pero";
	gotoxy (7,4);cout<<"tengo estos medicamentos que me";
	gotoxy (7,5);cout<<"pediste."<<"\x22";	
	gotoxy (7,6);cout<<"Lo que originalmente podr\241a haberse";
	gotoxy (7,7);cout<<"interpretado como una broma ligera en";	
	gotoxy (7,8);cout<<"tiempos de anta\244o ahora es una muestra";	
	gotoxy (7,9);cout<<"del miedo y terror que ronda por las";
	gotoxy (7,10);cout<<"calles pues se ha vuelto una realidad.";
	
	gotoxy (7,12);cout<<"Me distraje un momento, pero el";
	gotoxy (7,13);cout<<"mercader a\243n espera mi respuesta:"; // ESTA RESPUESTA SERIA EN LA OTRA HOJA	
	
}

void MuchasGracias_R1()  //RESPUESTA 1 de la respuesta 2 anterior
{
	gotoxy (7,3);cout<<"\x22"<<"Muchas gracias..."<<"\x22";
	gotoxy (7,4);cout<<"\x22"<<"No s\202 c\242mo agradec\202rtelo."<<"\x22";
	gotoxy (7,5);cout<<"\x22"<<"Oh, tu si sabes c\242mo."<<"\x22";
	gotoxy (7,6);cout<<"\x22"<<"\250Un pago? Ah cierto, disculpa, hay";
	gotoxy (7,7);cout<<"tantos problemas que es dif\241cil mante_";
	gotoxy (7,8);cout<<"nerse enfocado."<<"\x22";
	gotoxy (7,9);cout<<"\x22"<<"No eres el \243nico"<<"\x22";
	gotoxy (7,10);cout<<"\x22"<<"Lamentablemente, espera un segundo."<<"\x22";
	
	gotoxy (7,12);cout<<"El mercader espera su pago:";

}

void MuchasGracias_R2()  //RESPUESTA 1 de la respuesta 2 anterior
{
	gotoxy (50,3);cout<<"\x22"<<"Muchas gracias..."<<"\x22";
	gotoxy (50,4);cout<<"\x22"<<"No s\202 c\242mo agradec\202rtelo."<<"\x22";
	gotoxy (50,5);cout<<"\x22"<<"Oh, tu si sabes c\242mo."<<"\x22";
	gotoxy (50,6);cout<<"\x22"<<"\250Un pago? Ah cierto, disculpa, hay";
	gotoxy (50,7);cout<<"tantos problemas que es dif\241cil mante_";
	gotoxy (50,8);cout<<"nerse enfocado."<<"\x22";
	gotoxy (50,9);cout<<"\x22"<<"No eres el \243nico"<<"\x22";
	gotoxy (50,10);cout<<"\x22"<<"Lamentablemente, espera un segundo."<<"\x22";
	
	gotoxy (50,12);cout<<"El mercader espera su pago:";

}

void Espera_un_momento_R1() //RESPUESTA 2 de la respuesta 2 anterior
{
	gotoxy (7,3);cout<<"\x22"<<"Espera un momento, ahora voy a";
	gotoxy (7,4);cout<<"sacar las cosas que tengo para poder";
	gotoxy (7,5);cout<<"cambiar."<<"\x22";

	gotoxy (7,7);cout<<"El mercader espera su pago:";

}

void Espera_un_momento_R2() //RESPUESTA 2 de la respuesta 2 anterior
{
	gotoxy (50,3);cout<<"\x22"<<"Espera un momento, ahora voy a";
	gotoxy (50,4);cout<<"sacar las cosas que tengo para poder";
	gotoxy (50,5);cout<<"cambiar."<<"\x22";

	gotoxy (50,7);cout<<"El mercader espera su pago:";

}

void Como_te_pago_R1()  //RESPUESTA 3 de la respuesta 2 anterior
{
	gotoxy (7,3);cout<<"\x22"<<"\xA8"<<"C\242mo te pago"<<"\x3F"<<"\x22";
	gotoxy (7,4);cout<<"\x22"<<"Cualquier cosa que se pueda usar.";
	gotoxy (7,5);cout<<"Comida, agua, armas, bater\241as";
	gotoxy (7,6);cout<<"incluso cigarrillos o libros."<<"\x22";
	gotoxy (7,7);cout<<"\x22"<<"Yo soy el que decide."<<"\x22";
	gotoxy (7,8);cout<<"\x22"<<"Entendido."<<"\x22";
	gotoxy (7,10);cout<<"El mercader espera su pago:";	

}

void Como_te_pago_R2()  //RESPUESTA 3 de la respuesta 2 anterior
{
	gotoxy (7,3);cout<<"\x22"<<"\xA8"<<"C\242mo te pago"<<"\x3F"<<"\x22";
	gotoxy (7,4);cout<<"\x22"<<"Cualquier cosa que se pueda usar.";
	gotoxy (7,5);cout<<"Comida, agua, armas, bater\241as";
	gotoxy (7,6);cout<<"incluso cigarrillos o libros."<<"\x22";
	gotoxy (7,7);cout<<"\x22"<<"Yo soy el que decide."<<"\x22";
	gotoxy (7,8);cout<<"\x22"<<"Entendido."<<"\x22";
	
	gotoxy (7,10);cout<<"El mercader espera su pago:";	

}

void Sugerir_comida_R2_parte1()  //DEPENDE DE LAS rESPUESTA 1, 2, 3 //opcion muchas gracias
{

	gotoxy (7,3);cout<<"\x22"<<"Tengo unas latas de comida y un par";
	gotoxy (7,4);cout<<"de botellas de agua."<<"\x22";
	gotoxy (7,5);cout<<"\x22"<<"No es suficiente, tuve que intercam_";
	gotoxy (7,6);cout<<"biar esto con los rebeldes que se...";
	gotoxy (7,7);cout<<"hicieron base en el colegio."; 
	gotoxy (7,8);cout<<"Intercambi\202 todas las balas que ten\241a";
	gotoxy (7,9);cout<<"por estas cosas. Necesitar\241a todo";
	gotoxy (7,10);cout<<"lo que tienes para que valga lo mismo";
	gotoxy (7,11);cout<<"que esto."<<"\x22";
	gotoxy (7,12);cout<<"\x22"<<"\xAD"<<"\250Todo?!"<<"\x22"<<"\xAD"<<"\250Qu\202 vamos a comer?!"<<"\x22";
	gotoxy (7,13);cout<<"\x22"<<"Nunca dije que ser\241a f\240cil"<<"\x22";
	gotoxy (7,14);cout<<"Espera, \250te puedo dar otras cosas no?";
	gotoxy (7,15);cout<<"\x22"<<"S\241 lo vale."<<"\x22";
	
	gotoxy (7,16);cout<<"De repente me acord\202 de las joyas del";
	gotoxy (7,17);cout<<"armario. Eran preciosas y definitiva_";
	gotoxy (7,18);cout<<"mente de calidad, pero no s\202 si tengan";
	
	gotoxy (50,3);cout<<"valor en estos tiempos, no pierdo nada";
	gotoxy (50,4);cout<<"pregunt\240ndole:";
	gotoxy (50,5);cout<<"\x22"<<"Tengo unas joyas que encontr\202, est\240n";
	gotoxy (50,6);cout<<"en condici\242n perfecta"<<"\x22";
	gotoxy (50,7);cout<<"\x22"<<"Mu\202stralas."<<"\x22";
	
	gotoxy (50,9);cout<<"Me apresur\202 a mostrarle los objetos";
	gotoxy (50,10);cout<<"que ten\241a en el s\242tano.";
	gotoxy (50,11);cout<<"El mercader lo mir\242 con inter\202s e";
	gotoxy (50,12);cout<<"intriga, luego los examin\242 a mano.";
	gotoxy (50,13);cout<<"Fueron los 30 minutos m\240s tensos de mi";
	gotoxy (7,14);cout<<"vida entera. Pasado eso, el mercader";
	
	gotoxy (50,16);cout<<"dijo:";
	gotoxy (50,17);cout<<"\x22"<<"Genuinas, buena condici\242n y gran";
	
}
	
void Sugerir_comida_R1_parte1()  //DEPENDE DE LAS rESPUESTA 1, 2, 3 //opcion muchas gracias
{

	gotoxy (50,3);cout<<"\x22"<<"Tengo unas latas de comida y un par";
	gotoxy (50,4);cout<<"de botellas de agua."<<"\x22";
	gotoxy (50,5);cout<<"\x22"<<"No es suficiente, tuve que intercam_";
	gotoxy (50,6);cout<<"biar esto con los rebeldes que se...";
	gotoxy (50,7);cout<<"hicieron base en el colegio."; 
	gotoxy (50,8);cout<<"Intercambi\202 todas las balas que ten\241a";
	gotoxy (50,9);cout<<"por estas cosas. Necesitar\241a todo";
	gotoxy (50,10);cout<<"lo que tienes para que valga lo mismo";
	gotoxy (50,11);cout<<"que esto."<<"\x22";
	gotoxy (50,12);cout<<"\x22"<<"\xAD"<<"\250Todo?!"<<"\x22"<<"\xAD"<<"\250Qu\202 vamos a comer?!"<<"\x22";
	gotoxy (50,13);cout<<"\x22"<<"Nunca dije que ser\241a f\240cil"<<"\x22";
	gotoxy (50,14);cout<<"Espera, \250te puedo dar otras cosas no?";
	gotoxy (50,15);cout<<"\x22"<<"S\241 lo vale."<<"\x22";

}

void Recuerdo_joyas_R2_caso1()    //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	
	gotoxy (7,3);cout<<"valor. No s\202 c\242mo obtuviste estas";
	gotoxy (7,4);cout<<"preciosidades, pero esto f\240cilmente";
	gotoxy (7,5);cout<<"puede ser mi ticket para salir de este";
	gotoxy (7,6);cout<<"lugar."<<"\x22";
	gotoxy (7,7);cout<<"\x22"<<"Te deseo lo mejor de las suertes,";
	gotoxy (7,8);cout<<"pero mi ni\244a realmente necesita la";
	gotoxy (7,9);cout<<"medicina ahora."<<"\x22";
	gotoxy (7,10);cout<<"\x22"<<"De acuerdo, aqu\241 tienes. No te mien_";
	gotoxy (7,11);cout<<"to, te lo dar\241a por menos, pero no";
	gotoxy (7,12);cout<<"puedo permitirme nada ni siquiera para";
	gotoxy (7,13);cout<<"m\241 mismo."<<"\x22";
	gotoxy (7,14);cout<<"\x22"<<"Gracias de todas formas."<<"\x22";
	gotoxy (7,15);cout<<"Corr\241 hasta la habitaci\242n de Amelia",
	gotoxy (7,16);cout<<"para entregarle los medicamentos.";
	gotoxy (7,17);cout<<"\x22"<<"Querida, te consegu\241 unas medicinas.";
	gotoxy (7,18);cout<<"Todo va a estar bien ahora. No lo";
	
	gotoxy (50,3);cout<<"escupas. S\202 que sabe feo, pero te va";
	gotoxy (50,4);cout<<"hacer sentir mejor."<<"\x22";

	gotoxy (50,5);cout<<"La ma\244ana lleg\242 tranquila como nunca,"; 
	gotoxy (50,6);cout<<"no hubo disparos ni explosiones";
	gotoxy (50,7);cout<<"haciendo eco en las calles.";
	gotoxy (50,8);cout<<"Y en medio de eso, estaba amaneciendo,";
	gotoxy (50,9);cout<<"yo al lado de mi peque\244a, revis\240ndola";
	gotoxy (50,10);cout<<"tras lo que ha pasado.";
	gotoxy (50,11);cout<<"Planeaba continuar en el progreso de";
	gotoxy (50,12);cout<<"limpiar los escombros de mi casa ori_";	
	gotoxy (50,13);cout<<"ginal, pero un retumbar de puerta me";
	gotoxy (50,14);cout<<"quit\242 toda la paz que la ma\244ana";
	gotoxy (50,15);cout<<"pose\241a.";
	gotoxy (50,16);cout<<"\x22"<<"\xAD"<<"Ad\240n, tenemos que hablar"<<"\x21"<<"\x22";
	gotoxy (50,17);cout<<"Reconocer\241a esa voz en cualquier lado.";


}
void Recuerdo_joyas_R2_fin_2() 
{
		
	gotoxy (7,3);cout<<"Mi hermano est\240 en mi puerta.";
	gotoxy (7,4);cout<<"Salgo a recibirle...";
	
	gotoxy (7,6);cout<<"\x22"<<"Te tomaste tu buen tiempo."<<"\x22";
	gotoxy (7,7);cout<<"\x22"<<"\250Podemos hablar?"<<"\x22";
	
}

void Recuerdo_joyas_R1_caso1()    //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	
	gotoxy (7,3);cout<<"De repente me acord\202 de las joyas del";
	gotoxy (7,4);cout<<"armario. Eran preciosas y definitiva_";
	gotoxy (7,5);cout<<"mente de calidad, pero no s\202 si tengan";
	gotoxy (7,6);cout<<"valor en estos tiempos, no pierdo nada";
	gotoxy (7,7);cout<<"pregunt\240ndole:";
	
	gotoxy (7,9);cout<<"\x22"<<"Tengo unas joyas que encontr\202, est\240n";
	gotoxy (7,10);cout<<"en condici\242n perfecta"<<"\x22";
	gotoxy (7,11);cout<<"\x22"<<"Mu\202stralas."<<"\x22";
	
	gotoxy (7,13);cout<<"Me apresur\202 a mostrarle los objetos";
	gotoxy (7,14);cout<<"que ten\241a en el s\242tano.";
	gotoxy (7,15);cout<<"El mercader lo mir\242 con inter\202s e";
	gotoxy (7,16);cout<<"intriga, luego los examin\242 a mano.";
	gotoxy (7,17);cout<<"Fueron los 30 minutos m\240s tensos de mi";
	gotoxy (7,18);cout<<"vida entera. Pasado eso, el mercader";
	
	gotoxy (50,3);cout<<"dijo:";
	gotoxy (50,5);cout<<"\x22"<<"Genuinas, buena condici\242n y gran";
	gotoxy (50,6);cout<<"valor.No s\202 c\242mo obtuviste estas";
	gotoxy (50,7);cout<<"preciosidades, pero esto f\240cilmente";
	gotoxy (50,8);cout<<"puede ser mi ticket para salir de este";
	gotoxy (50,9);cout<<"lugar."<<"\x22";
   	gotoxy (50,10);cout<<"\x22"<<"Te deseo lo mejor de las suertes,";
	gotoxy (50,11);cout<<"pero mi ni\244a realmente necesita la";
	gotoxy (50,12);cout<<"medicina ahora."<<"\x22";
	gotoxy (50,13);cout<<"\x22"<<"De acuerdo, aqu\241 tienes. No te mien_";
	gotoxy (50,14);cout<<"to, te lo dar\241a por menos, pero no";
	gotoxy (50,15);cout<<"puedo permitirme nada ni siquiera para";
	gotoxy (50,16);cout<<"m\241 mismo."<<"\x22";
	gotoxy (50,17);cout<<"\x22"<<"Gracias de todas formas."<<"\x22";
	

	
}

void Tengo_unas_joyas_parte1_R1_caso1()  //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{	
	gotoxy (7,3);cout<<"Corr\241 hasta la habitaci\242n de Amelia",
	gotoxy (7,4);cout<<"para entregarle los medicamentos.";
	gotoxy (7,5);cout<<"\x22"<<"Querida, te consegu\241 unas medicinas.";
	gotoxy (7,6);cout<<"Todo va a estar bien ahora. No lo";
	gotoxy (7,7);cout<<"escupas. S\202 que sabe feo, pero te va";
	gotoxy (7,8);cout<<"hacer sentir mejor."<<"\x22";
	
	gotoxy (7,10);cout<<"La ma\244ana lleg\242 tranquila como nunca,"; 
	gotoxy (7,11);cout<<"no hubo disparos ni explosiones";
	gotoxy (7,12);cout<<"haciendo eco en las calles.";
	gotoxy (7,13);cout<<"Y en medio de eso, estaba amaneciendo,";
	gotoxy (7,14);cout<<"yo al lado de mi peque\244a, revis\240ndola";
	gotoxy (7,15);cout<<"tras lo que ha pasado.";
	gotoxy (7,16);cout<<"Planeaba continuar en el progreso de";
	gotoxy (7,17);cout<<"limpiar los escombros de mi casa ori_";
	
	gotoxy (50,3);cout<<"ginal, pero un retumbar de puerta me";
	gotoxy (50,4);cout<<"quit\242 toda la paz que la ma\244ana";
	gotoxy (50,5);cout<<"pose\241a.";
	gotoxy (50,6);cout<<"\x22"<<"\xAD"<<"Ad\240n, tenemos que hablar"<<"\x21"<<"\x22";
	gotoxy (50,7);cout<<"Reconocer\241a esa voz en cualquier lado.";
	gotoxy (50,8);cout<<"Mi hermano est\240 en mi puerta.";
	gotoxy (50,9);cout<<"Salgo a recibirle...";
	
	gotoxy (50,11);cout<<"\x22"<<"Te tomaste tu buen tiempo."<<"\x22";
	gotoxy (50,12);cout<<"\x22"<<"\250Podemos hablar?"<<"\x22";

	
}

void comida_respuesta2_parte1()  //DEPENDE DE LAS rESPUESTA 1, 2, 3 //opcion muchas gracias
{
	gotoxy (50,3);cout<<"Sugerir comida y agua...";
	gotoxy (50,4);cout<<"\x22"<<"Tengo unas latas de comida y un par";
	gotoxy (50,5);cout<<"de botellas de agua."<<"\x22";
	gotoxy (50,6);cout<<"\x22"<<"No es suficiente, tuve que intercam_";
	gotoxy (50,7);cout<<"biar esto con los rebeldes que se...";

}

void Sugerir_comida_R2_parte2()
{
	gotoxy (7,3);cout<<"hicieron base en el colegio."; 
	gotoxy (7,4);cout<<"Intercambi\202 todas las balas que ten\241a";
	gotoxy (7,5);cout<<"por estas cosas. Necesitar\241a todo";
	gotoxy (7,6);cout<<"lo que tienes para que valga lo mismo";
	gotoxy (7,7);cout<<"que esto."<<"\x22";
	gotoxy (7,8);cout<<"\x22"<<"\xAD"<<"\250Todo?!"<<"\x22"<<"\xAD"<<"\250Qu\202 vamos a comer?!"<<"\x22";
	gotoxy (7,9);cout<<"\x22"<<"Nunca dije que ser\241a f\240cil"<<"\x22";
	gotoxy (7,10);cout<<"Espera, \250te puedo dar otras cosas no?";
	gotoxy (7,11);cout<<"\x22"<<"S\241 lo vale."<<"\x22";
	
	
}

void Sugerir_joyas_R2() //ACA CONTINUA LA HISTORIA//de la opcion muchas gracias
{
	gotoxy (7,14);cout<<"Sugerir joyas..."; 
}

void Sugerir_dinero_parte_1_R1()
{

	gotoxy (50,3);cout<<"\x22"<<"Tengo todos los ahorros de mi";
	gotoxy (50,4);cout<<"familia durante a\244os."<<"\x22";
	gotoxy (50,5);cout<<"\x22"<<"Esos papeles no tienen valor."; 
	gotoxy (50,6);cout<<"No se comen ni te ayudan para nada,";
	gotoxy (50,7);cout<<"aun si tuviera todo el dinero de los";
	gotoxy (50,8);cout<<"bancos de la ciudad el valor de la mo_";
	gotoxy (50,9);cout<<"neda est\240 por los suelos. Incluso si";
	gotoxy (50,10);cout<<"saliera de este maldito lugar no";
	gotoxy (50,11);cout<<"podr\241a usarlo."<<"\x22";
	gotoxy (50,12);cout<<"Pero...";
	gotoxy (50,13);cout<<"\x22"<<"Nada de peros, no puedo usar eso.";
	gotoxy (50,14);cout<<"Cre\241 que la vida de tu hija val\241a m\240s";
	gotoxy (50,15);cout<<"que eso."<<"\x22";
	gotoxy (50,16);cout<<"\x22"<<"No te atrevas a decir eso de nuevo."<<"\x22";
	gotoxy (50,17);cout<<"\x22"<<"Casi pierdo mi vida por esto,";
	
	
}

void Sugerir_dinero_parte_2_R1()
{

	gotoxy (7,3);cout<<"hacer intercambios con los rebeldes";
	gotoxy (7,4);cout<<"es una locura"<<"\x22";
    gotoxy (7,5);cout<<"tiene raz\240n. Estoy en deuda con \202l";
    gotoxy (7,6);cout<<"porque est\240 aqu\241 en primer lugar."; 
    gotoxy (7,7);cout<<"D\240ndome una oportunidad de tener";
    gotoxy (7,8);cout<<"medicina";
    gotoxy (7,9);cout<<"\x22"<<"Perd\242n..."<<"\x22";
    gotoxy (7,10);cout<<"\x22"<<"No te culpo, estamos viviendo";
    gotoxy (7,11);cout<<"tiempos horribles."<<"\x22";
    
    gotoxy (7,13);cout<<"De repente me acord\202 de las joyas del";
	gotoxy (7,14);cout<<"armario. Eran preciosas y definitiva_";
	gotoxy (7,15);cout<<"mente de calidad, pero no s\202 si tengan";
	gotoxy (7,16);cout<<"valor en estos tiempos, no pierdo nada";
	gotoxy (7,17);cout<<"pregunt\240ndole:";
	
	gotoxy (50,3);cout<<"\x22"<<"Tengo unas joyas que encontr\202, est\240n";
	gotoxy (50,4);cout<<"en condici\242n perfecta"<<"\x22";
	gotoxy (50,5);cout<<"\x22"<<"Mu\202stralas."<<"\x22";
	
	gotoxy (50,7);cout<<"Me apresur\202 a mostrarle los objetos";
	gotoxy (50,8);cout<<"que ten\241a en el s\242tano.";
	gotoxy (50,9);cout<<"El mercader lo mir\242 con inter\202s e";
	gotoxy (50,10);cout<<"intriga, luego los examin\242 a mano.";
	gotoxy (50,11);cout<<"Fueron los 30 minutos m\240s tensos de mi";
	gotoxy (50,12);cout<<"vida entera. Pasado eso, el mercader";
	gotoxy (50,13);cout<<"dijo:";
	
	gotoxy (50,15);cout<<"\x22"<<"Genuinas, buena condici\242n y gran";
	gotoxy (50,16);cout<<"valor.No s\202 c\242mo obtuviste estas";
	gotoxy (50,17);cout<<"preciosidades, pero esto f\240cilmente";
	
		
	
}

void Sugerir_dinero_parte_3_R1() //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	gotoxy (7,3);cout<<"puede ser mi ticket para salir de este";
    gotoxy (7,4);cout<<"lugar."<<"\x22";
    gotoxy (7,5);cout<<"\x22"<<"Te deseo lo mejor de las suertes,";
	gotoxy (7,6);cout<<"pero mi ni\244a realmente necesita la";
	gotoxy (7,7);cout<<"medicina ahora."<<"\x22";
	gotoxy (7,8);cout<<"\x22"<<"De acuerdo, aqu\241 tienes. No te mien_";
    gotoxy (7,9);cout<<"to, te lo dar\241a por menos, pero no";
	gotoxy (7,10);cout<<"puedo permitirme nada ni siquiera para";
	gotoxy (7,11);cout<<"m\241 mismo."<<"\x22";
	gotoxy (7,12);cout<<"\x22"<<"Gracias de todas formas."<<"\x22";
	
	gotoxy (7,14);cout<<"Corr\241 hasta la habitaci\242n de Amelia",
	gotoxy (7,15);cout<<"para entregarle los medicamentos.";
	gotoxy (7,16);cout<<"\x22"<<"Querida, te consegu\241 unas medicinas.";
	gotoxy (7,17);cout<<"Todo va a estar bien ahora. No lo";
	gotoxy (7,18);cout<<"escupas. S\202 que sabe feo, pero te va";
	gotoxy (50,3);cout<<"hacer sentir mejor."<<"\x22";
	
	gotoxy (50,5);cout<<"La ma\244ana lleg\242 tranquila como nunca,"; 
	gotoxy (50,6);cout<<"no hubo disparos ni explosiones";
	gotoxy (50,7);cout<<"haciendo eco en las calles.";
	gotoxy (50,8);cout<<"Y en medio de eso, estaba amaneciendo,";
	gotoxy (50,9);cout<<"yo al lado de mi peque\244a, revis\240ndola";
	gotoxy (50,10);cout<<"tras lo que ha pasado.";
	gotoxy (50,11);cout<<"Planeaba continuar en el progreso de";
	gotoxy (50,12);cout<<"limpiar los escombros de mi casa ori_";
	gotoxy (50,13);cout<<"ginal, pero un retumbar de puerta me";
	gotoxy (50,14);cout<<"quit\242 toda la paz que la ma\244ana";
	gotoxy (50,15);cout<<"pose\241a.";
	gotoxy (50,16);cout<<"\x22"<<"\xAD"<<"Ad\240n, tenemos que hablar"<<"\x21"<<"\x22";
	gotoxy (50,17);cout<<"Reconocer\241a esa voz en cualquier lado.";
	
}

void Sugerir_dinero_parte_4_R1()   //3 respuestas//muchasGracias//comida
{
	
	gotoxy (7,3);cout<<"Mi hermano est\240 en mi puerta.";
	gotoxy (7,4);cout<<"Salgo a recibirle...";
	
	gotoxy (7,6);cout<<"\x22"<<"Te tomaste tu buen tiempo."<<"\x22";
    gotoxy (7,7);cout<<"\x22"<<"\250Podemos hablar?"<<"\x22";
    
}

void Sugerir_dinero_parte_1_R2()
{
	gotoxy (7,14);cout<<"Sugerir dinero...";
	gotoxy (7,16);cout<<"\x22"<<"Tengo todos los ahorros de mi";
	gotoxy (7,17);cout<<"familia durante a\244os."<<"\x22";
	
}

void Sugerir_dinero_parte_2_R2()
{
	
	gotoxy (7,3);cout<<"\x22"<<"Esos papeles no tienen valor."; 
	gotoxy (7,4);cout<<"No se comen ni te ayudan para nada,";
	gotoxy (7,5);cout<<"aun si tuviera todo el dinero de los";
	gotoxy (7,6);cout<<"bancos de la ciudad el valor de la mo_";
	gotoxy (7,7);cout<<"neda est\240 por los suelos. Incluso si";
	gotoxy (7,8);cout<<"saliera de este maldito lugar no";
	gotoxy (7,9);cout<<"podr\241a usarlo."<<"\x22";
	gotoxy (7,10);cout<<"Pero...";
	gotoxy (7,11);cout<<"\x22"<<"Nada de peros, no puedo usar eso.";
	gotoxy (7,12);cout<<"Cre\241 que la vida de tu hija val\241a m\240s";
	gotoxy (7,13);cout<<"que eso."<<"\x22";
	
}

void Sugerir_dinero_parte_3_R2()
{
	gotoxy (7,14);cout<<"\x22"<<"No te atrevas a decir eso de nuevo."<<"\x22";
	gotoxy (7,15);cout<<"\x22"<<"Casi pierdo mi vida por esto,";
	gotoxy (7,16);cout<<"hacer intercambios con los rebeldes";
	gotoxy (7,17);cout<<"es una locura"<<"\x22";
    gotoxy (7,18);cout<<"tiene raz\240n. Estoy en deuda con \202l";
}
void Sugerir_dinero_parte_4_R2()
{
    gotoxy (7,3);cout<<"porque est\240 aqu\241 en primer lugar."; 
    gotoxy (7,4);cout<<"D\240ndome una oportunidad de tener";
    gotoxy (7,5);cout<<"medicina";
    gotoxy (7,6);cout<<"\x22"<<"Perd\242n..."<<"\x22";
    gotoxy (7,7);cout<<"\x22"<<"No te culpo, estamos viviendo";
    gotoxy (7,8);cout<<"tiempos horribles."<<"\x22";

    
}

void Recuerdo_joyas_R1_2()    //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	gotoxy (50,3);cout<<"De repente me acord\202 de las joyas del";
	gotoxy (50,4);cout<<"armario. Eran preciosas y definitiva_";
	gotoxy (50,5);cout<<"mente de calidad, pero no s\202 si tengan";
	gotoxy (50,6);cout<<"valor en estos tiempos, no pierdo nada";
	gotoxy (50,7);cout<<"pregunt\240ndole:";
	
	gotoxy (50,9);cout<<"\x22"<<"Tengo unas joyas que encontr\202, est\240n";
	gotoxy (50,10);cout<<"en condici\242n perfecta"<<"\x22";
	gotoxy (50,11);cout<<"\x22"<<"Mu\202stralas."<<"\x22";
	
	gotoxy (50,13);cout<<"Me apresur\202 a mostrarle los objetos";
	gotoxy (50,14);cout<<"que ten\241a en el s\242tano.";
	gotoxy (50,15);cout<<"El mercader lo mir\242 con inter\202s e";
	gotoxy (50,16);cout<<"intriga, luego los examin\242 a mano.";
	gotoxy (50,17);cout<<"Fueron los 30 minutos m\240s tensos de mi";
}

void Tengo_unas_joyas_parte1_R1()  //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	gotoxy (7,3);cout<<"vida entera. Pasado eso, el mercader";
	gotoxy (7,4);cout<<"dijo:";
	
	gotoxy (7,6);cout<<"\x22"<<"Genuinas, buena condici\242n y gran";
	gotoxy (7,7);cout<<"valor.No s\202 c\242mo obtuviste estas";
	gotoxy (7,8);cout<<"preciosidades, pero esto f\240cilmente";
	gotoxy (7,9);cout<<"puede ser mi ticket para salir de este";
    gotoxy (7,10);cout<<"lugar."<<"\x22";
    gotoxy (7,11);cout<<"\x22"<<"Te deseo lo mejor de las suertes,";
	gotoxy (7,12);cout<<"pero mi ni\244a realmente necesita la";
	gotoxy (7,13);cout<<"medicina ahora."<<"\x22";
	gotoxy (7,14);cout<<"\x22"<<"De acuerdo, aqu\241 tienes. No te mien_";
    gotoxy (7,15);cout<<"to, te lo dar\241a por menos, pero no";
	gotoxy (7,16);cout<<"puedo permitirme nada ni siquiera para";
	gotoxy (7,17);cout<<"m\241 mismo."<<"\x22";
	gotoxy (7,18);cout<<"\x22"<<"Gracias de todas formas."<<"\x22";
	
	gotoxy (50,3);cout<<"Corr\241 hasta la habitaci\242n de Amelia",
	gotoxy (50,4);cout<<"para entregarle los medicamentos.";
	gotoxy (50,5);cout<<"\x22"<<"Querida, te consegu\241 unas medicinas.";
	gotoxy (50,6);cout<<"Todo va a estar bien ahora. No lo";
	gotoxy (50,7);cout<<"escupas. S\202 que sabe feo, pero te va";
	gotoxy (50,8);cout<<"hacer sentir mejor."<<"\x22";
	
	gotoxy (50,10);cout<<"La ma\244ana lleg\242 tranquila como nunca,"; 
	gotoxy (50,11);cout<<"no hubo disparos ni explosiones";
	gotoxy (50,12);cout<<"haciendo eco en las calles.";
	gotoxy (50,13);cout<<"Y en medio de eso, estaba amaneciendo,";
	gotoxy (50,14);cout<<"yo al lado de mi peque\244a, revis\240ndola";
	gotoxy (50,15);cout<<"tras lo que ha pasado.";
	gotoxy (50,16);cout<<"Planeaba continuar en el progreso de";
	gotoxy (50,17);cout<<"limpiar los escombros de mi casa ori_";
	
}

void La_manana_llego_R1_1()   //3 respuestas//muchasGracias//comida
{

	gotoxy (7,3);cout<<"ginal, pero un retumbar de puerta me";
	gotoxy (7,4);cout<<"quit\242 toda la paz que la ma\244ana";
	gotoxy (7,5);cout<<"pose\241a.";
	gotoxy (7,6);cout<<"\x22"<<"\xAD"<<"Ad\240n, tenemos que hablar"<<"\x21"<<"\x22";
	gotoxy (7,7);cout<<"Reconocer\241a esa voz en cualquier lado.";
	gotoxy (7,8);cout<<"Mi hermano est\240 en mi puerta.";
	gotoxy (7,9);cout<<"Salgo a recibirle...";
	
	gotoxy (7,11);cout<<"\x22"<<"Te tomaste tu buen tiempo."<<"\x22";
    gotoxy (7,12);cout<<"\x22"<<"\250Podemos hablar?"<<"\x22";

	
	
}

void Recuerdo_joyas_R2()    //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	gotoxy (7,13);cout<<"De repente me acord\202 de las joyas del";
	gotoxy (7,14);cout<<"armario. Eran preciosas y definitiva_";
	gotoxy (7,15);cout<<"mente de calidad, pero no s\202 si tengan";
	gotoxy (7,16);cout<<"valor en estos tiempos, no pierdo nada";
	gotoxy (7,17);cout<<"pregunt\240ndole:";

}

void Tengo_unas_joyas_parte1_R2()  //cumple para las 3 respuestas //OPCION MUCHAS GRACIAS
{
	gotoxy (7,3);cout<<"\x22"<<"Tengo unas joyas que encontr\202, est\240n";
	gotoxy (7,4);cout<<"en condici\242n perfecta"<<"\x22";
	gotoxy (7,5);cout<<"\x22"<<"Mu\202stralas."<<"\x22";
	gotoxy (7,6);cout<<"Me apresur\202 a mostrarle los objetos";
	gotoxy (7,7);cout<<"que ten\241a en el s\242tano.";
	gotoxy (7,8);cout<<"El mercader lo mir\242 con inter\202s e";
	gotoxy (7,9);cout<<"intriga, luego los examin\242 a mano.";
	gotoxy (7,10);cout<<"Fueron los 30 minutos m\240s tensos de mi";
	gotoxy (7,11);cout<<"vida entera. Pasado eso, el mercader";
	gotoxy (7,12);cout<<"dijo:";
	
	gotoxy (7,14);cout<<"\x22"<<"Genuinas, buena condici\242n y gran";
	gotoxy (7,15);cout<<"valor.No s\202 c\242mo obtuviste estas";
	gotoxy (7,16);cout<<"preciosidades, pero esto f\240cilmente";
	gotoxy (7,17);cout<<"puede ser mi ticket para salir de este";
    gotoxy (7,18);cout<<"lugar."<<"\x22";
	
}

void Tengo_unas_joyas_parte2_R2()  //3 respuestas//muchasGracias//comida
{
	gotoxy (7,3);cout<<"\x22"<<"Te deseo lo mejor de las suertes,";
	gotoxy (7,4);cout<<"pero mi ni\244a realmente necesita la";
	gotoxy (7,5);cout<<"medicina ahora."<<"\x22";
	gotoxy (7,6);cout<<"\x22"<<"De acuerdo, aqu\241 tienes. No te mien_";
    gotoxy (7,7);cout<<"to, te lo dar\241a por menos, pero no";
	gotoxy (7,8);cout<<"puedo permitirme nada ni siquiera para";
	gotoxy (7,9);cout<<"m\241 mismo."<<"\x22";
	gotoxy (7,10);cout<<"\x22"<<"Gracias de todas formas."<<"\x22";
	
	gotoxy (7,12);cout<<"Corr\241 hasta la habitaci\242n de Amelia",
    gotoxy (7,13);cout<<"para entregarle los medicamentos.";
    gotoxy (7,14);cout<<"\x22"<<"Querida, te consegu\241 unas medicinas.";
    gotoxy (7,15);cout<<"Todo va a estar bien ahora. No lo";
    gotoxy (7,16);cout<<"escupas. S\202 que sabe feo, pero te va";
    gotoxy (7,17);cout<<"hacer sentir mejor."<<"\x22";

	
}
void La_manana_llego()   //3 respuestas//muchasGracias//comida
{
	
	gotoxy (7,3);cout<<"La ma\244ana lleg\242 tranquila como nunca,"; 
	gotoxy (7,4);cout<<"no hubo disparos ni explosiones";
	gotoxy (7,5);cout<<"haciendo eco en las calles.";
	gotoxy (7,6);cout<<"Y en medio de eso, estaba amaneciendo,";
	gotoxy (7,7);cout<<"yo al lado de mi peque\244a, revis\240ndola";
	gotoxy (7,8);cout<<"tras lo que ha pasado.";
	gotoxy (7,9);cout<<"Planeaba continuar en el progreso de";
	gotoxy (7,10);cout<<"limpiar los escombros de mi casa ori_";
	gotoxy (7,11);cout<<"ginal, pero un retumbar de puerta me";
	gotoxy (7,12);cout<<"quit\242 toda la paz que la ma\244ana";
	gotoxy (7,13);cout<<"pose\241a.";
	gotoxy (7,14);cout<<"\x22"<<"\xAD"<<"Ad\240n, tenemos que hablar"<<"\x21"<<"\x22";
	gotoxy (7,15);cout<<"Reconocer\241a esa voz en cualquier lado.";
	gotoxy (7,16);cout<<"Mi hermano est\240 en mi puerta.";
	gotoxy (7,18);cout<<"Salgo a recibirle...";

	
	
}

void teTomaste_un_tiempo()        //3 respuestas//muchasGracias//comida
{
	gotoxy (7,3);cout<<"\x22"<<"Te tomaste tu buen tiempo."<<"\x22";
    gotoxy (7,4);cout<<"\x22"<<"\250Podemos hablar?"<<"\x22";


}

void marco_2()
{
	int x,y,i,j;

	for(i=4;i<90;i++)  //PARA LAS LINEAS HORIZONTALES
	{
		gotoxy(i,1);cout<<"\315";
	}
	gotoxy (90,1);cout<<"\273";
	for(j=2;j<20;j++)  //PARA LAS LINEAS VERTICALES
    {
        gotoxy(90,j);cout<<"\272";
	}
	gotoxy (90,20);cout<<"\274";
	for(i=89;i>3;i--)  //PARA LAS LINEAS HORIZONTALES
	{
    	gotoxy(i,20);cout<<"\315";
	}
    gotoxy (4,20);cout<<"\310";
	for(j=19;j>1;j--)  //PARA LAS LINEAS VERTICALES
	{
		gotoxy(4,j);cout<<"\272";
    }
    gotoxy (4,1);cout<<"\311";
    gotoxy(47,2);cout<<"\333";
    gotoxy(47,3);cout<<"\333";
    gotoxy(47,4);cout<<"\333";
    gotoxy(47,5);cout<<"\333";
    gotoxy(47,6);cout<<"\333";
	gotoxy(47,7);cout<<"\333";
	gotoxy(47,8);cout<<"\333";
	gotoxy(47,9);cout<<"\333";
	gotoxy(47,10);cout<<"\333";
	gotoxy(47,11);cout<<"\333";
	gotoxy(47,12);cout<<"\333";
	gotoxy(47,13);cout<<"\333";
	gotoxy(47,14);cout<<"\333";
	gotoxy(47,15);cout<<"\333";
	gotoxy(47,16);cout<<"\333";
	gotoxy(47,17);cout<<"\333";
	gotoxy(47,18);cout<<"\333";
	gotoxy(47,19);cout<<"\333";

}

int Menu()
{
	OcultCursor();
	gotoxy(52,10);cout<<" \x22"<<"Oiga, \250me reconoces?"<<"\x22";
	gotoxy(52,11);cout<<" \x22"<<"Mi hija est\240 muy enferma"<<"\x22";

	int x=51,y=10; gotoxy(x,y);cout<<"\20";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==10) return 1; if (y==11) return 2;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=11) y++; else y=10; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=10) y--; else y=11; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

int Menu_R1()
{
	OcultCursor();
	gotoxy(52,14);cout<<" \x22"<<"Muchas gracias, muchas gracias..."<<"\x22";
	gotoxy(52,15);cout<<" \x22"<<"Espera un momento"<<"\x22";
	gotoxy(52,16);cout<<" \x22"<<"\250C\242mo te pago?"<<"\x22";

	int x=51,y=14; gotoxy(x,y);cout<<"\20";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==14) return 1; if (y==15) return 2;if (y==16) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=16) y++; else y=14; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=14) y--; else y=16; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}


int Menu_R2()
{
	OcultCursor();
	gotoxy(9,15);cout<<" \x22"<<"Muchas gracias, muchas gracias..."<<"\x22";
	gotoxy(9,16);cout<<" \x22"<<"Espera un momento"<<"\x22";
	gotoxy(9,17);cout<<" \x22"<<"\250C\242mo te pago?"<<"\x22";

	int x=8,y=15; gotoxy(x,y);cout<<"\20";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==15) return 1; if (y==16) return 2;if (y==17) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=17) y++; else y=15; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=15) y--; else y=17; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

int Menu_R1_1()
{
	OcultCursor();
	gotoxy(9,14);cout<<" \x22"<<"Sugerir comida y agua"<<"\x22";
	gotoxy(9,15);cout<<" \x22"<<"Sugerir joyas"<<"\x22";
	gotoxy(9,16);cout<<" \x22"<<"Sugerir dinero"<<"\x22";
 
	int x=8,y=14; gotoxy(x,y);cout<<"\20";  // X uno menos Y min
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==14) return 1; if (y==15) return 2;if (y==16) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=16) y++; else y=14; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=14) y--; else y=16; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

int Menu_R1_2()
{
	OcultCursor();
	gotoxy(9,9);cout<<" \x22"<<"Sugerir comida y agua"<<"\x22";
	gotoxy(9,10);cout<<" \x22"<<"Sugerir joyas"<<"\x22";
	gotoxy(9,11);cout<<" \x22"<<"Sugerir dinero"<<"\x22";
 
	int x=8,y=9; gotoxy(x,y);cout<<"\20";  // X uno menos Y min
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==9) return 1; if (y==10) return 2;if (y==11) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=11) y++; else y=9; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=9) y--; else y=11; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

int Menu_R1_3()
{
	OcultCursor();
	gotoxy(9,12);cout<<" \x22"<<"Sugerir comida y agua"<<"\x22";
	gotoxy(9,13);cout<<" \x22"<<"Sugerir joyas"<<"\x22";
	gotoxy(9,14);cout<<" \x22"<<"Sugerir dinero"<<"\x22";
 
	int x=8,y=12; gotoxy(x,y);cout<<"\20";  // X uno menos Y min
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==12) return 1; if (y==13) return 2;if (y==14) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=14) y++; else y=12; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=12) y--; else y=14; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

int Menu_R2_1()
{
	OcultCursor();
	gotoxy(52,14);cout<<" \x22"<<"Sugerir comida y agua"<<"\x22";
	gotoxy(52,15);cout<<" \x22"<<"Sugerir joyas"<<"\x22";
	gotoxy(52,16);cout<<" \x22"<<"Sugerir dinero"<<"\x22";

	int x=51,y=14; gotoxy(x,y);cout<<"\20";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==14) return 1; if (y==15) return 2;if (y==16) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=16) y++; else y=14; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=14) y--; else y=16; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

int Menu_R2_2()
{
	OcultCursor();
	gotoxy(52,9);cout<<" \x22"<<"Sugerir comida y agua"<<"\x22";
	gotoxy(52,10);cout<<" \x22"<<"Sugerir joyas"<<"\x22";
	gotoxy(52,11);cout<<" \x22"<<"Sugerir dinero"<<"\x22";

	int x=51,y=9; gotoxy(x,y);cout<<"\20";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==9) return 1; if (y==10) return 2;if (y==11) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=11) y++; else y=9; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=9) y--; else y=11; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}


int Menu_R2_3()
{
	OcultCursor();
	gotoxy(9,12);cout<<" \x22"<<"Sugerir comida y agua"<<"\x22";
	gotoxy(9,13);cout<<" \x22"<<"Sugerir joyas"<<"\x22";
	gotoxy(9,14);cout<<" \x22"<<"Sugerir dinero"<<"\x22";

	int x=8,y=12; gotoxy(x,y);cout<<"\20";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==12) return 1; if (y==13) return 2;if (y==14) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=14) y++; else y=12; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=12) y--; else y=14; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"\20 "; Beep(100,100);
	    }
	    
	}
}

bool pregunta_continuar()
{
	gotoxy(90,18);cout<<"\271";
	for(int i=89;i>75;i--)
	{
		gotoxy(i,18);cout<<"\315";
	}
	gotoxy(75,18);cout<<"\311";
	gotoxy(75,19);cout<<"\272";
	gotoxy(75,20);cout<<"\312";
	
	gotoxy(76,19); cout<<" CONTINUAR >>";
	while (true)
	{
	if (getch())
	{
	char tecla =getch();
//	if (tecla==75) return false;
	if (tecla==77) return  system("cls");true; // SIGUIENTE
	if (tecla!=75&&tecla!=77) continue;
	}
    }
}

int Menu_EstaGuerra(){
	system("cls");
	marco_GUERRA(); ak_47();
	gotoxy(68,8);cout<<"MEN\xE9"; gotoxy(68,9);cout<<"\337\337\337\337";
	gotoxy(63,10);cout<<"INICIAR JUEGO";
	gotoxy(63,11);cout<<"ACERCA DE";
	gotoxy(63,12);cout<<"SALIR";
	gotoxy(60,10);cout<<"->";
	int x=60,y=10;
	while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==10) return 1; if (y==11) return 2; if (y==12) return 3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=12) y++; else y=10; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=10) y--; else y=12; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
		
	
}

bool pregunta_menu_u_otravez_GUERRA(){
	gotoxy(76,20);cout<<"\313"; gotoxy(76,21);cout<<"\272";gotoxy(76,22);cout<<"\310";
	for (int i=77;i<90;i++){
		gotoxy(i,22);cout<<"\315";
	}
	gotoxy(90,22);cout<<"\274";gotoxy(90,21);cout<<"\272";gotoxy(90,20);cout<<"\271";
	gotoxy(78,21);cout<<"CONTINUAR >>";
	
	gotoxy(5,21);cout<<"<< SALIR";
	gotoxy(4,20);cout<<"\314"; gotoxy(4,21);cout<<"\272"; gotoxy(4,22);cout<<"\310";
	for (int i=5;i<15;i++){
		gotoxy(i,22);cout<<"\315";
	}
    gotoxy(15,22);cout<<"\274"; gotoxy(15,21);cout<<"\272"; gotoxy(15,20);cout<<"\313";	
	
	while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {
	gotoxy(76,21);cout<<"                "; gotoxy(76,22);cout<<"                ";
	gotoxy(76,20);cout<<"\315";gotoxy(90,20);cout<<"\274"; gotoxy(4,21);cout<<"                ";
	gotoxy(4,22);cout<<"                ";   gotoxy(4,20);cout<<"\310"; gotoxy(15,20);cout<<"\315";  
	return false; }
	
	if (tecla==75) { gotoxy(4,21);cout<<"                ";
	gotoxy(76,22);cout<<"                ";   gotoxy(4,20);cout<<"\310"; gotoxy(15,20);cout<<"\310";   return true;}
	if (tecla!=77&&tecla!=75) continue;
	}
               }
}

void Pase_Al_Primer_Texto(){
   
      gotoxy(7,3);cout<<"Para los soldados, la guerra significa victoria. Para nosotros, significa buscar";
      gotoxy(7,4);cout<<"comida."; sleep(2);
      gotoxy(7,5);cout<<"En  el infierno que nos toc\xA2 vivir, fue  uno en el  que har\xA1"<<"amos lo que sea para";
      gotoxy(7,6);cout<<"sobrevivir. Las cosas que haces en guerra nunca se olvidan."; sleep(2);
      gotoxy(7,8);cout<<"No todos en la guerra son soldados..."; sleep(2);
      gotoxy(7,10); cout<<"================================================================================";
      gotoxy(7,11);cout<<"Historia basada en el sitio de Sarajevo, el asedio m\xA0"<<"s prolongado  a  una ciudad";
      gotoxy(7,12);cout<<"en la historia de la guerra moderna.";
      gotoxy(7,13);cout<<"================================================================================"; sleep(1);
      for(int iii=7;iii<63;iii++){
	gotoxy(iii,15);cout<<" ..../\"\"\"\"\"\"\"\"|======[]    ";               gotoxy(iii-1,15);cout<<" ";
	gotoxy(iii,16);cout<<"..../\"\"\"\"\"\"\"\"\"\"\"\"|         ";          gotoxy(iii-1,16);cout<<" ";
	gotoxy(iii,17);cout<<"/\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\\";gotoxy(iii-1,17);cout<<" ";
	gotoxy(iii,18);cout<<"\\(@) (@) (@) (@) (@) (@)/  ";                     gotoxy(iii-1,18);cout<<"_";  Sleep(100); } 
    gotoxy(25,16);cout<<"ESTA GUERRA M\xD6"<<"A";
   
   	
}

void PrimerTexto(){

	gotoxy(7,3); cout<<"La familia de Ad\xA0n no pudo escapar  de"; 
	gotoxy(7,4); cout<<"la ciudad a tiempo,  pero lograron  a-";
	gotoxy(7,5); cout<<"guantar a duras penas el asedio. Hasta";
	gotoxy(7,6); cout<<"que un d\xA1"<<"a la esposa de Ad\xA0n  enferm\xA2.";
	gotoxy(7,7); cout<<"Sin los  medicamentos necesarios, B\xA0r-";
	gotoxy(7,8); cout<<"bara muri\xA2. Tras la muerte de su madre";
	gotoxy(7,9); cout<<"Amelia, se volvi\xA2 completamente t\xA1"<<"mida";
	gotoxy(7,10); cout<<"y par\xA2 de hablar, despu\x82s ella tambi\x82n";
    gotoxy(7,11);cout<<"fue  afectada por una enfermedad.  Una";
    gotoxy(7,12);cout<<"noche, una explosi\xA2n destruy\xA2 su hogar";
	gotoxy(7,13);cout<<"que apenas pudieron atrincherar, afor-";
	gotoxy(7,14);cout<<"tunadamente  sobrevivieron y Ad\xA0n car-"; 
	gotoxy(7,15);cout<<"g\xA2  Amelia al otro lado del  edificio,"; 
	gotoxy(7,16);cout<<"desesperado por buscar a su hija."; 
	gotoxy(7,17);cout<<"                ...";      
	gotoxy(7,18);cout<<"\"Todo va a estar bien Amelia.  Vamos a";
	
	gotoxy(50,3); cout<<"estar muy seguros aqu\xA1,te lo prometo.\"";  
	gotoxy(50,4); cout<<"\"Descansa  ahora, necesitas  recuperar";
	gotoxy(50,5); cout<<"tus fuerzas.\"";
	gotoxy(50,6); cout<<"\"Buscar\x82 alrededor de la casa,usar\x82 lo";
	gotoxy(50,7); cout<<"que pueda encontrar.\"";
	gotoxy(50,8); cout<<"\"Estar\x82 cerca, no te preocupes.  Voy a";
	gotoxy(50,9); cout<<"verte en un momento.\"";
	gotoxy(50,10);cout<<"\"Te amo, mi valiente peque\xA4"<<"a.\"";
    gotoxy(50,11);cout<<"               ...";
    gotoxy(50,12);cout<<"Acarici\x82 su peque\xA4"<<"a cara, sucia de los";
	gotoxy(50,13);cout<<"escombros que cayeron sobre nosotros y";
	gotoxy(50,14);cout<<"fr\xA1"<<"a por el  clima que cruelmente azo-"; 
	gotoxy(50,15);cout<<"taba nuestra decr\x82"<<"pita ciudad. No pude"; 
	gotoxy(50,16);cout<<"creer lo que est\xA0  pasando, nunca cre\xA1"; 
	gotoxy(50,17);cout<<"que  llegara los conflictos hasta este";      
	gotoxy(50,18);cout<<"punto. Lo que me preocupaba hasta hace";

}
void PrimerTexto2(){
	
	gotoxy(7,3); cout<<"unos meses fue  la educaci\xA2n de Amelia"; 
	gotoxy(7,4); cout<<"y el nuevo trabajo de B\xA0rbara,ahora me";
	gotoxy(7,5); cout<<"encuentro aqu\xA1: en un departamento des";
	gotoxy(7,6); cout<<"trozado  con  un muro ca\xA1"<<"do  que  solo";
	gotoxy(7,7); cout<<"muestra la destrucci\xA2n del lugar donde";
	gotoxy(7,8); cout<<"normalmente viv\xA1"<<"a y de la  ciudad  que";
	gotoxy(7,9); cout<<"cre\xA1 que jam\xA0"<<"s cambiar\xA1"<<"a.             ";
	gotoxy(7,10);cout<<"Muchas cosas pasaron en poco  tiempo y";
    gotoxy(7,11);cout<<"en medio de la guerra yo y otros  fui-";
    gotoxy(7,12);cout<<"quemados por el  fuego  cruzado.Tantas";
	gotoxy(7,13);cout<<"vidas desperdiciadas por algo sin sen-";
	gotoxy(7,14);cout<<"tido y la muerte cobr\xA2 tantos  inocen-"; 
	gotoxy(7,15);cout<<"tes, entre ellos mi amada B\xA0rbara cuya"; 
	gotoxy(7,16);cout<<"sonrisa quitaba el dolor de mi coraz\xA2n"; 
	gotoxy(7,17);cout<<"y ahora amenaza a mi peque\xA4"<<"a, a  quien";      
	gotoxy(7,18);cout<<"le debo la persona que ahora soy.     ";
	
	gotoxy(50,3); cout<<"No me quiero seguir quedando aqu\xA1,ten-";  
	gotoxy(50,4); cout<<"go que hacer algo ahora.              ";
	gotoxy(50,5); cout<<"                                      ";
	gotoxy(50,6); cout<<"                                      ";
	gotoxy(50,7); cout<<"                                      ";
	gotoxy(50,8); cout<<"                                      ";
	gotoxy(50,9); cout<<"                                      ";
	gotoxy(50,10);cout<<"                                      ";
    gotoxy(50,11);cout<<"                                      ";
    gotoxy(50,12);cout<<"                                      ";
	gotoxy(50,13);cout<<"                                      ";
	gotoxy(50,14);cout<<"                                      "; 
	gotoxy(50,15);cout<<"                                      "; 
	gotoxy(50,16);cout<<"                                      "; 
	gotoxy(50,17);cout<<"                                      ";      
	gotoxy(50,18);cout<<"                                      ";
	
	int piso=2,y=0; 
	while (true){
		if (y>100) break;
		piso=piso+y;
		switch(piso){
		
		case 0: y=Opciones1TextoSotano();
		break;  
		
		case 1: y=Opciones1Texto1Piso();
		break;
		
		case 2: y=Opciones1Texto2Piso();
		break;
		
		case 3: y=Opciones1Texto3Piso();
		break;
		
	    }
	}
	
	
    
}

int Opciones1Texto2Piso(){
    while (true){
    int aux=0;
   	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el segundo piso.           ";
	gotoxy(50,8); cout<<"      \376 Dibujo de Amelia.             ";
	gotoxy(50,10);cout<<"      \376 Carta en el suelo.            ";
    gotoxy(50,12);cout<<"      \376 Subir al tercer piso.         ";
	gotoxy(50,14);cout<<"      \376 Bajar al primer piso.         "; 
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3; if (y==14) aux=4;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=14) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=14; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}

	switch(aux){
		case 1: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el segundo piso.           ";
		        gotoxy(50,8); cout<<"\376 Dibujo de Amelia.                    ";
		        gotoxy(50,10);cout<<"Un dibujo a lapiceros de Amelia cuando";
		        gotoxy(50,11);cout<<"est\xA0"<<"bamos  en  nuestra  casa  anterior.";
		        gotoxy(50,12);cout<<"Representa nuestra familia, yo y  B\xA0r-";
		        gotoxy(50,13);cout<<"bara de manos con nuestra hija,la par-";
		        gotoxy(50,14);cout<<"te de B\xA0rbara est\xA0 completamente negro";
		        gotoxy(50,15);cout<<"\"Amelia amaba dibujar. Incluso  cuando";
		        gotoxy(50,16);cout<<"no hab\xA1"<<"a crayolas, hallaba la forma.\"";
		        gotoxy(50,18);cout<<"     PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		break;	
		case 2:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el segundo piso.           ";
		        gotoxy(50,8); cout<<"\376 Carta en el suelo.                   ";
		        gotoxy(50,10);cout<<"Una carta sucia  yace  en la mesa, sus";
		        gotoxy(50,11);cout<<"contenidos dicen: Ad\xA0n, incluso cuando";
		        gotoxy(50,12);cout<<"las cosas nunca fueron tan bien  entre";
		        gotoxy(50,13);cout<<"nosotros, todav\xA1"<<"a somos hermanos.Estu-";
		        gotoxy(50,14);cout<<"viste alegre a vivir en mi casa cuando";
		        gotoxy(50,15);cout<<"la tuya fue destruida,  \xAD"<<"SE RAZONABLE\x21";
		      
		        gotoxy(50,18);cout<<"PULSE UNA TECLA PARA CONTINUAR LEYENDO";
		        system("pause>nul");
		        for(int i=10;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,10);cout<<"Hubo rumores de un corredor  humanita-";
		        gotoxy(50,11);cout<<"rio  que  viene hacia aqu\xA1 y la  gente";
		        gotoxy(50,12);cout<<"con ni\xA4"<<"os van a ser priorizados.";
		        gotoxy(50,13);cout<<"Amelia es nuestra \xA3"<<"nica oportunidad de";
		        gotoxy(50,14);cout<<"irse de aqu\xA1. \xA8"<<"No quieres salvarla\x3F";
		        gotoxy(50,15);cout<<"\"Me olvid\x82 de esta carta. El idiota de";
		        gotoxy(50,16);cout<<"mi hermano...\"";
		        gotoxy(50,18);cout<<"     PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		
		break;
		
		case 3: return 1;
		
		break;
		
		case 4: return -1;
		
		break;
	}
    }
}

int Opciones1Texto3Piso(){
	
	while (true){
	int aux=0;
	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el tercer piso.            ";
	gotoxy(50,8); cout<<"      \376 Bajar al segundo piso.        ";
	gotoxy(50,10);cout<<"      \376 Trapos en el suelo.           ";
    gotoxy(50,12);cout<<"      \376 Muro ca\xA1"<<"do.         ";
	
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=12) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=12; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
	
	switch(aux){
		case 1: return -1;
		        
		break;	
		case 2:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el tercer piso.           ";
		        gotoxy(50,8); cout<<"\376 Trapos en el suelo.                 ";
		        gotoxy(50,10);cout<<"Un conjunto de  harapos que  uso  para";
		        gotoxy(50,11);cout<<"dormir, lamentablemente  no puedo que-";
		        gotoxy(50,12);cout<<"darme dormido.  Debo de resguardar  la";
		        gotoxy(50,13);cout<<"casa por si  algo le sucede a mi hija.";
		        gotoxy(50,14);cout<<"\"La  \xA3"<<"nica cama usable la est\xA0  usando";
		        gotoxy(50,15);cout<<"Amelia, no me importa dormir aqu\xA1.\"";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		
		break;
		
		case 3: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el tercer piso.           ";
		        gotoxy(50,8); cout<<"\376 Muro ca\xA1"<<"do.                  ";
		        gotoxy(50,10);cout<<"Formalmente  un  balc\xA2n, ahora  no  es";
		        gotoxy(50,11);cout<<"nada m\xA0"<<"s que un muro con vista directa";
		        gotoxy(50,12);cout<<"a la casa que  sol\xA1"<<"amos vivir.  Ahora,";
		        gotoxy(50,13);cout<<"destruida por completa.";
		        gotoxy(50,14);cout<<"\"...\"";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		
		break;
		
		
	}
	
	
}
}

int Opciones1Texto1Piso(){
	
	while (true){
	int aux=0;
	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el primer piso.            ";
	gotoxy(50,8); cout<<"      \376 Bajar al s\xA2"<<"tano.       ";
	gotoxy(50,10);cout<<"      \376 Subir al segundo piso.        ";
    gotoxy(50,12);cout<<"      \376 Revisar basura.               ";
    gotoxy(50,14);cout<<"      \376 Ir afuera.                    ";
	
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3;if (y==14) aux=4;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=14) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=14; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
	
	switch(aux){
		case 1: return -1;
		        
		break;	
		
		case 2: return 1;
		
		break;
		case 3:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el primer piso.           ";
		        gotoxy(50,8); cout<<"\376 Revisar basura                 ";
		        gotoxy(50,10);cout<<"Mueves entre la multitud de pedazos de";
		        gotoxy(50,11);cout<<"madera concreto y polvo por si encuen-";
		        gotoxy(50,12);cout<<"tras algo de valor, el esfuerzo fue en";
		        gotoxy(50,13);cout<<"vano. No hay nada que te sirva.";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		
		break;
		
		case 4: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el primer piso.           ";
		        gotoxy(50,8); cout<<"\376 Ir afuera.                  ";
		        gotoxy(50,10);cout<<"Abres la puerta y miras alrededor.Hay";
		        gotoxy(50,11);cout<<"varios ruidos de balas y  explosiones";
		        gotoxy(50,12);cout<<"a la distancia, no es seguro salir de";
		        gotoxy(50,13);cout<<"aqu\xA1 y mucho menos sensato abandonar";
		        gotoxy(50,14);cout<<"a tu hija.";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		
		break;
		
		
	}
	
	
}
}

int Opciones1TextoSotano(){
	
	while (true){
	int aux=0;
	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el s\xA2"<<"tano.            ";
	gotoxy(50,8); cout<<"      \376 Subir al primer piso.         ";
	gotoxy(50,10);cout<<"      \376 Revisar la radio.             ";
    gotoxy(50,12);cout<<"      \376 Mover escombros pesados.        ";
	
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=12) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=12; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
	
	switch(aux){
		case 1: return 1;
		        
		break;	
		case 2:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el s\xA2"<<"tano.            ";
		        gotoxy(50,8); cout<<"\376 Revisar la radio.                 ";
		        gotoxy(50,10);cout<<"Una radio FM que compraste hace a\xA4"<<"os y";
		        gotoxy(50,11);cout<<"todav\xA1"<<"a funciona as\xA1 que buscas la sin";
		        gotoxy(50,12);cout<<"ton\xA1"<<"a que haya a\xA3"<<"n disponible. Se escu";
		        gotoxy(50,13);cout<<"cha una guitarra y percusi\xA2nes y  hace";
		        gotoxy(50,14);cout<<"que el sonido desaparezca.Hay emisoras";
		        gotoxy(50,15);cout<<"de otras ciudades que son indiferentes";
		        gotoxy(50,16);cout<<"a lo que est\xA0 pasando.Apagas la radio.";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		
		break;
		
		case 3: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el s\xA2"<<"tano.            ";
		        gotoxy(50,8); cout<<"\376 Mover escombros pesados.          ";
		        
		      
		        gotoxy(50,11);cout<<"   PULSE UNA TECLA PARA CONTINUAR";
		        system("pause>nul"); return 101;
		
		break;
		
		
	}
	
	
}
	
	
}

void SegundoTexto(){
	gotoxy(7,3); cout<<"Empiezo a mover los escombros.Piedra a"; 
	gotoxy(7,4); cout<<"piedra, escombro a escombro lentamente";
	gotoxy(7,5); cout<<"muevo la barrera que este cuarto tiene";
	gotoxy(7,6); cout<<"tengo esperanza de que algo va a haber";
	gotoxy(7,7); cout<<"en el otro lado. Sin embargo, el  pro-";
	gotoxy(7,8); cout<<"greso que hago es muy lento  y me  ab-";
	gotoxy(7,9); cout<<"suelvo en mis pensamientos mientras ha";
	gotoxy(7,10);cout<<"go esta ardua tarea.";
    gotoxy(7,11);cout<<"Entre esos pensamientos que pasan,  me";
    gotoxy(7,12);cout<<"acuerdo de mi hermano.Mi hermano siem-";
	gotoxy(7,13);cout<<"pre fue un desgraciado y va a morir un";
	gotoxy(7,14);cout<<"desgraciado. Nunca confi\x82 en  \x82"<<"l y  no"; 
	gotoxy(7,15);cout<<"dejar\x82 la vida de mi ni\xA4"<<"a en su manos."; 
	gotoxy(7,16);cout<<"Me repito esos pensamientos una y otra"; 
	gotoxy(7,17);cout<<"vez por horas, finalmente,  cuando  la";      
	gotoxy(7,18);cout<<"noche esta cerca y los ruidos de balas";
	
	gotoxy(50,3); cout<<"se apagan  es cuando admiro el  camino";  
	gotoxy(50,4); cout<<"abierto ya.";
	gotoxy(50,5); cout<<"Hay  un  mueble  que   definitivamente";
	gotoxy(50,6); cout<<"tiene  recursos. Dentro  encuentro  un";
	gotoxy(50,7); cout<<"par de  joyas y un mu\xA4"<<"eco  de  perrito";
	gotoxy(50,8); cout<<"casi  nuevo. A Amelia siempre le gusto";
	gotoxy(50,9); cout<<"los  perros desde ni\xA4"<<"a, le va a encan-";
	gotoxy(50,10);cout<<"tar.  No puedo  aguantar  dejar  salir";
    gotoxy(50,11);cout<<"una  sonrisa, se que estamos  viviendo";
    gotoxy(50,12);cout<<"posiblemente  en  un infierno terrenal";
	gotoxy(50,13);cout<<"y que  la muerte   podria venir a  por";
	gotoxy(50,14);cout<<"nosotros  en   cualquier momento,  sin"; 
	gotoxy(50,15);cout<<"embargo, el  saber que ese peluche po-"; 
	gotoxy(50,16);cout<<"dria devolver  alegria por mas  minima"; 
	gotoxy(50,17);cout<<"que sea, me hace sentir  orgulloso.   ";      
	gotoxy(50,18);cout<<"Subo los escalones del  departamento..";

	
}
void SegundoTexto2(){
	gotoxy(7,3); cout<<"a toda velocidad hasta la cama de Ame-"; 
	gotoxy(7,4); cout<<"lia, ella todav\xA1"<<"a sigue inmovil pese a";
	gotoxy(7,5); cout<<"todo el tiempo pasado. Me rompe el co-";
	gotoxy(7,6); cout<<"razon el que sepa porque ella  se  en-";
	gotoxy(7,7); cout<<"cuentra asi. Victima un  conflicto  en";
	gotoxy(7,8); cout<<"el que ella no tiene nada que ver.  Me";
	gotoxy(7,9); cout<<"siento a lado de la cama.             ";
	gotoxy(7,10);cout<<"\"Hey, mira lo que encontr\x82\" - saco  el";
    gotoxy(7,11);cout<<"mu\xA4"<<"eco que encontre - \"Un perrito mira";
    gotoxy(7,12);cout<<"\xA8"<<"Por qu\x82 no cuidas de \x82"<<"l mientras  que";
	gotoxy(7,13);cout<<"papi cuida de ti car\xA4"<<"o\x3F\"              ";
	gotoxy(7,14);cout<<"Amelia se puso tan alegre cuando le di"; 
	gotoxy(7,15);cout<<"el mu\xA4"<<"eco. La sonrisa en su cara  sana"; 
	gotoxy(7,16);cout<<"mi corazon. Desear\xA1"<<"a que  tuviera  mas"; 
	gotoxy(7,17);cout<<"razones para  sonreir,  pero en  estas";      
	gotoxy(7,18);cout<<"circunstancias...                     ";
	
	gotoxy(50,3); cout<<"Miro a mi alrededor destruido, escucho";  
	gotoxy(50,4); cout<<"los sonidos de violencia donde me  en-";
	gotoxy(50,5); cout<<"cuentro respiro el aire  que  lleva el";
	gotoxy(50,6); cout<<"olor de tanto fuego y lagrimas. No hay";
	gotoxy(50,7); cout<<"nada de que estar feliz, sin  embargo,";
	gotoxy(50,8); cout<<"no dejare a Amelia,ella es todo lo que";
	gotoxy(50,9); cout<<"me queda y har\x82 todo lo que sea  nece-";
	gotoxy(50,10);cout<<"sario para verla crecer.              ";
    gotoxy(50,11);cout<<"Intente buscar por el resto de la casa";
    gotoxy(50,12);cout<<"por cualquier  cosa restante  que  sea";
	gotoxy(50,13);cout<<"posible usar,pero en el tiempo que use";
	gotoxy(50,14);cout<<"al abrir paso en medio de  los  escom-"; 
	gotoxy(50,15);cout<<"bros del sotano ya se hab\xA1"<<"a  hecho  de"; 
	gotoxy(50,16);cout<<"noche y no ten\xA1"<<"a forma de ver en medio"; 
	gotoxy(50,17);cout<<"de toda esta oscuridad. As\xA1"<<" que decid\xA1";      
	gotoxy(50,18);cout<<"regresar.                             ";
	
}

void SegundoTexto3(){
	gotoxy(7,3); cout<<"Me qued\x82 al lado de Amelia  todo  este"; 
	gotoxy(7,4); cout<<"tiempo intentanto volver a  sacar  una";
	gotoxy(7,5); cout<<"sonrisa o  una  palabra  de ella  pero";
	gotoxy(7,6); cout<<"parece que el perrito que le  entregue";
	gotoxy(7,7); cout<<"fue lo  m\xA0"<<"ximo que  pude  hacer hoy,le";
	gotoxy(7,8); cout<<"cont\x82  un  cuento para hacerla  dormir";
	gotoxy(7,9); cout<<"y me quede a vigilar la casa  en  esta";
	gotoxy(7,10);cout<<"noche.                                ";
    gotoxy(7,11);cout<<"La noche fue tranquila aparte  del eco";
    gotoxy(7,12);cout<<"de los disparos distantes.  Ruego  que";
	gotoxy(7,13);cout<<"que las cosas no se empeores.La ma\xA4"<<"ana";
	gotoxy(7,14);cout<<"empez\xA2 abruptamente por los tosidos de"; 
	gotoxy(7,15);cout<<"Amelia, ella intentaba hacer el  menor"; 
	gotoxy(7,16);cout<<"ruido posible, pero la  fuerza  de  la"; 
	gotoxy(7,17);cout<<"enfermedad era demasiado para mi ni\xA4"<<"a.";      
	gotoxy(7,18);cout<<"La tos era un sonido  desgarrador  que";
	
	gotoxy(50,3); cout<<"me romp\xA1"<<"a el coraz\xA2"<<"n, el amor no cura-";  
	gotoxy(50,4); cout<<"r\xA0 jam\xA0"<<"s el dolor que ella sufre.      ";
	gotoxy(50,5); cout<<"                                      "; 
	gotoxy(50,5); cout<<"                                      "; 
	gotoxy(50,7); cout<<"                                      ";
	gotoxy(50,8); cout<<"                                      ";
	gotoxy(50,9); cout<<"                                      ";
	gotoxy(50,10);cout<<"                                      ";
    gotoxy(50,11);cout<<"                                      ";
    gotoxy(50,12);cout<<"                                      ";
	gotoxy(50,13);cout<<"                                      ";
	gotoxy(50,14);cout<<"                                      "; 
	gotoxy(50,15);cout<<"                                      "; 
	gotoxy(50,16);cout<<"                                      "; 
	gotoxy(50,17);cout<<"                                      ";      
	gotoxy(50,18);cout<<"                                      ";
	int piso=2,y=0; 
	while (true){
		if (y>100) break;
		piso=piso+y;
		switch(piso){
		
		case 0: y=Opciones2TextoSotano();
		break;  
		
		case 1: y=Opciones2Texto1Piso();
		break;
		
		case 2: y=Opciones2Texto2Piso();
		break;
		
		case 3: y=Opciones2Texto3Piso();
		break;
		
	    }
	}
	
	
	
}

int Opciones2Texto2Piso(){
    while (true){
    int aux=0;
   	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el segundo piso.         ";
	gotoxy(50,8); cout<<"      \376 Observar a Amelia.          ";
	gotoxy(50,10);cout<<"      \376 Observar el peluche.        ";
    gotoxy(50,12);cout<<"      \376 Subir al tercer piso.       ";
	gotoxy(50,14);cout<<"      \376 Bajar al primer piso.       "; 
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3; if (y==14) aux=4;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=14) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=14; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}

	switch(aux){
		case 1: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el segundo piso.           ";
		        gotoxy(50,8); cout<<"\376 Observar a Amelia.                  ";
		        gotoxy(50,10);cout<<"Su frente arde como nunca, la  tos  no";
		        gotoxy(50,11);cout<<"muestra signos de parar en ningun  mo-";
		        gotoxy(50,12);cout<<"mento cercano.  Si  tan  solo  hubiera";
		        gotoxy(50,13);cout<<"medicina.                             ";
		        
		        gotoxy(50,18);cout<<"     PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		break;	
		case 2:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el segundo piso.           ";
		        gotoxy(50,8); cout<<"\376 Observar el peluche.                  ";
		        gotoxy(50,10);cout<<"No crei que Amelia llegara  a  confiar";
		        gotoxy(50,11);cout<<"tanto en ese perrito que consegu\xA1"<<".    ";
		        gotoxy(50,12);cout<<"Espero que le ayude a seguir fuerte en";
		        gotoxy(50,13);cout<<"todo.                                 ";
		        gotoxy(50,14);cout<<"\"Aguanta Amelia el perrito te  cuidar\xA0";
		        gotoxy(50,15);cout<<"mientras busco medicina\"              ";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR     ";
		        system("pause>nul");
		        
		
		break;
		
		case 3: return 1;
		
		break;
		
		case 4: return -1;
		
		break;
	}
    }
}

int Opciones2Texto3Piso(){
	
	while (true){
	int aux=0;
	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el tercer piso.            ";
	gotoxy(50,8); cout<<"      \376 Bajar al segundo piso.        ";
	gotoxy(50,10);cout<<"      \376 Registrar.                    ";
	
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; }
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=10) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=10; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
	
	switch(aux){
		case 1: return -1;
		        
		break;	
		case 2:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el tercer piso.           ";
		        gotoxy(50,8); cout<<"\376 Registrar.                         ";
		        gotoxy(50,10);cout<<"No hay nada de valor, debo apresurarme";
		        
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		
		break;
		
	}
	
	
}
}

int Opciones2Texto1Piso(){
	
	while (true){
	int aux=0;
	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el primer piso.            ";
	gotoxy(50,8); cout<<"      \376 Bajar al s\xA2"<<"tano.       ";
	gotoxy(50,10);cout<<"      \376 Subir al segundo piso.        ";
    gotoxy(50,12);cout<<"      \376 Escuchar tus alrededores.     ";
    gotoxy(50,14);cout<<"      \376 Mirar afuera.                 ";
	
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3;if (y==14) aux=4;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=14) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=14; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
	
	switch(aux){
		case 1: return -1;
		        
		break;	
		
		case 2: return 1;
		
		break;
		case 3:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el primer piso.           ";
		        gotoxy(50,8); cout<<"\376 Escuchar tus alrededores.      ";
		        gotoxy(50,10);cout<<"El conflicto parece empeorar, los  so-";
		        gotoxy(50,11);cout<<"nidos  de  fusibles  se  escuchan  mas";
		        gotoxy(50,12);cout<<"fuertes. Salir es suicidio.           ";
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		        
		
		break;
		
		case 4: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el primer piso.           ";
		        gotoxy(50,8); cout<<"\376 Miara afuera.               ";
		        gotoxy(50,10);cout<<"La curiosidad te lleva a ver  por  la";
		        gotoxy(50,11);cout<<"ventana, no hay peligro  cerca  afor-";
		        gotoxy(50,12);cout<<"tunadamente.                         ";
		        
		      
		        gotoxy(50,18);cout<<"    PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		
		break;
		
		
	}
	
	
}
}

int Opciones2TextoSotano(){
	
	while (true){
	int aux=0;
	for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
	
	gotoxy(50,6); cout<<"  Est\xA0s en el s\xA2"<<"tano.            ";
	gotoxy(50,8); cout<<"      \376 Subir al primer piso.         ";
	gotoxy(50,10);cout<<"      \376 Revisar la radio.             ";
    gotoxy(50,12);cout<<"      \376 Mover escombros.              ";
	
	
    int x=53,y=8; gotoxy(x,y);cout<<"->";
    while(aux==0){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) aux=1; if (y==10) aux=2; if (y==12) aux=3;}
			 if (tecla==80){ gotoxy(x,y);cout<<"  "; if (y!=12) y=y+2; else y=8; }
			 if (tecla==72){ gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=12; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; Beep(100,100);
		     
	    }
	}
	
	switch(aux){
		case 1: return 1;
		        
		break;	
		case 2:  for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el s\xA2"<<"tano.            ";
		        gotoxy(50,8); cout<<"\376 Revisar la radio.                 ";
		        
		      
		        gotoxy(50,11);cout<<"   PULSE UNA TECLA PARA CONTINUAR";
		        system("pause>nul"); return 101;
		        
		
		break;
		
		case 3: for(int i=5;i<19;i++){	
		        gotoxy(50,i);cout<<"                                      ";
		        }
		        gotoxy(50,6); cout<<"  Est\xA0s en el s\xA2"<<"tano.            ";
		        gotoxy(50,8); cout<<"\376 Mover escombros                   ";
		        gotoxy(50,10);cout<<"Me demore un dia entero en mover  esta";
		        gotoxy(50,11);cout<<"basura y hacerme paso, no hay  nada de";
		        gotoxy(50,12);cout<<"valor alli.                           ";
		      
		        gotoxy(50,18);cout<<"   PULSE UNA TECLA PARA REGRESAR";
		        system("pause>nul");
		
		break;
		
		
	}
	
	
}
	
	
}

void medio(){
	for (int i=2;i<20;i++){
	gotoxy(47,i);cout<<"\333"; }
}

void EstaGuerraMia(){
	
	intro_guerra();
	system("title Esta Guerra Mia");
	
	OpeningDeEstaGuerraMia(); bool SALIR=true;
	string nombreG=nombre();
	
	while (SALIR){
	int opcion; bool irmenu=false;
	opcion=Menu_EstaGuerra();
	switch (opcion){
	
	case 1:
	system("cls"); marco_GUERRA(); OcultarCursor();
	
	Pase_Al_Primer_Texto();
	irmenu=pregunta_menu_u_otravez_GUERRA();  if (irmenu==true) continue;
	
	system("cls"); marco_GUERRA(); medio();
	PrimerTexto(); 
	irmenu=pregunta_menu_u_otravez_GUERRA();  if (irmenu==true) continue;
	
	PrimerTexto2();
	SegundoTexto();
	irmenu=pregunta_menu_u_otravez_GUERRA();  if (irmenu==true) continue;
	
	SegundoTexto2();
	irmenu=pregunta_menu_u_otravez_GUERRA();  if (irmenu==true) continue;
	SegundoTexto3();
	system("cls");
	
	historia_2();
    
    break;
    
    
    case 2:
    	system("cls"); marco_GUERRA();
    	gotoxy(7,3);cout<<"Esta Guerra M\xA1"<<"a es una experiencia que, mediante el uso de los medios virtuales,";
    	gotoxy(7,4);cout<<"planea informar al jugador sobre las experiencias de los civiles en los conflic-";
    	gotoxy(7,5);cout<<"tos militares y contar una historia de las terribles condiciones de la guerra.";
    	gotoxy(7,7);cout<<"Hablando sobre como la muerte y destrucci\xA2n puede ocurrir a  todos  en  nuestras";
    	gotoxy(7,8);cout<<"puertas, y no exclusivamente en una noticia de un lugar lejano que no existe.";
    	gotoxy(7,10);cout<<"Bas\xA0"<<"ndose en el conflicto Sarajevo se intenta tocar temas serios y hacer pregun-";
    	gotoxy(7,11);cout<<"tarse al jugador dilemas morales en estas condiciones mediante  la historia  que";
    	gotoxy(7,12);cout<<"el juego presenta.";
    	gotoxy(7,14);cout<<"La intenci\xA2n es  graficar la guerra y los  horrores que la gente  com\xA3n  intenta";
    	gotoxy(7,15);cout<<"afrontar.";
    	
    	pregunta_solo_menu();
    
    break;
    
    case 3:
    	SALIR=false;
	break;
	}
    
}
	system("cls");
	Menu_principal();
}

void marco_libro()
{
	int x,y,i,j;

	for(i=4;i<90;i++)  //PARA LAS LINEAS HORIZONTALES
	{
		gotoxy(i,1);cout<<"\315";
	}
	gotoxy (90,1);cout<<"\273";
	for(j=2;j<20;j++)  //PARA LAS LINEAS VERTICALES
    {
        gotoxy(90,j);cout<<"\272";
	}
	gotoxy (90,20);cout<<"\274";
	for(i=89;i>3;i--)  //PARA LAS LINEAS HORIZONTALES
	{
    	gotoxy(i,20);cout<<"\315";
	}
    gotoxy (4,20);cout<<"\310";
	for(j=19;j>1;j--)  //PARA LAS LINEAS VERTICALES
	{
		gotoxy(4,j);cout<<"\272";
    }
    gotoxy (4,1);cout<<"\311";
    gotoxy(47,2);cout<<"\333";
    gotoxy(47,3);cout<<"\333";
    gotoxy(47,4);cout<<"\333";
    gotoxy(47,5);cout<<"\333";
    gotoxy(47,6);cout<<"\333";
	gotoxy(47,7);cout<<"\333";
	gotoxy(47,8);cout<<"\333";
	gotoxy(47,9);cout<<"\333";
	gotoxy(47,10);cout<<"\333";
	gotoxy(47,11);cout<<"\333";
	gotoxy(47,12);cout<<"\333";
	gotoxy(47,13);cout<<"\333";
	gotoxy(47,14);cout<<"\333";
	gotoxy(47,15);cout<<"\333";
	gotoxy(47,16);cout<<"\333";
	gotoxy(47,17);cout<<"\333";
	gotoxy(47,18);cout<<"\333";
	gotoxy(47,19);cout<<"\333";

}

//FUNCIÃ“N PRINCIPAL 1
void tu_hermano_te_visita()
{	system("cls");
	marco_libro();
	int opcion;
	gotoxy(7,3);cout<<"Tu hermano te visita: ";///POR VER
	gotoxy(10,5);cout<<"\376"<<" No de nuevo... Ya te lo he dicho";
	gotoxy(10,7);cout<<"\376"<<" \xA8Qu\x82 quieres?";
	gotoxy(10,9);cout<<"\376"<<" L\xA0rgate de aqu\xA1.";
	
	int x=7,y=5; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==5) {no_de_nuevo();break;} if (y==7) {que_quieres();break;} if (y==9) {largate_de_aqui();break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=9) y=y+2; else y=5; }
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=5) y=y-2; else y=9; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}	
}

//FUNCIÃ“N SECUNDARIA 

void no_de_nuevo()
{	
	gotoxy(7,3);cout<<"Ad\xA0n, agarra Amelia y v\xA0monos. Ella es";
	gotoxy(7,4);cout<<"nuestro ticket de salida de este lugar.";
	gotoxy(7,5);cout<<"El corredor humanitario del que te ha-";
	gotoxy(7,6);cout<<"bl\xA82."<<"\xAD"<<"Estamos de suerte hermano!,\xAD"<<"ellos ";
	gotoxy(7,7);cout<<"priorizan padres con ni\xA4os!";
	
	gotoxy(10,9);cout<<"Tu hermano espera una respuesta:";
	gotoxy(10,11);cout<<"\376"<<" Ella no es tu ticket, es mi hija.";
	gotoxy(10,12);cout<<" No hay forma de que ella sobreviva";
	gotoxy(10,13);cout<<" ese camino en su condici\xA2n actual.";
	gotoxy(10,14);cout<<" Tendr\xA1"<<"a"<<" que hacer paradas frecuen-";
	gotoxy(10,15);cout<<" tes y cuidar de ella. Nos matar\xA0n";
	gotoxy(10,16);cout<<" antes de que lleguemos a alguna";
	gotoxy(10,17);cout<<" parte.";
	
	gotoxy(53,3);cout<<"\376"<<" \xA8Qu\x82 debemos hacer?";
	
	int x=7,y=11; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==11) {ella_no_es();break;} if (y==3) {que_debemos_hacer();break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=3) {y=3; x=50;} else {y=11;x=7;}}
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=11) {y=11; x=7;} else {y=3; x=50;}}
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
 }
 
//funciones terciarias
void ella_no_es()
{
	gotoxy(7,11);cout<<"   ";
	gotoxy(10,9); cout<<"\376"<<" Ella no es tu ticket, es mi hija.";
	gotoxy(10,10);cout<<"No hay forma de que ella sobreviva";
	gotoxy(10,11);cout<<"ese camino en su condici\xA2n actual.";
	gotoxy(10,12);cout<<"Tendr\xA1"<<"a"<<" que hacer paradas frecuen-";
	gotoxy(10,13);cout<<"tes y cuidar de ella. Nos matar\xA0n ";
	gotoxy(10,14);cout<<"antes de que lleguemos a alguna      ";
	gotoxy(10,15);cout<<"parte.                              ";
	gotoxy(10,16);cout<<"                                   ";
	gotoxy(10,17);cout<<"                            ";
	gotoxy(50,3); cout<<"Siempre pesimista. \xAD"<<"Ella s\xA1 lo va a";
	gotoxy(50,4); cout<<"hacer!Ella es nuestra \xA3nica oportuni-";
	gotoxy(50,5); cout<<"dad de salir de este infierno.";
	gotoxy(50,7); cout<<"Esc\xA3"<<"chate a ti mismo, no puedes";
	gotoxy(50,8); cout<<"arriesgar su vida as\xA1!"; 
	gotoxy(50,10);cout<<"Solo quiero salir de aqu\xA1, \xA8no quieres";
	gotoxy(50,11);cout<<"eso tambi\xA82n para que Amelia est\xA82 ";
	gotoxy(50,12);cout<<"segura? \xADSi est\xA0s asustado puedo ";
	gotoxy(50,13);cout<<"cuidarla yo solo!";
	gotoxy(50,15);cout<<"Esc\xA3"<<"chame cuidadosamente. Si la";
	gotoxy(50,16);cout<<"tocas, te mato. No te quiero ver";
	gotoxy(50,17);cout<<"aqu\xA1 de nuevo";
	continuar_guerra();	
} 

void que_debemos_hacer()
{
	gotoxy(10,9);cout<<"\376"<<" \xA8Qu\x82 debemos hacer?              ";
	gotoxy(10,10);cout<<"                                   ";
	gotoxy(7,11); cout<<"Solo tenemos que llegar a ese lugar de ";
	gotoxy(7,12); cout<<"los extranjeros al otro lado de la    ";
	gotoxy(7,13); cout<<"ciudad, pasando la base militar "<<"\xAD"<<"as\xA1";
	gotoxy(7,14); cout<<"me podr\xA0n sacar de esta guerra!      ";
	gotoxy(7,15); cout<<"                                      ";
	gotoxy(7,16); cout<<"\xA8Y qu\x82 hay de Amelia? \xA8Te est\xA0s escu-"; 
	gotoxy(7,17); cout<<"chando? Ese camino es un suicidio, hay";
	gotoxy(7,18); cout<<"muchos disparos y explosiones por all\xA1.";
	
	gotoxy(50,3); cout<<"Tienes que tener esperanza hermano, no "; 
	gotoxy(50,4); cout<<"quiero quedarme aqu\xA1 y t\xA3 no quieres "; 
	gotoxy(50,5); cout<<"que Amelia siga en medio de todo esto. ";
	
	gotoxy(50,7); cout<<"No, cuando significa que terminemos  ";
	gotoxy(50,8); cout<<"con una bala en nuestra cabeza. No  ";
	gotoxy(50,9); cout<<"hermano, no puedo arriesgarla.";
	
	gotoxy(50,11); cout<<"Si eres incapaz de cuidar de tu hija"; 
	gotoxy(50,12); cout<<"entonces lo har\x82 yo mismo.";
	
	gotoxy(50,14); cout<<"Esc\xA3"<<"chame infeliz, no voy a apostar la";
	gotoxy(50,15); cout<<"vida de mi hija. Mucho menos lo har\xA82";
	gotoxy(50,16); cout<<"por ti. \xADL\xA0rgate de aqu\xA1!";
	continuar_guerra();
	
	
}

//FUNCIÃ“N SECUNDARIA 2
void que_quieres()
{
	
	gotoxy(7,3);cout<<"Sabes a lo que vine, podemos usar a tu";
	gotoxy(7,4);cout<<"hija para salir de este lugar.";
	gotoxy(7,5);cout<<"                                      ";
	gotoxy(7,6);cout<<"Tu hermano espera una respuesta:";
	gotoxy(7,7);cout<<"                       ";
	gotoxy(10,8);cout<<"\376"<<" \xA8"<<"C\xA2mo har\xA1"<<"amos eso?";
	gotoxy(10,9);cout<<"                       ";
	gotoxy(10,10);cout<<"\376"<<" \xA8Qu\x82 tan arriesgado es?";
	gotoxy(10,12);cout<<"\376"<<" \xA8Usar? Mi hija no es algo que ";
	gotoxy(10,13);cout<<"  se usa";
	
	int x=7,y=8; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==8) {como_hariamos();break;} if(y==10) {que_tan_arriesgado();break;} if(y==12) {usar_hija();break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=12) y=y+2; else y=8; }
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=8) y=y-2; else y=12; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
}

//FUNCIONES TERCIARIAS 2

void como_hariamos()
{
	gotoxy(7,6);cout<<"\376"<<" \xA8"<<"C\xA2mo har\xA1mos eso?";
	gotoxy(7,8);cout<<"Mira, tengo un plan. Otros pa\xA1ses hi-"; 
	gotoxy(7,9);cout<<"cieron un corredor humanitario, ellos ";
	gotoxy(7,10);cout<<"est\xA0n sacando a personas con ni\xA4os "; 
	gotoxy(7,11);cout<<"primero, solo hay que llegar all\xA1 y "; 
	gotoxy(7,12);cout<<"nos largamos de este infierno.";
	
	gotoxy(7,14);cout<<"Es una locura, hay una guerra en curso";
	gotoxy(7,15);cout<<"y esos lugares son los m\xA0s peligrosos";
	gotoxy(7,16);cout<<"de la ciudad, moriremos intentando ";
	gotoxy(7,17);cout<<"llegar all\xA1.";
	
	gotoxy(50,3);cout<<"S\xA1 podemos hacerlo. Si no tienes las ";
	gotoxy(50,4);cout<<"agallas puedo llevar a tu hija a un";
	gotoxy(50,5);cout<<"lugar seguro yo solo.";
	
	gotoxy(50,7);cout<<"No te atrevas... ella es mi hija y no "; 
	gotoxy(50,8);cout<<"voy a sacrificarla ni por ti ni por  "; 
	gotoxy(50,9);cout<<"nadie. Vete y no vuelvas a pedirme eso ";
	gotoxy(50,10);cout<<"otra vez.";
	continuar_guerra();
}

void que_tan_arriesgado()
{
	gotoxy(7,6);cout<<"\376"<<" \xA8"<<"Qu\x82 tan arriesgado es?         ";
	gotoxy(7,8);cout<<" Solo tenemos que pasar el mercado y la"; 
	gotoxy(7,9);cout<<" base militar, ellos se acentuaron al ";
	gotoxy(7,10);cout<<" otro lado de la ciudad.             ";
	gotoxy(7,11);cout<<"                         ";
	gotoxy(7,12);cout<<"Amelia apenas puede moverse, \xA8planeas";
	gotoxy(7,13);cout<<"que viajemos con ella por donde hubo ";
	gotoxy(7,14);cout<<"una masacre y por donde est\xA0n los";
	gotoxy(7,15);cout<<"soldados con hambre de sangre? Es una";
	gotoxy(7,16);cout<<"sentencia de muerte para Amelia.";
	
	gotoxy(50,3);cout<<"Vamos, s\xA1 podemos hacerlo. Tenemos una"; 
	gotoxy(50,4);cout<<"oportunidad de salir de este lugar si "; 
	gotoxy(50,5);cout<<"usamos a tu hija.";
	
	gotoxy(50,7);cout<<"No, no voy a hacer algo as\xA1 de peli-";
	gotoxy(50,8);cout<<"groso con mi hija que apenas puede";
	gotoxy(50,9);cout<<"moverse.";
	
	gotoxy(50,11);cout<<"Es mi deber el cuidar a mi sobrina, no";
	gotoxy(50,12);cout<<"voy a quedarme aqu\xA1. Voy a llevarla.";
	
	gotoxy(50,14);cout<<"Toca a mi hija y me vas a conocer... ";
	gotoxy(50,15);cout<<"L\xA0rgate de este lugar que no quiero"; 
	gotoxy(50,16);cout<<"verte nunca m\xA0s.";
	
	continuar_guerra();
 
}
void usar_hija()
{
	gotoxy(7,6);cout<<"\376"<<" \xA8Usar? Mi hija no es algo que se usa. ";
	gotoxy(10,9);cout<<"                           ";
	gotoxy(7,8);cout<<"Vamos Ad\xA0n, sabes a lo que me refiero.";
	gotoxy(7,10);cout<<"Recib\xA1 tu mensaje, quieres que usemos "; 
	gotoxy(7,11);cout<<"a mi hija para salir de aqu\xA1, \xA8no?";
	gotoxy(7,12);cout<<"                                ";
	gotoxy(7,13);cout<<"Ah, entonces me ahorro mi discurso."; 
	gotoxy(7,14);cout<<"\xA8Cu\xA0ndo nos vamos?";
	
	gotoxy(7,16);cout<<"Nunca dije que aceptaba. Ir a ese lu-"; 
	gotoxy(7,17);cout<<"gar cuando mi hija est\xA0 demasiado ";
	gotoxy(7,18);cout<<"enferma para moverse,es muerte segura.";
	
	gotoxy(50,3);cout<<"Hermano, no podemos seguir aqu\xA1 en"; 
	gotoxy(50,4);cout<<"medio de esta guerra. \xA8No quieres"; 
	gotoxy(50,5);cout<<"volver a los tiempos de antes?";
	
	gotoxy(50,7);cout<<"\xA8Y crees que perder la vida de mi hija";
	gotoxy(50,8);cout<<"es algo que puedo aceptar? Le promet\xA1 ";
	gotoxy(50,9);cout<<"a B\xA0rbara que la proteger\xA1"<<"a y no voy a";
	gotoxy(50,10);cout<<"poner a lo que queda de mi familia en";
	gotoxy(50,11);cout<<"este conflicto.";
	
	gotoxy(50,13);cout<<"Est\xA0s siendo un cobarde, si no tienes"; 
	gotoxy(50,14);cout<<"la fuerza para cuidar de ella entonces";
	gotoxy(50,15);cout<<"d\x82jamelo a m\xA1. Vamos a salir de este"; 
	gotoxy(50,16);cout<<"lugar con ella.";
	
	int i,j;
	
	gotoxy(90,21);cout<<"\272";//PARA LAS LINEAS VERTICALES-derecha
	
	gotoxy (90,22);cout<<"\274";//ESQUINA INFERIOR DERECHA
	
	for(i=89;i>75;i--)  //PARA LAS LINEAS HORIZONTALES-abajo
	{
    	gotoxy(i,22);cout<<"\315";
	}
    
	gotoxy (75,22);cout<<"\310";
	gotoxy (75,20);cout<<"\313";
	gotoxy (90,20);cout<<"\271";
	gotoxy(75,21);cout<<"\272";//LINEAS VERTICALES IZQUIERDA
    gotoxy(77,21); cout<<"CONTINUAR >>";
    
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {system("cls");marco_libro();break;}
	if (tecla!=77) continue;
	}
    }
    
	gotoxy(7,3);cout<<"No te perdonare jam\xA0s por lo que aca- ";
	gotoxy(7,4);cout<<"bas de hacer hoy. Vienes a m\xA1, pides  ";
	gotoxy(7,5);cout<<"arriesgar la vida de mi ni\xA4"<<"a para tu  ";
	gotoxy(7,6);cout<<"beneficio y tienes el valor de insul- ";
	gotoxy(7,7);cout<<"tarme. No quiero seguir con esto. ";
	gotoxy(7,8);cout<<"Fuera, vete y no vuelvas a pedir mi ";
	gotoxy(7,9);cout<<"hija como si fuera un pasaporte.";
	continuar_guerra();
	
	
}

void continuar_guerra()
{	
	int i,j;
	
	gotoxy(90,21);cout<<"\272";//PARA LAS LINEAS VERTICALES-derecha
	
	gotoxy (90,22);cout<<"\274";//ESQUINA INFERIOR DERECHA
	
	for(i=89;i>75;i--)  //PARA LAS LINEAS HORIZONTALES-abajo
	{
    	gotoxy(i,22);cout<<"\315";
	}
    
	gotoxy (75,22);cout<<"\310";
	gotoxy (75,20);cout<<"\313";
	gotoxy (90,20);cout<<"\271";
	gotoxy(75,21);cout<<"\272";//LINEAS VERTICALES IZQUIERDA
    gotoxy(77,21); cout<<"CONTINUAR >>";
    
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {system("cls");lectura_6();break;}
	if (tecla!=77) continue;
	}
    }
}

//FUNCIÃ“N SECUNDARIA 3

void largate_de_aqui()
{
	gotoxy(7,7);cout<<"   ";
	gotoxy(7,3);cout<<"Vamos hermano, al menos esc\xA3"<<"chame.";
	gotoxy(7,4);cout<<"                                    ";
	gotoxy(7,5);cout<<"Tu hermano espera una respuesta:     ";
	gotoxy(7,6);cout<<"                       ";
	gotoxy(10,7);cout<<"\376"<<"No tengo nada que escuchar, vete.";
	gotoxy(10,9);cout<<"\376"<<"S\x82 el porqu\x82 viniste, quieres "; 
	gotoxy(10,10);cout<<"arrojar la vida de mi hija a la   ";
	gotoxy(10,11);cout<<"basura y escupir en la tumba de   ";
	gotoxy(10,12);cout<<"B\xA0rbara. No y no. No iremos ";
	gotoxy(10,13);cout<<"al corredor humanitario.";
	
	int x=7,y=7; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==7) {no_tengo_nada();break;} if(y==9) {se_porque_viniste();break;} }
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=9) y=y+2; else y=7; }
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=7) y=y-2; else y=9; }
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
}

//FUNCIONES TERCIARIAS 3

void no_tengo_nada()
{
	gotoxy(7,5);cout<<"\376"<<"No tengo nada que escuchar, vete.";
	gotoxy(7,6);cout<<"                                    ";
	gotoxy(7,7);cout<<"Piensa en tu hija, no podemos";
	gotoxy(7,8);cout<<"quedarnos aqu\xA1. Hay un corredor huma-";
	gotoxy(7,9);cout<<"nitario de los extranjeros, si usamos  ";
	gotoxy(7,10);cout<<"a tu hija podremos salir de aqu\xA1";
	gotoxy(7,11);cout<<"f\xA0"<<"cilmente. Solo hay que llevarla  ";
	gotoxy(7,12);cout<<"all\xA1.                        "; 
	
	gotoxy(7,13);cout<<"\xA8Y crees que hacerla viajar en esta ";
	gotoxy(7,14);cout<<"condici\xA2n es una mejor opci\xA2n? Apenas";
	gotoxy(7,15);cout<<"pude obtener medicina y apenas puede";
	gotoxy(7,16);cout<<"moverse, ser\xA1a matarla con todo lo ";
	gotoxy(7,17);cout<<"que est\xA0 pasando.";
	
	gotoxy(50,3);cout<<"\xA8La vida de Amelia significa tan poco"; 
	gotoxy(50,4);cout<<"para ti? Tenemos una oportunidad de"; 
	gotoxy(50,5);cout<<"dejar todo esto atr\xA0s";
	
	gotoxy(50,7);cout<<"No si significa que Amelia pueda morir,"; 
	gotoxy(50,8);cout<<"el asedio que la ciudad tiene va hacer ";
	gotoxy(50,9);cout<<"trabajo f\xA0cil de nosotros. No quiero  ";
	gotoxy(50,10);cout<<"que todo lo que he sacrificado hasta ";
	gotoxy(50,11);cout<<"ahora se esfume en una posibilidad.";
	
	gotoxy(50,13);cout<<"Entonces yo puedo encargarme de tu";
	gotoxy(50,14);cout<<"hija por m\xA1 mismo.";
	
	gotoxy(50,16);cout<<"No sabes lo que est\xA0s diciendo, si te";
	gotoxy(50,17);cout<<"atreves a hacerle algo a ella te juro"; 
	gotoxy(50,18);cout<<"que te voy a matar. \xAD"<<"Fuera!";
	continuar_guerra();	
	
}

void se_porque_viniste()
{
	gotoxy(7,5);cout<<"\376"<<"S\x82 el porqu\x82 viniste, quieres arrojar "; 
	gotoxy(7,6);cout<<"la vida de mi hija a la basura y escu-";
	gotoxy(7,7);cout<<"pir en la tumba de B\xA0rbara. No y no.  ";
	gotoxy(7,8);cout<<"No iremos al corredor humanitario. ";
	gotoxy(7,9);cout<<"                                        ";
	
	gotoxy(7,10);cout<<"Es algo que debemos hacer, no podemos";
	gotoxy(7,11);cout<<"seguir aqu\xA1. Es una cuesti\xA2n de tiempo";
	gotoxy(7,12);cout<<"hasta que terminemos muertos en el ";
	gotoxy(7,13);cout<<"fuego cruzado.";
	
	gotoxy(7,15);cout<<"Acortar ese poco tiempo es a\xA3n peor."; 
	gotoxy(7,16);cout<<"Ella no merece sufrir, pero abandonar ";
	gotoxy(7,17);cout<<"todo lo que he hecho para que siga  ";
	gotoxy(7,18);cout<<"viva, en un plan est\pido que hiciste ";
	gotoxy(7,19);cout<<"es algo que no har\x82";
			
	gotoxy(50,3);cout<<"Ad\xA0n, entiende. Esta es nuestra \xA3nica";
	gotoxy(50,4);cout<<"chance que tendremos en dios sabe ";
	gotoxy(50,5);cout<<"cu\xA0nto tiempo.";
	
	gotoxy(50,7);cout<<"Pues juro en su nombre que no te quie-";
	gotoxy(50,8);cout<<"ro ver aqu\xA1 de nuevo. No voy a matar a",
	gotoxy(50,9);cout<<"haciendo algo as\xA1 de arriesgado. No ";
	gotoxy(50,10);cout<<"vuelvas, te lo advierto.";
	
	continuar_guerra();
	
	
}

//LECTURA
void lectura_6()
{
	system("cls");
	marco();
	continuar_2();
	gotoxy(7,3);cout<<"Cerr\x82 la puerta con furia.";sleep(1);
	
	gotoxy(7,5); cout<<"El idiota de mi hermano puede matarse solo si quiere, pero no voy a arriegar la ";
	gotoxy(7,6); cout<<"vida de Amelia carg\xA0ndola en medio del campo de batalla. Encontraremos el corre-";
	gotoxy(7,7); cout<<"dor humanitario cuando la pelea acabe. No creo que jam\xA0s haya estado tan furioso";
	gotoxy(7,8); cout<<"por algo en mi vida. Mi hermano planeaba usar a mi hija para escapar el solo. Hay ";
	gotoxy(7,9); cout<<"un l\xA1mite en lo que est\xA0 permitido. \xA8Qu\x82 pensar\xA1"<<"a B\xA0rbara si dejara que se salga";
	gotoxy(7,10);cout<<"con la suya?";sleep(3);
	
	gotoxy(48,11);cout<<"...";
	
	gotoxy(7,13);cout<<"Regreso al cuarto de mi hija, la medicina ha ayudado un poco, pero no lo suficien-";
	gotoxy(7,14);cout<<"te para su recuperaci\xA2n. Sigue d\x82"<<"bil, fr\xA0gil e indefensa frente a las dificulta-";
	gotoxy(7,15);cout<<"des que el destino le ha dejado. Ella es inocente, una flor marchit\xA0ndose en medio";
	gotoxy(7,16);cout<<"de la p\xA2lvora y sangre ajena. \xA8Qu\x82 hicimos para merecer esto? \xA8Qu\x82 valor tienen ";
	gotoxy(7,17);cout<<"nuestras vidas en medio de la guerra?";
	
	
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {system("cls");marco();break;}
	if (tecla!=77) continue;
	}
    }
   
    gotoxy(7,3);cout<<"No es como si nunca hubiera considerado esa idea seriamente. Despu\x82s de todo, si  ";
	gotoxy(7,4);cout<<"Amelia no estuviera aqu\xA1 vivir\xA1"<<"amos una vida relativamente normal. Pero no creo";
	gotoxy(7,5);cout<<"que sea una decisi\xA2n sensata el salir de la ciudad con su condici\xA2n, ella est\xA0 ";
	gotoxy(7,6);cout<<"apenas viva y llega al corredor humanitario es una locura de por s\xA1.";sleep(4);
	
	gotoxy(48,7);cout<<"...";
	
	gotoxy(7,9); cout<<"El corredor humanitario, una zona desmilitarizada para que la gente como yo no se  ";
	gotoxy(7,10);cout<<"vea afectada en medio de toda esta guerra, un lugar donde supuestamente podemos  ";
	gotoxy(7,11);cout<<"salir, pero de refugiados seguramente. En papel, es la salvaci\xA2n en medio de esta  ";
	gotoxy(7,12);cout<<"tierra quemada, llegar hasta all\xA0 no es posible en esta condici\xA2n. Se ha situado ";
	gotoxy(7,13);cout<<"en un lugar que es inaccesible sin poder pasar el mercado Pijaca Markale donde ";
	gotoxy(7,14);cout<<"seg\xA3n los rumores murieron 68 personas por un mortero y cerca de la base militar ";
	gotoxy(7,15);cout<<"del ej\x82rcito los rebeldes transmitan informaci\xA2n han posicionado francotiradores  ";
	gotoxy(7,16);cout<<"para que dispare a que por temor a que cualquier persona que sospechen en las   ";
	gotoxy(7,17);cout<<"noches, incluyendo mujeres y ni\xA4os. Simplemente, arriesgarnos a pasar por all\xA1 es ";
    gotoxy(7,18);cout<<"una locura.";
    
    continuar_2();
	
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {system("cls");marco();break;}
	if (tecla!=77) continue;
	}
    }
    
    gotoxy(7,3); cout<<"Debo proteger a Amelia, ella es todo lo que me queda, es todo lo que me permite ";
    gotoxy(7,4); cout<<"seguir d\xA1"<<"a a d\xA1"<<"a.";
    gotoxy(48,5);cout<<"...";sleep(2);
    
	gotoxy(7,7); cout<<"La furia y estr\x82s nublaron mi mente y anestesiaron las necesidades de mi cuerpo.";
	gotoxy(7,8); cout<<"Mi cuerpo pesa, mis ojos se cierran, el hambre y sed me matan. Me encuentro"; 
	gotoxy(7,9); cout<<"terrible. Debo de cuidar la casa por la noche otra vez... pero... debo...  ";
	gotoxy(7,10); cout<<"descansar... unos segundos...";sleep(3);
	
	gotoxy(48,11);cout<<"...";
	
	gotoxy(7,13);cout<<"Ad\xA0n colapsa al suelo. D\xA1"<<"as cuidando de Amelia sin descanso cobraron su precio.";
	gotoxy(7,14);cout<<"Ad\xA0n se desmaya de agotamiento. Cuando recupera la conciencia se da cuenta de que";
	gotoxy(7,15);cout<<"su cama esta vac\xA1"<<"a. Amelia no se encuentra.";

    continuar_2();
	
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {system("cls");marco();break;}
	if (tecla!=77) continue;
	}
    }
    
    gotoxy(7,3); cout<<"No recuerdo cuando fue la \xA3ltima vez que he dormido en estos d\xA1"<<"as. No puedo ";
	gotoxy(7,4); cout<<"perdonarme por hacerlo. Mi ni\xA4"<<"a ha desaparecido, la cama que abrigaba la luz de";
	gotoxy(7,5); cout<<"mi vida est\xA0 vac\xA1"<<"a. No s\x82 qu\x82 hacer, ella no puedo haberse movido sola en su ";
    gotoxy(7,6); cout<<"condici\xA2n.";sleep(3);
    
    gotoxy(7,8); cout<<"\xAD"<<"Amelia, Amelia! \xAD"<<"\xA8"<<"D\xA2nde est\xA0s?!";
	gotoxy(7,9); cout<<"Miro un lado al otro con las esperanzas de que milagrosamente Amelia se haya ";
	gotoxy(7,10); cout<<"recuperado y que est\x82 al lado m\xA1o; sin embargo, es un intento in\xA3til en la  ";
	gotoxy(7,11); cout<<"desesperaci\xA2n que siento.";sleep(3);
	
	gotoxy(7,13); cout<<"Deb\xA1 de haberme desmayado del cansancio... \xA8Qu\x82 pas\xA2 aqu\xA1?";
	gotoxy(7,15); cout<<"No tom\xA2 hacer muchas hip\xA2tesis para saber lo que debi\xA2 haber pasado, el maldito ";
	gotoxy(7,16); cout<<"de mi hermano se la ha llevado a mi hija.";

	continuar_2();
	
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {system("cls");marco();break;}
	if (tecla!=77) continue;
	}
    }
    
    gotoxy(7,3); cout<<"Mi hermano debi\xA2 haberla llevado, \xAD"<<"Lo matar\x82!";
	gotoxy(7,5); cout<<"La rabia que nubla mi mente y envenena mis palabras no es nada frente al dolor ";
	gotoxy(7,6); cout<<"que siento por haber perdido a mi hija, siempre intent\x82 parecer fuerte para ";
	gotoxy(7,7); cout<<"que mi hija no se deprima a\xA3n m\xA0s, pero no puedo aguantarlo m\xA0s.";
	gotoxy(7,9); cout<<"L\xA0grimas de frustraci\xA2n, furia y miedo caen de mi cara como si no hubiera fin. ";
	gotoxy(7,10); cout<<"He perdido a mi hija y fue por culpa m\xA1"<<"a. Soy un hombre in\xA3til que no pudo ";
	gotoxy(7,11); cout<<"defender lo \xA3nico que ten\xA1"<<"a en medio de esta guerra infernal. Me siento ";
	gotoxy(7,12); cout<<"como la peor escoria del planeta, por no haber podido hacer algo.";sleep(5);
	
	gotoxy(48,13);cout<<"...";
	
	gotoxy(7,15); cout<<"\xA8"<<"D\xA2nde est\xA0 Amelia? No puedo recordar nada de la noche anterior. \xA8Se habr\xA0 ido a ";
	gotoxy(7,16); cout<<"alguna parte sola? \xAD"<<"Alguien...se la ha llevado? \xADNo puedo seguir aqu\xA1, debo ";
	gotoxy(7,17); cout<<"encontrarla!";

    continuar_2();
	
    while (true){
	if (getch())
	{
	char tecla =getch();
	if (tecla==77) {tu_hija_desaparecida();break;}
	if (tecla!=77) continue;
	}
    }
     
    
}


void continuar_2()
{
	int i,j;
	
	gotoxy(90,21);cout<<"\272";gotoxy(90,20);cout<<"\272";//PARA LAS LINEAS VERTICALES-derecha
	
	gotoxy (90,22);cout<<"\274";//ESQUINA INFERIOR DERECHA
	
	for(i=89;i>75;i--)  //PARA LAS LINEAS HORIZONTALES-abajo
	{
    	gotoxy(i,22);cout<<"\315";
	}
    
	gotoxy (75,22);cout<<"\310";
	
	gotoxy(75,21);cout<<"\272";//LINEAS VERTICALES IZQUIERDA
    gotoxy(77,21); cout<<"CONTINUAR >>";
}


void tu_hija_desaparecida()
{
	system("cls");
	marco_libro();
	gotoxy(7,3); cout<<"Tu hija ha desaparecido";
	
	gotoxy(7,5); cout<<"\xA8 A d\xA2nde debo ir?";
	gotoxy(10,7); cout<<"\376 "<<"Segundo piso.";
	gotoxy(10,9); cout<<"\376 "<<"Tercer piso.";
	gotoxy(10,11); cout<<"\376 "<<"S\xA2tano.";
	gotoxy(10,13); cout<<"\376 "<<"Primer piso.";
	
	int x=7,y=7; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==7) {segundo_piso_L6();break;} if (y==9) {tercer_piso_L6();break;} if(y==11){sotano_L6();break;} 
			 if(y==13){primer_piso_L6();break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=13) {y=y+2; } else {y=7;}}
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=7) {y=y-2; } else {y=13;}}
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
	
}

void segundo_piso_L6()
{
	system("cls");
	marco_libro();
	int op;
	gotoxy(7,3); cout<<"Est\xA0s en el segundo piso. ";
	
	gotoxy(9,5); cout<<"\xA8"<<"Qu\x82 hago?";
	
	gotoxy(10,7); cout<<"\376 "<<"Dibujo de Amelia.";
	gotoxy(10,9); cout<<"\376 "<<"Carta en el suelo.";
	gotoxy(10,11); cout<<"\376 "<<"Cama de Amelia.";
	gotoxy(10,13); cout<<"\376 "<<"Observar el cuarto.";
	gotoxy(10,15); cout<<"\376 "<<"Subir al tercer piso.";
	gotoxy(10,17); cout<<"\376 "<<"Bajar al primer piso.";
	
	int x=7,y=7; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==7) {op=1;break;} if (y==9) {op=2;break;} if(y==11){op=3;break;} 
			 if(y==13){op=4;break;}if(y==15){op=5;break;}if(y==17){op=6;break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=17) {y=y+2; } else {y=7;}}
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=7) {y=y-2; } else {y=17;}}
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
	switch(op)
	{
		case 1:{gotoxy(7,5); cout<<"\376 "<<"Dibujo de Amelia.         ";
				gotoxy(7,7); cout<<"El dibujo que Amelia hab\xA1"<<"a hecho est\xA0";
				gotoxy(7,8); cout<<"en el suelo.";
				gotoxy(7,10); cout<<"Mi ni\xA4"<<"a... \xA8"<<"D\xA2nde te encuentras?";
				gotoxy(10,15); cout<<"                             ";
				gotoxy(10,13); cout<<"                             ";
				gotoxy(10,9); cout<<"                             ";
				gotoxy(10,11); cout<<"                             ";
				gotoxy(10,17); cout<<"                             ";
				gotoxy(6,12); system("pause");segundo_piso_L6();
				break;
		}
		case 2:{gotoxy(7,5); cout<<"\376 "<<"Carta en el suelo.         ";
				gotoxy(7,7); cout<<"Carta que mi hermano escribi\xA2, muestra";
				gotoxy(7,8); cout<<"de su traici\xA2n.";
				gotoxy(7,9); cout<<"                             ";
				gotoxy(7,11); cout<<"                             ";
				gotoxy(7,10); cout<<"No puedo creer lo que ha hecho, juro";
				gotoxy(7,11); cout<<"por B\xA0rbara que no descansar\x82 hasta ";
				gotoxy(7,12); cout<<"que pague por lo que hizo.          ";
				gotoxy(7,15); cout<<"                             ";
				gotoxy(7,17); cout<<"                             ";
				gotoxy(7,13); cout<<"                             ";
				gotoxy(6,14); system("pause");segundo_piso_L6();
				break;			
		}
		
		case 3:{gotoxy(7,5); cout<<"\376 "<<"Cama de Amelia       ";
				gotoxy(7,17); cout<<"                             ";
				gotoxy(7,7); cout<<"No tiene signos de pelea, conflicto u ";
				gotoxy(7,10); cout<<"oposici\xA2n.";
				gotoxy(7,9); cout<<"Amelia conoc\xA1"<<"a a quien se la llev\xA2.";
				gotoxy(7,11); cout<<"                       ";
				gotoxy(7,15); cout<<"                             ";
				gotoxy(7,17); cout<<"                             ";
				gotoxy(6,13); system("pause");segundo_piso_L6();
				break;			
		}
		
		case 4:{gotoxy(7,5); cout<<"\376 "<<"Observar el cuarto.";
				gotoxy(7,7); cout<<"Me desmay\x82 de cansancio al lado";
				gotoxy(7,8); cout<<"de ella, pero no pude sentir nada.";
				gotoxy(7,10); cout<<"No hay ratros en el suelo que me ";
				gotoxy(7,11); cout<<"puedan ayudar.      ";
				gotoxy(7,9); cout<<"                             ";
				gotoxy(7,12); cout<<"                             ";
				gotoxy(7,14); cout<<"                             ";
				gotoxy(7,15); cout<<"                             ";
				gotoxy(7,17); cout<<"                             ";
				gotoxy(6,13); system("pause");segundo_piso_L6();
				break;			
		}
		
		case 5: {tercer_piso_L6();
			break;
		}
		
		case 6: {primer_piso_L6();
			break;
		}
		
		
	}	
	
}

void primer_piso_L6()
{
	system("cls");
	marco_libro();
	int op;
	gotoxy(7,3); cout<<"Est\xA0s en el primer piso. ";
	
	gotoxy(9,5); cout<<"\xA8"<<"Qu\x82 hago?";
	
	gotoxy(10,7); cout<<"\376 "<<"Bajar al s\xA2tano.";
	gotoxy(10,9); cout<<"\376 "<<"Subir al segundo piso.";
	gotoxy(10,11); cout<<"\376 "<<"Observar cuarto.";
	gotoxy(10,13); cout<<"\376 "<<"Revisar los escombros.";
	gotoxy(10,15); cout<<"\376 "<<"Analizar la puerta.";
		
	int x=7,y=7; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==7) {op=1;break;} if (y==9) {op=2;break;} if(y==11){op=3;break;} 
			 if(y==13){op=4;break;}if(y==15){op=5;break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=15) {y=y+2; } else {y=7;}}
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=7) {y=y-2; } else {y=15;}}
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
	switch(op)
	{
		case 1:{sotano_L6();
				break;
		}
		case 2:{segundo_piso_L6();
				break;			
		}
		
		case 3:{gotoxy(7,5); cout<<"\376 "<<"Observar cuarto      ";
				gotoxy(7,7); cout<<"Si tan solo hubiera podido vigilar la ";
				gotoxy(7,8); cout<<"noche igual que como hice antes. No  ";
				gotoxy(7,9); cout<<"puedo perdonarme por abandonar a mi ";
				gotoxy(7,10); cout<<"hija as\xA1, es mi culpa de que ella no ";
				gotoxy(7,11); cout<<"est\x82 conmigo.                          ";
				gotoxy(7,15); cout<<"                             ";
				gotoxy(6,13); system("pause");primer_piso_L6();
				break;			
		}
		
		case 4:{proximamente();
				break;			
		}
		
		case 5: {gotoxy(7,5); cout<<"\376 "<<"Analizar puerta      ";
				gotoxy(7,7); cout<<"Forzada, el cerrojo est\xA0 in\xA3til por";
				gotoxy(7,8); cout<<"ahora. Entraron de forma no sigilosa, ";
				gotoxy(7,9); cout<<"pero a\xA3n as\xA1 no pude recuperar la ";
				gotoxy(7,10); cout<<"conciencia.";
				gotoxy(7,13); cout<<"                             ";
				gotoxy(7,11); cout<<"                             ";
				gotoxy(7,15); cout<<"                             ";
				gotoxy(6,12); system("pause");primer_piso_L6();
				break;
		}
		
		
		
	}
}

void tercer_piso_L6()
{
	system("cls");
	marco_libro();
	int op;
	gotoxy(7,3); cout<<"Est\xA0s en el tercer piso. ";
	
	gotoxy(9,5); cout<<"\xA8"<<"Qu\x82 hago?";
	
	gotoxy(10,7); cout<<"\376 "<<"Bajar al segundo piso.";
	gotoxy(10,9); cout<<"\376 "<<"Observar el cuarto.";
	gotoxy(10,11); cout<<"\376 "<<"Trapos en el suelo.";
	gotoxy(10,13); cout<<"\376 "<<"Muro ca\xA1"<<"do.";
		
	int x=7,y=7; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==7) {op=1;break;} if (y==9) {op=2;break;} if(y==11){op=3;break;} 
			 if(y==13){op=4;break;}}
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=13) {y=y+2; } else {y=7;}}
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=7) {y=y-2; } else {y=13;}}
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
	switch(op)
	{
		case 1:{segundo_piso_L6();
				break;
		}
		case 2:{gotoxy(7,5); cout<<"\376 "<<"Observar el cuarto.         ";
				gotoxy(7,7); cout<<"No hay nada de importancia en este ";
				gotoxy(7,8); cout<<"lugar, salvo los v\xA1vidos recuerdos";
				gotoxy(7,9); cout<<"de nuestra casa anterior.             ";
				gotoxy(7,13); cout<<"                             ";
				gotoxy(6,11); system("pause");tercer_piso_L6();
				break;			
		}
		
		case 3:{gotoxy(7,5); cout<<"\376 "<<"Trapos en el suelo.     ";
				gotoxy(7,7); cout<<"No pod\xA1"<<"a dormir, dejar la casa";
				gotoxy(7,8); cout<<"vulnerable en medio de la noche ser\xA1"<<"a";
				gotoxy(7,9); cout<<"muy peligroso. Si tan solo hubiera";
				gotoxy(7,10); cout<<"resistido un para de d\xA1"<<"as m\xA0s sin";
				gotoxy(7,11); cout<<"dormir, mi hija seguir\xA1"<<"a conmigo.";
				gotoxy(6,13); system("pause");tercer_piso_L6();
				break;			
		}
		
		case 4:{gotoxy(7,5); cout<<"\376 "<<"Muro ca\xA1"<<"do.  ";
				gotoxy(7,7); cout<<"La vista a nuestra casa anterior sigue";
				gotoxy(7,8); cout<<"intacta, las memorias se mantienen ";
				gotoxy(7,9); cout<<"pero hay un riesgo de que lo pierda";
				gotoxy(7,10); cout<<"todo si no la encuentro.";
				gotoxy(7,11); cout<<"                            ";
				gotoxy(7,12); cout<<"B\xA0rbara, si me estas escuchando quiero";
				gotoxy(7,13); cout<<"que nos cuides desde el otro lado. No ";
				gotoxy(7,14); cout<<"s\x82 d\xA2nde est\xA0 nuestra peque\xA4"<<"a y tengo";
				gotoxy(7,15); cout<<"terror de que algo le est\x82 sucediendo ";
				gotoxy(7,16); cout<<"en este momento. Te prometo que la";
				gotoxy(7,17); cout<<"encontrar\x82.";
				gotoxy(6,19); system("pause");tercer_piso_L6();
				break;			
		}		
		
	}	
	
}

void sotano_L6()
{
	system("cls");
	marco_libro();
	int op;
	gotoxy(7,3); cout<<"Est\xA0s en el s\xA2tano. ";
	
	gotoxy(9,5); cout<<"\xA8"<<"Qu\x82 hago?";
	
	gotoxy(10,7); cout<<"\376 "<<"Revisar la radio.";
	gotoxy(10,9); cout<<"\376 "<<"Observar el cuarto.";
	gotoxy(10,11); cout<<"\376 "<<"Subir al primer piso.";
			
	int x=7,y=7; gotoxy(x,y);cout<<"->";
    while(true){
    	if (getch()){
		char tecla=getch();
		     if (tecla==77){ if(y==7) {op=1;break;} if (y==9) {op=2;break;} if(y==11){op=3;break;} }
			 if (tecla==80){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=11) {y=y+2; } else {y=7;}}
			 if (tecla==72){ Beep(100,100);gotoxy(x,y);cout<<"  "; if (y!=7) {y=y-2; } else {y=11;}}
			 if (tecla!=80&&tecla!=72&&tecla!=77) continue;
			 gotoxy(x,y);cout<<"->"; 
		     
	    }
	}
	
	switch(op)
	{
		case 1:{gotoxy(7,5); cout<<"\376 "<<"Revisar la radio.        ";
				gotoxy(7,7); cout<<"\xA8"<<"A qui\x82n pedir ayuda? \xA8"<<"En qui\x82n puedo ";
				gotoxy(7,8); cout<<"confiar para cuidar de mi hija ";
				gotoxy(7,9); cout<<"aparte de mi mismo?";
				gotoxy(6,11); system("pause");sotano_L6();
				break;			
		}
		case 2:{gotoxy(7,5); cout<<"\376 "<<"Observar el cuarto.         ";
				gotoxy(7,7); cout<<"Amelia sol\xA1"<<"a jugar por aqu\xA1 antes de";
				gotoxy(7,8); cout<<"que su enfermedad empeorara, ruego que";
				gotoxy(7,9); cout<<"vuelva a verla sana y salva.         ";
				gotoxy(6,11); system("pause");sotano_L6();
				break;			
		}
		
		case 3:{primer_piso_L6();
				break;			
		}	
		
	}
}

void proximamente()
{
	system("cls");
	marco();
	int x=6,y=7;
	gotoxy(x,y);cout<<"   ___   __     ___ __  __  _____            _              __      __  _____    __";y++;     
	gotoxy(x,y);cout<<"  / _ \\ /__\\   /___\\\\ \\/ /  \\_   \\  /\\/\\    /_\\    /\\/\\    /__\\  /\\ \\ \\/__   \\  /__\\";y++;     
	gotoxy(x,y);cout<<" / /_)// \\//  //  // \\  /    / /\\/ /    \\  //_\\\\  /    \\  /_\\   /  \\/ /  / /\\/ /_\\";y++;   
	gotoxy(x,y);cout<<"/ ___// _  \\ / \\_//  /  \\ /\\/ /_  / /\\/\\ \\/  _  \\/ /\\/\\ \\//__  / /\\  /  / /   //__";y++;  
	gotoxy(x,y);cout<<"\\/    \\/ \\_/ \\___/  /_/\\_\\\\____/  \\/    \\/\\_/ \\_/\\/    \\/\\__/  \\_\\ \\/   \\/    \\__/ "; 

	x=42,y=13;	
	gotoxy(x,y);cout<<" _  _  _ ";y++;
	gotoxy(x,y);cout<<"(_)(_)(_)";y++;
    
	x=23;y=5;                                                                                             
	gotoxy(x,y);cout<<" _";y++;
	gotoxy(x,y);cout<<"|/";y++;
	
	gotoxy(22,19);cout<<"Presione una tecla para regresar al men\xA3.";system("pause > nul");
	
}




