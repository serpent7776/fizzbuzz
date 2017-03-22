#!/usr/bin/env gst

"Copyright (c) 2016, Matthew Morris

Permission to use, copy, modify, and/or distribute this software for any
purpose with or without fee is hereby granted, provided that the above
copyright notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED 'AS IS' AND THE AUTHOR DISCLAIMS ALL WARRANTIES
WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE."

1 to: 100 do: [
    :num |

    (num \\ 3 ~= 0) & (num \\ 5 ~= 0) ifTrue: [
        Transcript show: num displayString
    ].

    num \\ 3 == 0 ifTrue: [
        Transcript show: 'fizz' displayString
    ].

    num \\ 5 == 0 ifTrue: [
        Transcript show: 'buzz' displayString
    ].

    Transcript cr
]