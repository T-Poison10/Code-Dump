
const mouse = document.querySelector('.mouse');


const positionElement = (e)=> {
  const mouseY = e.clientY;
  const mouseX = e.clientX;
  mouse.style.transform = `translate3d(${mouseX}px, ${mouseY}px, 0)`;
}

window.addEventListener('mousemove', positionElement)