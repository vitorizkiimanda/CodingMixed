package main

import (
	"fmt"
)

type tt struct{
	trans []int
	email []string
	phone []string
	card []string
}
var tr = []tt{}

func check( em string, ph string, ca string, trans_num int){
	var is_em, is_ph, is_ca bool = false,false,false
	var index int
	var index_l []int
	for i,_ := range tr{
		for _, val := range tr[i].email{
			if em == val{
				index_l = append(index_l,i)
				is_em = true
			}
		}
		for _, val := range tr[i].phone{
			if ph == val{
				index_l = append(index_l,i)
				is_ph = true
			}
		}
		for _, val := range tr[i].card{
			if ca == val{
				index_l = append(index_l,i)
				is_ca = true
			}
		}
	}
	if len(index_l)>1{
		index=index_l[0]
		for ii :=1;ii<len(index_l);ii++{
			var bak_email = tr[index].email
			var bak_phone = tr[index].phone
			var bak_card = tr[index].card

			merge(index_l[0],ii)
			for _,eee := range bak_email{
				tr[index].email = append(tr[index].email, eee)
			}
            for _,eee := range bak_phone{
                tr[index].phone = append(tr[index].phone, eee)
            }
            for _,eee := range bak_card{
                tr[index].card = append(tr[index].card, eee)
            }
		}
	}

	if is_em || is_ph || is_ca{
		if !is_em {tr[index].email = append(tr[index].email, em)}
		if !is_ph {tr[index].phone= append(tr[index].phone, ph)}
		if !is_ca {tr[index].card = append(tr[index].card, ca)}
		tr[index].trans = append(tr[index].trans, trans_num)
	}else{
		tr = append(tr, tt{[]int{trans_num},[]string{em},[]string{ph},[]string{ca}})
	}

}


func merge(base, tambah int){
	tr[base].email =  append(tr[base].email,tr[tambah].email...)
	tr[base].phone =  append(tr[base].phone,tr[tambah].phone...)
	tr[base].card =  append(tr[base].card,tr[tambah].card...)
	tr = append(tr[:tambah], tr[tambah+1:]...)
}

func main(){

	var in_em, in_ph, in_ca string
	var n int
	fmt.Scanf("%d",&n)
	for i:=0;i<n;i++ {
		fmt.Scanf("%s %s %s", &in_em, &in_ph, &in_ca)
		check(in_em,in_ph,in_ca,i+1)


	}

	for i,val := range tr {
		fmt.Println("\nCustomer",i+1)
		fmt.Println("Total Transaction: ", len(val.trans))
		fmt.Println("Transactions ID:", val.trans)
		fmt.Println("Emails:",val.email)
		fmt.Println("Phones:",val.phone)
		fmt.Println("Cards:", val.card)

	}




}
