package main

import (
	"bufio"
	"os"
	"strings"
	"fmt"
	"strconv"
)

type bus_S struct{
	arrival int
	departure int
}

func main(){
	bus := []bus_S{}
	scanner := bufio.NewScanner(os.Stdin)
	var inp []string
	var m_dep, m_arr, max_station int
	for scanner.Scan(){
		if scanner.Text() == ""{
			break
		}
		inp = strings.Split(scanner.Text()," ")
		var s_h,_ = strconv.Atoi(strings.Split(inp[3],":")[0])
		var s_m,_ = strconv.Atoi(strings.Split(inp[3],":")[1])
		m_arr = s_h*60 +s_m
		s_h,_ = strconv.Atoi(strings.Split(inp[5],":")[0])
		s_m,_ = strconv.Atoi(strings.Split(inp[5],":")[1])
		m_dep = s_h*60 + s_m
		bus = append(bus, bus_S{m_arr,m_dep})
	}
	// for 24 hour checking
	for i,_ := range bus{
		if bus[i].departure < bus[i].arrival{
			bus[i].arrival -= 1440
		}
	}
	for i :=0;i<1440;i++{
		var same = 0
		for _, val := range bus {
			if i >= val.arrival && i<= val.departure{
				same+=1
				if same>max_station{
					max_station = same
				}
			}
		}
	}
	fmt.Println(max_station)

}


// go run prob5.go < input

//big O
//big O = n + 1440(n)
//big O = n
