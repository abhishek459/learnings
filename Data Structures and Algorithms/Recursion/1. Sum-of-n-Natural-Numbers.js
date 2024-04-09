// Below function is a recursive function that calculates sum of n numbers where n is provided by the user.
function sum(number) {
    if (number === 0) return 0;
    return number + sum(number - 1);
}

// Below function calculates sum of n numbers in the fastest way possible
function sumFast(number) {
    return number * (number + 1) / 2;
}