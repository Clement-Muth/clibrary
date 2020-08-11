const arr = ["test", "test2"];


arr.find(element, &arr, i, {element == "test2"}, {
    if (!element) return;
    else {
        arr.pop_index_of(arr, i);
    }
});

arr.forEach(element, &arr, i, {
    printf("%s\n", element.value);
});