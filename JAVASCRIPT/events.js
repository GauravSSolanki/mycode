document.querySelector("#box1").addEventListener("mouseover", () => {
  // document.querySelector("#box1").style.display="none"
  document.querySelector("#box2").style.display = "block";
});

// document.querySelector("#box2").addEventListener("mouseenter",()=>{
//     document.querySelector("#box2").style.display="none"
//     document.querySelector("#box1").style.display="block"
// })

// const handleclick = () => {
//   document.getElementById("box3").innerHTML =
//     document.getElementById("input").value;
// };

const handleclick = () => {
      document.getElementById("span").innerHTML =
        document.getElementById("input").value;
    };
