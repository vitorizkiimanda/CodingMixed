package main

import (
	"bufio"
	"os"
	"strings"
	"fmt"
	"strconv"
)

type person struct{
	from int
	dest int
}
func abs(x int)int{
	if x<0{
		return -x
	}else{
		return x
	}
}

var naik = []person{}
var turun = []person{}
func main(){
	var from, dest,cost int
	var min_naik, max_naik, min_turun,max_turun,min,max int
	min_naik, min_turun = int(^uint(0)>>1),int(^uint(0)>>1)
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan(){
		if scanner.Text() == ""{
			break
		}
		from,_ = strconv.Atoi(strings.Split(scanner.Text()," ")[0])
		dest,_ = strconv.Atoi(strings.Split(scanner.Text()," ")[1])
		if from > dest {
			turun = append(turun, person{from, dest})
		}else{
			naik = append(naik, person{from, dest})
		}

	}
	for _, val := range naik{
		if val.from < min_naik{
			min_naik = val.from
		}
		if val.dest > max_naik{
			max_naik = val.dest
		}
	}
	for _, val := range turun{
		if val.dest < min_turun{
			min_turun= val.dest
		}
		if val.from > max_turun{
			max_turun= val.from
		}
	}
	if min_turun<min_naik{min = min_turun}else{min = min_naik}
	if max_naik>max_turun{max = max_naik}else{max = max_turun}
	if len(naik)==0 && len(turun)==0{
		fmt.Println("masukkan input, newline dua kali jika sudah")
	}else if len(naik) ==0 {
		fmt.Println("Hanya turun")
		fmt.Println("Dari lantai", max_turun,"ke lantai",min_turun)
		cost = max_turun-min_turun
	}else if len(turun)==0{
		fmt.Println("Hanya naik")
		fmt.Println("dari lantai", min_naik,"ke lantai",max_naik)
		cost = max_naik - min_naik
	}else{
		if abs(min_naik-min_turun) < abs(max_turun-max_naik){

			fmt.Println("Turun dahulu dari lantai",max_turun,"ke lantai",min)
			fmt.Println("Kemudian naik sampai lantai", max_naik)
			cost = max_turun-min+(max_naik-min)
		}else{
			fmt.Println("Naik dahulu dari lantai",min_naik, "ke lantai",max)
			fmt.Println("Kemudian turun sampai lantai", min_turun)
			cost = max-min_naik+(max-min_turun)
		}
	}
	cost += 4*(len(naik)+len(turun))
	fmt.Println("Cost:", cost)

}
