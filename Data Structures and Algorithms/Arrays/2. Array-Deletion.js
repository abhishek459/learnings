Array.prototype.customDelete = function (index) {
    if (index >= this.length || index < 0) throw 'Index out of bounds';
    for (let i = index; i < this.length - 1; i++) {
        this[i] = this[i + 1];
    }
    this.length--; // Remove space for removed element
    return this;
}