function findPower(number, power) {
    if (power === 0) return 1;
    return number * findPower(number, power - 1);
}