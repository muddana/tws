#script for testing tiny

$PATH = "./tests/test-progs/"
format = ARGV[0] ||"pr2.{[a-z][0-9][0-9]}"

puts Dir.glob($PATH + format).sort

#ugly hack check wat the problem with gets
ARGV.clear
tiny_binary = ARGV[1] || "./tc"

manual_verification = false

prog_counter = 0
File.open($PATH + "_RESULTS","w") do |results|
Dir.glob($PATH + format).sort.each do |test_file|
	puts "%%%%%%%%Entering #{test_file}:%%%%%%%%"
	system("cat #{test_file} -n")
	puts "%%%%%%%%Press a key to execute:%%%%%%%%"
	gets 
	command = "#{tiny_binary} #{test_file} > #{$PATH+'_OUTPUT'}"
	system( command )
	system("cat #{$PATH+'_OUTPUT'}")
	if manual_verification
	 File.open(test_file, "a+") do |file|
	  file.print "{<<ACTUAL_OUTPUT"	
	  File.open($PATH+'_OUTPUT',"r") do |opfile|
	    opfile.each do |line|
	     file.puts line
	    end
	  end
	  file.print "ACTUAL_OUTPUT}"	
	 end
	else 
	     prog_code = File.read(test_file)
	     matches = prog_code.match(/<<ACTUAL_OUTPUT([a-zA-z\W\d]*)ACTUAL_OUTPUT/)
	     results.print "Prog " + prog_counter.to_s
	     if matches
	        if File.read($PATH+"_OUTPUT") == matches[1]
		 results.puts "Correct Output"
		else
		 results.puts " Wrong Output"
		 results.puts "Expected:"
		 results.puts  matches[1]
		 results.puts "GOT:"
		 results.puts  File.read($PATH+"_OUTPUT")
		end
	     else
		results.puts "No actual output found for comparing test data"
	     end	
	      
	end
prog_counter += 1;
end

end