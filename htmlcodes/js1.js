const hobbiesResult = document.getElementById('hobbies-result');
const transportResult = document.getElementById('transport-result');
const musicResult = document.getElementById('music-result');

/*
 * CHECKBOX LISTENERS
 */
document.getElementById('sports-checkbox').addEventListener('change', ($event) => {
  if ($event.target.checked) {
    hobbiesResult.children[0].classList.remove('text-secondary');
  }
  else {
    hobbiesResult.children[0].classList.add('text-secondary');
  }
});

document.getElementById('games-checkbox').addEventListener('change', ($event) => {
  if ($event.target.checked) {
    hobbiesResult.children[1].classList.remove('text-secondary');
  }
  else {
    hobbiesResult.children[1].classList.add('text-secondary');
  }
});

document.getElementById('music-checkbox').addEventListener('change', ($event) => {
  if ($event.target.checked) {
    hobbiesResult.children[2].classList.remove('text-secondary');
  }
  else {
    hobbiesResult.children[2].classList.add('text-secondary');
  }
});

// third passworld/////////........................>>>>........................>>>>>........................>>
// const passwordInput = document.getElementById('password-input');
// const submitButton = document.getElementById('submit-button');
passwordInput.addEventListener('input',($event)=>{
          if($event.target.value.length >= 6 && $event.target.value.length <= 12)
          { submitButton.removeAttribute('disabled'); }
          else
          { submitButton.setAttribute('disabled','true'); }
});

// ............?.................?................/

// Access DOM elements
const passwordInput = document.getElementById('password-input');
const confirmPassword = document.getElementById('confirm-password');
const errorMsg = document.getElementById('error-message');
const submitButton = document.getElementById('submit-button');

// Checks password confirmation
confirmPassword.addEventListener('blur', () => {
  if (passwordInput.value === confirmPassword.value) {
    submitButton.removeAttribute('disabled');
  } else {
    submitButton.setAttribute('disabled', 'true');
  }
});

confirmPassword.addEventListener('blur',()=>{
  if(confirmPassword.value === passwordInput.value)
    { passwordInput.style.display ='thin solid green';
     confirmPassword.style.display. ='thin solid green';
     errorMsg.style.display='none'; }
     else
     {  passwordInput.style.display ='thin solid red';
     confirmPassword.style.display ='thin solid red';
     errorMsg.style.display='inline'; }
});

//............drop down..................//
document.getElementById('music').addEventListener('change',($event)=>{
   document.getElementById('music_bar').textContent = $event.target.value; 
});
