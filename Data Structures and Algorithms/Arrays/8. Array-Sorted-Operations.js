Array.prototype.insert = function (element) {
    this.length += 1;
    for (let i = this.length - 1; i > 0; i--) {
        if (element > this[i - 1]) {
            this[i] = element;
            return this;
        } else {
            this[i] = this[i - 1];
        }
    }
    return this;
};

Array.prototype.isSorted = function () {
    for (let i = 0; i < this.length; i++) {
        if (this[i] > this[i + 1]) {
            return false;
        }
    }
    return true;
};