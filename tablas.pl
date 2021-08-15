#!/usr/bin/perl

use strict;
use warnings;

print "pedir tabla de multiplicar ";
my $numero = <STDIN>;

for(my $i = 1; $i <= 10; $i++){
    print $numero * $i;
    print "\n";
}

exit;