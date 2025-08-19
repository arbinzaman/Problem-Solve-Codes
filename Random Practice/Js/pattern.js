
let n = 5;
let str = "";
let space = " ";
let stars = "*"


//**
// Right Angle Triangle Pattern
//  */

for( let i= 1 ; i<7 ;i++){
    console.log("*".repeat(i));
}


//**
// pyramid Pattern
//  */

for (let i = 1; i<7 ; i++){
     space = " ".repeat(7 - i);
     stars = "*".repeat(i * 2 - 1);
    console.log(space + stars + space);
}

//**
// Inverted Pyramid Pattern
//  */

for (let i = 1 ; i < 7; i++){
     space  = " ".repeat(i - 1);
     stars = "*".repeat(13 - (i * 2));
    console.log(space + stars + space); 
}


for (let i = 1; i<=n ; i++){
     space = " ".repeat(n - i);
     stars = "*".repeat(i * 2 - 1);
    console.log(space + stars + space);
}
for (let i = 1 ; i < n; i++){
        space  = " ".repeat(i);
        stars = "*".repeat((n - i) * 2 - 1);
        console.log(space + stars + space); 
    }