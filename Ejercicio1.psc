Proceso CalcularBeca
	definir NotaEstudiante Como Entero;
	
	Escribir "Indique la nota del estudiante";
	Leer NotaEstudiante;
	
	Si NotaEstudiante >= 95 Entonces
		Escribir "El estudiante tiene la nota suficiente para aplicar a una beca";
	SiNo
		Escribir "El estudiante no puede recibir una beca";
	FinSi
	
FinProceso
