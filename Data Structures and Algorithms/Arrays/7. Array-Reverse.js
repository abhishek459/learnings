Array.prototype.myReverse = function () {
    let i = 0;
    let j = this.length - 1;

    while (i < j) {
        const temp = this[i];
        this[i] = this[j];
        this[j] = temp;
        i++;
        j--;
    }

    return this;
}