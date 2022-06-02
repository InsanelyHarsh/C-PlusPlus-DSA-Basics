//
//  noth.swift
//  Learning
//
//  Created by Harsh Yadav on 17/03/22.
//

import Foundation

class dog{
    var name:String
    init(name:String){
        self.name = name
        print("name: \(name)")
    }
}
func myfunc()->Int{
    return 0
    
}

func giveNameOfDog()->dog{
    let mydog = dog(name: "harsh")
    return mydog
}

let name = giveNameOfDog()
//print(name.name)
