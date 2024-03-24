Array.prototype.max = function () {
    if (this.length === 0) return 'Array has no elements';
    let max = this[0];
    for (let i = 1; i < this.length; i++) {
        if (this[i] > max) max = this[i];
    }
    return max;
}

Array.prototype.min = function () {
    if (this.length === 0) return 'Array has no elements';
    let min = this[0];
    for (let i = 1; i < this.length; i++) {
        if (this[i] < min) min = this[i];
    }
    return min;
}

Array.prototype.avg = function () {
    if (this.length === 0) return 'Array has no elements';
    let avg = 0;
    for (const element of this) {
        avg += element;
    }
    return avg / this.length;
}

Array.prototype.sum = function () {
    if (this.length === 0) return 'Array has no elements';
    let sum = 0;
    for (const element of this) {
        sum += element;
    }
    return sum;
}