function findPower(number, power) {
    if (power === 0) return 1;
    return number * findPower(number, power - 1);
}

// Below function achieves the same functionality but much faster.
// 2^8 = (2*2)^4 which is 4*4*4*4, faster than 2*2*2*2*2*2*2*2
// Similarly 2^9 is just 2 * (2*2)^4.
function findPowerFaster(number, power) {
    if (power === 0) return 1;
    if (power % 2 === 0) {
        return findPowerFaster(number * number, power / 2);
    } else {
        return number * findPowerFaster(number * number, (power - 1) / 2);
    }
}