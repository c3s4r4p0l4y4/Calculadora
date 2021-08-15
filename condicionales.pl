#!/usr/bin/perl

use strict;
use warnings;


print "¿Cual es tu edad? ";

my $edad = <STDIN>;

if($edad < 18){
    print "eres menor de edad\n";
}elsif($edad > 100 or $edad < 0){
    print "tu edad es $edad y no es posible tener esa edad";
}
else{
    print "eres mayor de edad";
}

exit;