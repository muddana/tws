#script for testing tiny

$PATH = "./tests/test-progs/"
format = ARGV[0] ||"pr2.{[a-z][0-9][0-9]}"

puts Dir.glob($PATH + format).sort

#ugly hack check wat the problem with gets
ARGV.clear
tiny_binary = "./tc"

Dir.glob($PATH + format).sort.each do |test_file|
	puts "%%%%%%%%Entering #{test_file}:%%%%%%%%"
	system("cat #{test_file}")
	puts "%%%%%%%%Press a key to execute:%%%%%%%%"
	gets 
	system("#{tiny_binary} #{test_file}")
end

