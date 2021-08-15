#!/usr/bin/perl

use strict;
use warnings;

print "CACULADORA DE CESAR";
print "\nEscribe tu primer numero: ";
my $numero_usuario = <STDIN>;
print "\nEscribe tu segundo numero: ";
my $segundo_usuario = <STDIN>;

print "1) Sumar\n";
print "2) Restar\n";
print "3) Multiplicar\n";
print "4) Dividir\n";
print "Opcion: ";
my $opcion_usuario = <STDIN>;

if($opcion_usuario == 1){
    print $numero_usuario+$segundo_usuario;
}elsif($opcion_usuario == 2){
    print $numero_usuario-$segundo_usuario;
}elsif($opcion_usuario == 3){
    print $numero_usuario*$segundo_usuario;
}
else{
    print $numero_usuario/$segundo_usuario;
}


exit;