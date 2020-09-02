var A : [1..10] real = 2.0;
var B = 10;
var C = 0;
on  here do {
    C = + reduce A;
    B = B + 1;
    writeln(C);
}
writeln(C);
