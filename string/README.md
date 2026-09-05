# Rodrigo Anchieta Prates

# 43. Multiply Strings

Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"

Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"

 

Constraints:

    1 <= num1.length, num2.length <= 200
    num1 and num2 consist of digits only.
    Both num1 and num2 do not contain any leading zero, except the number 0 itself.


Casos testados com sucesso: 0


No meu Código de Aula

O que eu fiz que funciona: 

Vetor para acumular os dígitos
Entendi a ideia das 2 strings irem da direita para esquerda
Entendi que no final o resultado tinha que virar string com malloc
E consegui desenvolver um loop decente

O que eu fiz que nao funciona:

Errei nas cópias das strings
Fiz returns que estragavam um loop inteiro
Comecei o for com i = 0, ou seja, ja tava fora da string de comecar na direita e terminar na esquerda
Nao transformei o caractere em digito direito
O meu unsigned c eu nao dei valor, porque na hora deu branco e tava nervoso ja com pouco tempo sobrando
Minha soma nao funciona o vai um da multiplicacao
O malloc do final usava o int valor como se fosse texto

