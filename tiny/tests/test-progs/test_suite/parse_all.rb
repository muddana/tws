#script for testing tiny

$PATH = "./tests/test-progs/"

format = "pr4.{[a-z][0-9][0-9]}"

puts Dir.glob($PATH + format).sort

ARGV.clear
tiny_binary = "./tc_parse"

prog_counter = 0

File.open($PATH + '_PARSE_OUTPUT') do |output|

Dir.glob($PATH + format).sort.each do |test_file|
	command = "#{tiny_binary} #{test_file} > #{$PATH+'_OUTPUT'}"
	system( command )
	system("cat #{$PATH+'_OUTPUT'}")
end

end