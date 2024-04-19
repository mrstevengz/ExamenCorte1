Proceso DiaDeLaSemana
	Definir num Como Entero;
	Definir diaTexto Como Cadena;
	Escribir 'Ingrese un número del 1 al 7:';
	Leer num;
	Segun num Hacer
		1:
			diaTexto <- 'Domingo';
		2:
			diaTexto <- 'Lunes';
		3:
			diaTexto <- 'Martes';
		4:
			diaTexto <- 'Miércoles';
		5:
			diaTexto <- 'Jueves';
		6:
			diaTexto <- 'Viernes';
		7:
			diaTexto <- 'Sábado';
		De Otro Modo:
			diaComoTexto <- 'Número inválido';
	FinSegun
	Si num>=1 Y num<=7 Entonces
		Escribir 'El día correspondiente al número ', num, ' es ', diaTexto;
	SiNo
		Escribir diaTexto;
	FinSi
FinProceso
