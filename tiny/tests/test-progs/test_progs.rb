puts Dir.glob("./tests/test-progs/pr1.{[a-z][0-9][0-9]}").sort

Dir.glob("./tests/test-progs/pr1.{[a-z][0-9][0-9]}").sort.each do |test_file|
	puts "%%%%%%%%Entering #{test_file}:%%%%%%%%"
	system("cat #{test_file}")
	system("./tc #{test_file}")
	puts "%%%%%%%%Press Any key to continue.%%%%%%%%"
	gets
end

