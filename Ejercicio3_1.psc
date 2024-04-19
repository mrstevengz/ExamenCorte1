Algoritmo Ejercicio3_1
	Definir nota1, nota2, nota3, nota4, nota5, promedio, suma Como Real
	Escribir 'ingrese una nota: '
	Leer nota1
	Escribir 'ingrese la nota 2:'
	Leer nota2
	Escribir 'ingrese la nota 3:'
	Leer nota3
	Escribir 'ingrese la nota 4:'
	Leer nota4
	Escribir 'ingrese la nota 5:'
	Leer nota5
	suma <- nota1+nota2+nota3+nota4+nota5
	promedio <- suma/5
	Escribir 'Su promedio es: ', promedio
	Si promedio>=85 Entonces
		Escribir 'FELICIDADES!!'
	SiNo
		Escribir 'Animo, continue esforzandose'
	FinSi
FinAlgoritmo
