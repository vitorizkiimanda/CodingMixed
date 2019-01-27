  package main

import (
	"fmt"
	"strings"
)

func main() {
	var str_a []string
	var str_b []string

	var in_a string
	var in_b string

	var leng  = 0
	fmt.Scanf("%s\n%s",&in_a, &in_b)
	str_a = strings.Split(in_a,"")
	str_b = strings.Split(in_b,"")

	for i_a:= 0; i_a<len(str_a);i_a++{
		for i_b := 0; i_b< len(str_b);i_b++{

			if str_a[i_a] == str_b[i_b]{
				leng++
				str_b[i_b]=""
				break

			}
		}
	}
	tlen := len(in_a)+len(in_b)
	fmt.Println(tlen-leng*2)
}
