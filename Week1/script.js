//Function for user to click the burron
function showimage()
    {
        //create the image element
        const img =document.createElement("img");
        //set the image source
        img.src="too early.jpg";
        //set the image alt text
        img.alt="Tired Teacher";
        //set the image width
        img.width=300;
        //set the image height
        img.height=300;
        const container = document.getElementById("imageContainer");
        //append the image to the container
        container.appendChild(img);
        //set the image position
    }