Proceso DiaDeLaSemana
	Definir num Como Entero;
	Definir diaTexto Como Cadena;
	Escribir 'Ingrese un n�mero del 1 al 7:';
	Leer num;
	Segun num Hacer
		1:
			diaTexto <- 'Domingo';
		2:
			diaTexto <- 'Lunes';
		3:
			diaTexto <- 'Martes';
		4:
			diaTexto <- 'Mi�rcoles';
		5:
			diaTexto <- 'Jueves';
		6:
			diaTexto <- 'Viernes';
		7:
			diaTexto <- 'S�bado';
		De Otro Modo:
			diaComoTexto <- 'N�mero inv�lido';
	FinSegun
	Si num>=1 Y num<=7 Entonces
		Escribir 'El d�a correspondiente al n�mero ', num, ' es ', diaTexto;
	SiNo
		Escribir diaTexto;
	FinSi
FinProceso
