 let fbtn = document.querySelector('button');
// let fbtn=document.getElementById('btn');

/* fbtn.addEventListener('click',showMsg);
function showMsg(){
    alert("ThankYou , You are following ...account");
} */

fbtn.addEventListener('click',printchange);
function printchange(){
    let name = prompt("Enter name of follower :");
    alert(" Thank YOU "+name);
    fbtn.textContent="following";
    const city="kota";
    console.log(city);
}

let a = document.querySelectorAll('link')
console.log(a);
// for....in loop 
let animal={
    city:"kota", rank:"5"
};
for(let key in animal)
{
    console.log(key, animal[key]);
}
 
/* let arr_name=[3,4,5,6,8,9,0];
console.log(arr_name);
for(let index in arr_name)
{
    console.log(index,arr_name[index]);
}*/
 let s_name=['gaurav','nisha','gaurav','dk'];
 for(let index in s_name)
 {
    console.log(index,s_name[index]);
 }

 let j=10;
 do{
    console.log("hello do while loop");
 }while(j<10)
 
 //function in JS 

function makemeggi(plate,cheez){
   alert('Time will be '+plate*5 +' minute, Bill will be  '+ cheez*30+'Rupeez for extra cheez');
}
let plate=prompt('enter plate of meggi');
let cheez=prompt(' enter rupees of cheez ')
makemeggi(plate,cheez);
//class in js 

/* class Product{
    constructor(item){
        this.item= item;
    }
    getSomthing(){
       return this.item+' this is it ';
    }
};
let p=Product(suji) */


/* <button onclick="document.getElementById('myImage').src='pic_bulbon.gif'">Turn on the light</button>
 */
/*<img id="myImage" src="pic_bulboff.gif" style="width:100px"></img> */

// dOM ....

const header = document.getElementsByTagName('p');
header.textContent('hello');

header.innerHTML = '<h2>Modify the DOM</h2>';

header.style.backgroundcolor('red');
header.style.padding('1em');

myElement.classList.remove(className);
myElement.classList.remove('bg-primary');
myElement.classList.add('bg-primary');
myElement.classList.add(className);
myElement.classList.add('text-centre');

let newArticle = document.createElement('article');
let newPara=document.createElement(p);
let newHeading=document.createElement(h2);

newArticle.appendChild(newHeading);
newArticle.appendChild(newPara);

newArticle.removeChild(newHeading);
newArticle.appendChild(newHeading);
newArticle.replaceChild();

newArticle.classList.add('m-2','p-1','bg-white');
newArticle.setAttribute('id','#0004');

const main = document.querySelector('main');
main.appendChild(newArticle);

let blue_button = document.querySelectorAll('blue-button');
blue_button.addEventListener('click',()=>{
    header.classList.remove('.red','.black');
    header.classList.add('.black','.white');
});

// new add post using button
function addNewPost(){
let newArticle = document.createElement('article');
let newPara=document.createElement(p);
let newHeading=document.createElement(h2);

newArticle.appendChild(newHeading);
newArticle.appendChild(newPara);
return newArticle;
}
const addPost=document.querySelector('addPost');
const main= document.querySelectorAll('main');
const newaddPost=new addNewPost();
addPost.addEventListener('click',()=>{main.appendChild(newaddPost)});

// Remove extra section
const removebtn=document.querySelector('removepost');
const section=document.querySelector('section');

removebtn.addEventListener('click',()=>{
    const articleCount=section.childElementCount;
     if(articleCount > 1)
        {
         section.removeChild(section.children[articleCount-1]);
        }
});

// from content show
const firstName = document.getElementById('firstname');
const lastName = document.getElementById('lastname');
const SubmitBtn=document.querySelector('button'); //submit is also used here.

SubmitBtn.addEventListener('click', ()=>{
    slideBar.textContent='hi'+firstName.value + lastName.value +'welcome to ideal world';
});
// box cleaner name and passworld
const commeNt = document.getElementById('comment-form');
SubmitBtn.addEventListener('click', ($event)=>{   //$event is diiferent for submit to button
    $event.preventDefault();  // not again submit & button
    slideBar.textContent='hi'+firstName.value + lastName.value +'welcome to ideal world'; //show msg
    commeNt.reset(); // it will clean input feeds .
});

