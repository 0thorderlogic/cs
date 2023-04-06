`timescale 1ns / 1ps

module orusingnand(
    input a,
    input b,
    inout nota,
    inout notb,
    output c
    );
nand(nota,a,a);
nand(notb,b,b);
nand(c,nota,notb);


endmodule
