Proceso horaDia
	Definir hora Como Real;
	Escribir 'Indique la hora del dia';
	Leer hora;
	Si hora<=6 Y hora>=18 Entonces
		Escribir 'Es de dia';
	SiNo
		Escribir 'Es de noche';
	FinSi
	Si hora>24 Entonces
		Escribir 'Operacion no valida';
	FinSi
FinProceso
