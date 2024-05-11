#!/usr/bin/env ruby
puts ARGV[0].scan(/from:(?:\+)?(\d+)\]|\bto:(?:\+)?(\d+)\]|\bflags:([^\]]+)/).flatten.compact.join(',')
