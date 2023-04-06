`timescale 1ns / 1ps

module dm(
    input a,
    input b,
    inout nota,
    inout notb,
    inout d,
    output notd,
    output c
    );

and(d,a,b);
not(nota,a);
not(notb,b);
not(notd,d);
or(c,nota,notb);

endmodule
