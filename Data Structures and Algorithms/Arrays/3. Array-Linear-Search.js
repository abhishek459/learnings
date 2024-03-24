// Linear Search with Transposition disabled
Array.prototype.linearSearch = function (element) {
    for (let i = 0; i < this.length; i++) {
        if (this[i] === element) {
            // if (i > 0) {
            //     let temp = this[i - 1];
            //     this[i - 1] = this[i];
            //     this[i] = temp;
            //     return i - 1;
            // } else {
            return i;
            // }
        }
    }

    return `Couldn't find ${element}`;
}