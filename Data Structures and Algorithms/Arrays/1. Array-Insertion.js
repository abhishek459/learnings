Array.prototype.insertAt = function (index, element) {
    if (index >= this.length || index < 0) throw 'Index out of bounds';
    this.length = this.length + 1; // Make space for new element
    for (let i = this.length - 1; i > index; i--) {
        this[i] = this[i - 1];
    }
    this[index] = element;
    return this;
}