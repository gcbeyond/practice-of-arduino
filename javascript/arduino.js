
var list = document.querySelector('#sidebar ul');
list.addEventListener('click', function() {
	if (event.target.nodeName.toLowerCase() == 'a') {
		var secondlist = event.target.nextElementSibling;

		if (secondlist && (secondlist.style.display == '' || secondlist.style.display == 'none')) {
			secondlist.style.display = "block";
		}
		else if (secondlist && secondlist.style.display == 'block') {
			secondlist.style.display = "none";
		}
	}
	event.preventDefault();
}, false);