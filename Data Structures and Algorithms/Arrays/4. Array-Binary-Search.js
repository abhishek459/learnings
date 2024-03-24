Array.prototype.binarySearch = function (element) {
    let low = 0;
    let high = this.length - 1;

    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        if (this[mid] === element) {
            return mid;
        } else if (element < this[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}