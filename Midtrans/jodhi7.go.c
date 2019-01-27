package main

import (
	"fmt"
	"strings"
)

var list_names  []string

func get_name(pat string)int {
	var total int
	for _, val := range list_names {
		if strings.HasPrefix(val,pat){
			total++
		}
	}
	return total
}
func main(){
	var n int

	var want,inp string
	fmt.Scanf("%d",&n)

	for i:=0;i<n;i++{
		fmt.Scanf("%s %s",&want,&inp)
		if want == "add"{
			var is_there = false
			for _, val := range list_names{
				if inp == val{
					is_there = true
					break
				}
			}
			if !is_there {list_names = append(list_names, strings.TrimSpace(inp)) }
		}else if want == "find"{
			fmt.Println(get_name(strings.TrimSpace(inp)))
		}
	}
}
