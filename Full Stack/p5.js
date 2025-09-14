document.getElementById("btn").addEventListener("click",function(){
    console.log("Button Clicked");
});
document.getElementById("img").addEventListener("mouseover",function(){
    this.style.borderColor="blue";
});
document.addEventListener("keydown",function(event){
    console.log("Key pressed:",event.key);
});