document.addEventListener('DOMContentLoaded', function() {
    // Simulated content for Today's Egg
    var content = "Welcome to Today's Egg! Here you'll find daily content to inspire and delight.";
    document.getElementById('content').innerText = content;
  
    document.getElementById('generateButton').addEventListener('click', function() {
      var inputText = document.getElementById('poemInput').value;
      var outputText = generatePolatry(inputText);
      document.getElementById('poemDisplay').innerText = outputText;
    });
  
    function generatePolatry(text) {
      // Here you can implement your logic to generate the "Polatry Bussionus"
      // For simplicity, let's just reverse the text
      return text.split('').reverse().join('');
    }
  });
  