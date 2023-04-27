`timescale 1ns / 1ps

module twoistofour(
    input a,
    input b,
    inout nota,
    inout notb,
    output ynot,
    output yone,
    output ytwo,
    output ythree
    );

nand(nota, a, a);
nand(notb, b, b);
and(ynot, nota, notb);
and(yone, nota, b);
and(ytwo, a, notb);
and(ythree, a, b);

endmodule
