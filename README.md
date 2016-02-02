#### What it is
utility reading a bit stream and producing corresponding run-length codes

#### What it actually does
lenlube reads a probably long string of 0's and 1's and outputs the corresponding run-length codes for it; it always outputs a 0 as its prologue. the next number after it is the run-length of the trailing 0's; if the string has no trailing 0's ( i.e, if it begins with 1's) , this number is also 0; example:

```
$ echo 0100000000000000000000000000000000000000001 | lenlube
```

outputs: 0 1 1 40 1 (i.e, 1 zero, 1 one, 40 0's, and finally a 1; note again that its output always begins with a 0)



if you are really willing to know why the output always begins with a 0, drop me an e-mail with a suggestive pic of your girlfriend attached. 




just kidding :wink: 







she needn't be your girlfriend.
