#! /usr/bin/perl

use strict;
use warnings;

#Escalares
#permiten almacenar unicamente un dato de cualquier tipo

my $nombre = "Cesar Alonso Apolaya Pacheco";
print $nombre . "\n";
#Arrays
#guardar muchos de los elementos como: 1, 2, 4 en una variable

my @calificaciones = (8, 7, 10, 16);
print @calificaciones . "\n";
print $calificaciones[2];

#Hashes
#permite poner hash de nombre dias y poder colocar l sera igual a lunes m igula a martes etc

my %dias = (
    L => "lunes",
    M1 => "martes",
    M2 => "miercoles",
);

print %dias{L};
print "\n";

exit;