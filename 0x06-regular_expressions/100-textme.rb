#!/usr/bin/env ruby
from = ARGV[0].scan(/from:(.*?)\]/)
to = ARGV[0].scan(/to:(.*?)\]/)
flags = ARGV[0].scan(/flags:(.*?)\]/)
msg = ARGV[0].scan(/msg:(.*?)\]/)
puts [from, to, flags, msg].join(',')
