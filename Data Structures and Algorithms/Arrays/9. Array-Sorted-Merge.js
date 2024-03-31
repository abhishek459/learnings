function sortedMerge(array1, array2) {
    if (!Array.isArray(array1) || !Array.isArray(array2)) throw 'Please provide 2 Arrays as arguments to this function';
    const mergedArray = new Array(array1.length + array2.length);
    let i = 0, j = 0, k = 0;
    while (i < array1.length && j < array2.length) {
        if (array1[i] < array2[j]) {
            mergedArray[k] = array1[i];
            i++;
        } else {
            mergedArray[k] = array2[j];
            j++;
        }
        k++;
    }
    for (; i < array1.length; i++) {
        mergedArray[k++] = array1[i];
    }

    for (; j < array2.length; j++) {
        mergedArray[k++] = array2[j];
    }

    return mergedArray;
}