`timescale 1ns / 1ps

module notusingnand(
    input a,
    output nota
    );

nand(nota, a, a);
endmodule