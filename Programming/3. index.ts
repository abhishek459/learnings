// Declarations
let myName: string = 'Abhishek';
let myName2 = 'Abhishek';
let myNumber = 10_00_000;

// Any type of variable
let anyVariable;
anyVariable = 'a';
anyVariable = 10;

// Arrays
let numbers = [1, 2, '3'];
let properNumbers: number[] = [1, 2, 3];

// Tuples
let user: [number, string] = [1, 'Abhishek'];

// Enums
const enum ScreenSize { Small, Medium, Large }
let myScreenSize = ScreenSize.Medium;

// Functions
function calculateTax(income: number, taxYear = 2022): number {
    if (taxYear < 2024) {
        return income * 0.9;
    } else {
        return income * 0.8;
    }
}

// Objects
let employee: {
    readonly id: number,
    name: string,
    mobile?: number,
    retire: (date: Date) => void,
} = {
    id: 1, 
    name: 'Abhishek', 
    retire: (date: Date) => {
        console.log(date.getDate());        
    }
};

// Type alias
type Employee = {
    readonly id: number,
    name: string,
    mobile?: number,
    retire: (date: Date) => void,   
}

let employee2: Employee = {
    id: 1, 
    name: 'Abhishek', 
    retire: (date: Date) => {
        console.log(date.getDate());        
    }
}

// Union
function kgsToLbs(weight: number | string): number {
    console.log(weight); 
    // Narrowing
    if (typeof weight === 'number') {
        return weight * 2.2;
    } else {
        return parseInt(weight) * 2.2;
    }
}

kgsToLbs(10);
kgsToLbs('10');

// Intersection
type Draggable = {
    drag: () => void
}

type Resizable = {
    resize: () => void
}

type UIWidget = Draggable & Resizable;

let textBox: UIWidget = {
    drag: () => {},
    resize: () => {},
}

// Literal
let quantity: 50 | 100 = 50; // instead of number, this variable can only be set to 50 or 100!

type Quantity = 50 | 100;
let quantity2: Quantity = 100;

type Metric = 'cm' | 'in';
let metric: Metric = 'in';

function greet(name: string | null | undefined) {
    if (name)
        console.log(name);
    else
        console.log('Hola!');
}

greet(null);

type Customer = {
    birthday?: Date
};

function getCustomer(id: number): Customer | null {
    return id === 0 ? null : {birthday: new Date()};
}

let customer = getCustomer(1);
console.log(customer?.birthday?.getFullYear())