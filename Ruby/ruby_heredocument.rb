#!/usr/bin/ruby -w

print <<EOF                                   
      line 1
      line 2
EOF

#prints everything until the terminator EOF is found.

print <<"EOF";
      line 3
      line 4
EOF

#you can use quotes (") or (') to define the terminator.
#the semicolon seems to be completely optional.

print <<`EOC`     
	echo hi there
	echo lo there
EOC

#if the terminator is defined using (`), commands
#contained in the string will be executed.
#to type (`) in a pt-br keyboard, press [shift]+[altgr]+[´]

print <<"foo", <<"bar"
	I said foo.
foo
	I said bar.
bar

#the print command can be stacked
#print everything until you find terminator 1
#then print everything until you find terminator 2

print <<XYZ; #ou XYZ
   line x
   line y
   line z
XYZ

#the terminator apparently can be any kind of
#crazy string you can come up with

