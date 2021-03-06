/* Copyright (c) 2016, Matthew Morris
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#include "stdio.h"
#include "string.h"

int main(void) { 
   int num;

   for (num = 1; num <= 100; num++) {
      char text[16] = "";
   	
      if (num % 3 == 0) {
         strcat(text, "fizz");
      }
      if (num % 5 == 0) {
         strcat(text, "buzz");
      }
   	
      text[0] != '\0'
         ? printf("%s\n", text)
         : printf("%d\n", num);
   }
   return 0;
}
