Array.prototype.get = function (index) {
    if (index < 0 || index >= this.length) return 'Index out of bounds';
    return this[index];
}

Array.prototype.set = function (index, element) {
    if (index < 0 || index >= this.length) return 'Index out of bounds';
    this[index] = element;
    return this;
}