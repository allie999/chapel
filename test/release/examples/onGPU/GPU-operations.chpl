var A : [1..10] real = 2.0;
var B : [1..10] real = 2.0;
var C = 0.0;
on GPU Locales[0] do {
    // reduce example
    C = + reduce A;
    writeln(C);
    // forall example
    forall a in A {
	    a += a + 0.1;
    }
    // scan example
    writeln(+ scan A);
}
