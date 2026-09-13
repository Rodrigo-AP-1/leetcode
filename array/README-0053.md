# Rodrigo Anchieta Prates

# 53. Maximum Subarray

Given an integer array nums, find the subarray with the largest sum, and return its sum.

A subarray is a contiguous non-empty sequence of elements within an array.


Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:

Input: nums = [1]
Output: 1

Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23


Constraints:

    1 <= nums.length <= 10^5
    -10^4 <= nums[i] <= 10^4


Casos testados com sucesso no codigo da aula: 4/10


No meu Codigo de Aula

O que eu fiz que funciona:

Entendi que eu precisava percorrer o array e ir somando os valores
Entendi que precisava cuidar quando todos os numeros fossem negativos
Criei uma variavel para a soma e outra para tentar guardar o melhor negativo
Mantive o cabecalho da funcao que o LeetCode pede

O que eu fiz que nao funciona:

Faltou fechar o parenteses do primeiro for e o codigo nao compilou
As chaves ficaram incompletas
Comecei melhorsoma e melhornegativo em 0, mas 0 nao pode ser a resposta se todos os numeros forem negativos
No comentario eu queria testar se tinha numero positivo, mas 0 > nums[i] testa se ele eh negativo
Usei nums[i++] dentro da comparacao e acabei alterando o i no lugar errado
Criei melhornegativo mas nao retornei ele
Eu reiniciava a soma sempre que aparecia um negativo, mas um negativo ainda pode fazer parte da melhor subarray
Eu nao guardei separado a soma atual e a melhor soma de todas


