// // first code
// console.log("Hello world!");
// console.log("JS is just an overrated language! i guess");

// // variable declaration
// fname = "Ayush";
// age = 22;
// x = null;
// y = undefined;
// isstudent = true;

// console.log(fname);
// console.log(age);

// // var, let, const
// // var - can be redeclared 
// var id = 1;
// var id = 2;
// var id = 3;
// console.log(id); //now it display the last id i.e 3

// // let - can be declared once 
// let roll = 101;
// // let roll = 102; //this show error as roll already declared 
// console.log(roll);
// // we can update is but cannot redeclared
// roll = 102;
// console.log(roll); //display the latest roll 

// // const - cannot redeclared or update
// const PI = 3.14;
// console.log(PI);

// // PI = 4.67; //this show error 
// // console.log(PI)

// // data types
// // number, string, Boolean, Undefined, Null, BigInt, Symbol
// // NN SS BB U shortform to remember
// let num = 123;
// let str = "Ayush";
// let isStudent = true;
// let req;
// let dep = null;
// let regno = BigInt(266320100101);
// let smb = Symbol("HEllo!");

// console.log(num);
// console.log(typeof(num));
// console.log(str);
// console.log(typeof(str));
// console.log(isStudent);
// console.log(typeof(isStudent));
// console.log(req);
// console.log(typeof(req));
// console.log(dep);
// console.log(typeof(dep));
// console.log(regno);
// console.log(typeof(regno));
// console.log(smb);
// console.log(typeof(smb));


// //  objects
// const student = {
//     // key : value
//     fname : "Ayush",
//     age : 22,
//     isStudent : true,
// };

// // to accest value 
// // obj.key
// // obj[key]
// console.log(student.fname);
// console.log(student["age"]);

// //operator

// // Arithmatic operator
// let num1 = 10
// let num2 = 20
// console.log("num1 + num2 =", num1+num2)
// console.log("num1 - num2 =", num1-num2)
// console.log("num1 * num2 =", num1*num2)
// console.log("num1 / num2 =", num1/num2)
// console.log("num1 ** num2 =", num1**num2)
// console.log("num1  =", ++num1)
// console.log("num1  =", num1++)
// console.log("num1  =", --num1)
// console.log("num1  =", num1++)


// let age = prompt("Enter your age: ")
// age = Number.parseInt(age) //convert string to number
// if(age>18) {
//     alert("eligible")
// }

// let mark = prompt("Enter your mark: ")
// mark = Number.parseInt(mark)
// if(mark>90){
//     alert("Excellent")
// } else {
//     alert("Still Excellent")
// }

// //Switch
// let day = prompt("enter the day")
// switch (day) {
//     case 'sunday' :
//         console.log("Fun day");
//         break;
//     case 'monday' :
//         console.log("working day");
//         break;
//     default :
//         console.log("invalid input");
// }

// // terniary operator
// let age = prompt("Enter your age: ");
// console.log("You can ",(age>=18? "Drive" : "not drive"))

// // for loop 
// let num = prompt("Enter the number : ");
// num = Number.parseInt(num);

// let sum = 0;
// for(let i = 1 ; i<=num; i++){
//     sum = sum + i;
// }
// console.log(sum);

// // for in loop 

// const student = {
//     ayush : 98,
//     priyanshu : 88,
//     shiba : 78,
// }
// for(let a in student){
//     console.log("Mark of "+ a + " is "+ student[a])
// }

// // for of 
// for(let b of "ayush"){
//     console.log(b);
// }

// // while loop
// let num = prompt("enter the number: ");
// num = Number.parseInt(num);
// let i = 0;
// while(i<num){
//     console.log(i);
//     i++;
// }