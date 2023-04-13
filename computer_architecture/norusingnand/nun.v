`timescale 1ns / 1ps

module nun(
    input a,
    input b,
    inout m,
    inout n,
    inout o,
    output f
    );

nand(m,a,a);
nand(n,b,b);
nand(o,m,n);
nand(f,o,o);

endmodule