/*
   Copyright (c) 2016, Matthew Morris <user="anglus"; domain="gmail.com">

   Permission to use, copy, modify, and/or distribute this software for any
   purpose with or without fee is hereby granted, provided that the above
   copyright notice and this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
   WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
   MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
   ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
   ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

package main

import "fmt"

func main() {
	var mod3, mod5 = "fizz", "buzz"
	for num := 1; num <= 100; num++ {
		var text = ""
		if num%3 == 0 {
			text += mod3
		}
		if num%5 == 0 {
			text += mod5
		}

		if text != "" {
			fmt.Println(text)
		} else {
			fmt.Println(num)
		}
	}
}