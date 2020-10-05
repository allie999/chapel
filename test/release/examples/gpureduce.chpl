var A : [1..10] real = 2.0;
var B : [1..10] real;
// // var B = 10;
var C = 0.0;

on GPU here do {
    // A[1] = 10.0;
    // C = + reduce A;
    // // B = B + 1;
    // // writeln(C);
    // forall a in A {
        // forall b in B { 
        //     b += b * 2;
        // }
    // }
    B = + scan A;
    //    writeln(+ scan A);
}

writeln("12345678");
// on here do {
//     // A[1] = 10.0;
//     C = + reduce [1];
//     // B = B + 1;
//     // writeln(C);
// }
// writeln(C);
// Array assignment
B = A;