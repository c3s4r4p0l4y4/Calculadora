#!/usr/bin/perl

use strict;
use warnings;

my $contador = 5;
#si mi contador vale 5 nunca llegara a cumplirse por que ya valdra 5 y el bucle nunca funcionaria 
#while($contador <= 5){
#    print "Hola" . "\n";
#    $contador++;
#}

do{
    print "Hola\n";
    $contador++;
}unless($contador < 5);
exit;