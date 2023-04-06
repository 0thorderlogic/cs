`timescale 1ns / 1ps

module andfusingnor(
    input a,
    input b,
    inout nota,
    inout notb,
    output c
    );

nor(nota,a,a);
nor(notb,b,b);
nor(c,nota,notb);

endmodule
