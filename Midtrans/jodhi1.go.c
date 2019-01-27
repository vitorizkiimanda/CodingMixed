package main

import (
	"bufio"
	"os"
	"fmt"
	"strings"
)

func main(){
	var alamat_1 []string
	var alamat_2 []string
	var same int
	var in_1,in_2 string
	var hasil float64
	list_del := []string{"jalan", "jl","gg","jln","km","gang","no","nomor", "rt", "rw", "desa"}
	list_del_special := []string{".",",","/","-"}

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	in_1 =strings.ToLower(" "+scanner.Text()+" ")
	scanner.Scan()
	in_2 =strings.ToLower(" "+scanner.Text()+" ")

	for _, val := range list_del_special{
		in_1 = strings.Replace(in_1, val, " ", -1)
		in_2 = strings.Replace(in_2, val, " ", -1)

	}
	for _, val := range list_del{
		in_1 = strings.Replace(in_1, " "+val+" ", " ", -1)
		in_2 = strings.Replace(in_2, " "+val+" ", " ", -1)

	}
	alamat_1 = strings.Fields(in_1)
	alamat_2 = strings.Fields(in_2)

	for _,val_1 := range alamat_1{
		for key, val_2 := range alamat_2{
			if val_1 == val_2{
				same++
				alamat_2[key]=""
			}
		}
	}

	if same>0{
		hasil = float64(same)/float64(len(alamat_1))*100.0
	}else{
		hasil = 0
	}
	fmt.Printf("%.2f %%",hasil)

	}
