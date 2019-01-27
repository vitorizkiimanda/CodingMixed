package main

import (
	"fmt"
	"bufio"
	"os"
	"strings"
)

func main(){
	buang := []string{"(",")"," ","+","?",".","/","*","-"}
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		var nomor= scanner.Text()

		if nomor == ""{
			continue
		}
		if len(nomor) <3 {
			fmt.Println(nomor)
			continue
		}

		for _, val := range buang {
			nomor = strings.Replace(nomor, val, "", -1)
		}

		if nomor[0] == '0' {
			fmt.Println("62" + nomor[1:])
		} else {
			fmt.Println(nomor)
		}
	}

}
