let x = 10;

function g() {
    let x = 20; 
    console.log("Dentro de g, antes de chamar f:");
    f();
}

function f() {
    console.log(`Valor de x dentro de f: ${x}`);
}

console.log("Executando g():");
g();