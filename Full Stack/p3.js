let s="I am learning JavaScript programming";
console.log("Length of string:",s.length);
let e=s.substring(14,24);
console.log('Extracted Substring:',e);
let new_st=s.replace("programming","concepts");
console.log("New string:",new_st);
function isPalindrome(str){
    let rev=str.split("").reverse().join("");
    console.log("Reversed string:",rev);
     return str === rev; 
}
let res=isPalindrome('10001');
if(res){
    console.log("It is a palindrome");
}
else{
    console.log("Not a palindrome");
}