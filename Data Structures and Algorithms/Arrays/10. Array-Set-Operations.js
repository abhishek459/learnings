// Union of Two Arrays (A || B) - Complexity O(n) - Using Sets
function uniteArrays(array1, array2) {
    if (!Array.isArray(array1) || !Array.isArray(array2)) throw 'Please provide 2 Arrays as arguments to this function';
    const unitedSet = new Set();
    let i = 0, j = 0;
    while (i < array1.length) {
        unitedSet.add(array1[i++]);
    }

    while (j < array2.length) {
        unitedSet.add(array2[j++]);
    }

    return unitedSet;
}

// Union of Two Arrays (A || B) - Complexity O(n) - Using Array
function uniteSortedArrays(array1, array2) {
    if (!Array.isArray(array1) || !Array.isArray(array2)) throw 'Please provide 2 Arrays as arguments to this function';
    let i = 0, j = 0;
    const unitedArray = new Array();

    while (i < array1.length && j < array2.length) {
        if (array1[i] < array2[j]) {
            unitedArray.push(array1[i++]);
        } else if (array1[i] > array2[j]) {
            unitedArray.push(array2[j++]);
        } else {
            unitedArray.push(array1[i]);
            i++; j++;
        }
    }

    // Add any remaining elements
    while (i < array1.length) {
        unitedArray.push(array1[i++]);
    }
    while (j < array2.length) {
        unitedArray.push(array2[j++]);
    }

    return unitedArray;
}

// Intersection of Two Arrays (A && B)
function intersectArrays(array1, array2) {
    if (!Array.isArray(array1) || !Array.isArray(array2)) throw 'Please provide 2 Arrays as arguments to this function';
    const intersectedArray = [];
    for (let i = 0; i < array1.length; i++) {
        for (let j = 0; j < array2.length; j++) {
            if (array1[i] === array2[j]) {
                intersectedArray.push(array1[i]);
            }
        }
    }

    return intersectedArray;
}

function intersectSortedArrays(array1, array2) {
    if (!Array.isArray(array1) || !Array.isArray(array2)) throw 'Please provide 2 Arrays as arguments to this function';
    let i = 0, j = 0;
    const intersectedArray = [];
    while (i < array1.length && j < array2.length) {
        if (array1[i++] === array2[j++]) {
            intersectedArray.push(array1[i - 1]);
        }
    }

    while (i < array1.length) {
        if (array2.includes(array1[i])) {
            intersectedArray.push(array1[i]);
        }
    }

    while (j < array2.length) {
        if (array2.includes(array2[j])) {
            intersectedArray.push(array2[j]);
        }
    }

    return intersectedArray;
}

// Difference of Two Arrays (A-B)
function arrayDifference(array1, array2) {

}

function sortedArrayDifference(array1, array2) {

}