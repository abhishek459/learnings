"use strict";
// Declarations
let myName = 'Abhishek';
let myName2 = 'Abhishek';
let myNumber = 10_00_000;
// Any type of variable
let anyVariable;
anyVariable = 'a';
anyVariable = 10;
// Arrays
let numbers = [1, 2, '3'];
let properNumbers = [1, 2, 3];
// Tuples
let user = [1, 'Abhishek'];
let myScreenSize = 1 /* ScreenSize.Medium */;
// Functions
function calculateTax(income, taxYear = 2022) {
    if (taxYear < 2024) {
        return income * 0.9;
    }
    else {
        return income * 0.8;
    }
}
// Objects
let employee = {
    id: 1,
    name: 'Abhishek',
    retire: (date) => {
        console.log(date.getDate());
    }
};
let employee2 = {
    id: 1,
    name: 'Abhishek',
    retire: (date) => {
        console.log(date.getDate());
    }
};
// Union
function kgsToLbs(weight) {
    console.log(weight);
    // Narrowing
    if (typeof weight === 'number') {
        return weight * 2.2;
    }
    else {
        return parseInt(weight) * 2.2;
    }
}
kgsToLbs(10);
kgsToLbs('10');
let textBox = {
    drag: () => { },
    resize: () => { },
};
// Literal
let quantity = 50; // instead of number, this variable can only be set to 50 or 100!
let quantity2 = 100;
let metric = 'in';
function greet(name) {
    if (name)
        console.log(name);
    else
        console.log('Hola!');
}
greet(null);
function getCustomer(id) {
    return id === 0 ? null : { birthday: new Date() };
}
let customer = getCustomer(1);
console.log(customer?.birthday?.getFullYear());
//# sourceMappingURL=3.%20index.js.map