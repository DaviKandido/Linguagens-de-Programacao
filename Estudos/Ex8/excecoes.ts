
// Este exemplo brinca com a tipagem do typscript, 
// ao mesmo tempo que demonstra o seu poder no tratamento de exceções

// Exemplo de código calcula a divisão de dois números, mas apenas se ambos forem pares.
// Se algum dos números não for definido, ou se a divisão por zero for tentada, uma exceção é lançada.
// Se os números não forem pares, uma mensagem de erro é exibida e o usuário é solicitado a informar novos números.
// Se a divisão for bem-sucedida, o resultado é impresso no console.

// Saidas do programa:
// Numeros informados não são pares, informe novamente:
// Não foi possivel executar a divisão: Divisão por zero
// Resultado da divisao: 5


main(undefined, undefined);

function calcularDivisaoDePares(x: number | undefined, y: number| undefined): number | boolean{

    if (x === undefined || y === undefined) {
        throw new Error("x ou y não foram definidos");
    }

    if (y === 0) {
        throw new Error("Divisão por zero");
    }

    if (x % 2 !== 0 || y % 2 !== 0) {
        return false;
    }

    return x / y;
}


function main(x?: number, y?: number){
    try{
    
        if(x === undefined || y === undefined ){
            var x: number | undefined = 10
            var y:number | undefined = 3
        }

        const result: number | boolean = calcularDivisaoDePares(x,y);

        if(typeof result === "number")
            console.log(`Resultado da divisao: ${result}`)
        else{
            console.error(`Numeros informados não são pares, informe novamente: `)
                 x = 10
                 y = 0
            main(x,y);
        }

        x = 10
        y = 2
        if(result === false)
            main(x,y);
    
    }catch(error: any){
        console.error(`Não foi possivel executar a divisão: ${error.message}`);
    }

}