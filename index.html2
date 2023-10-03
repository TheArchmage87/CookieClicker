<!DOCTYPE html>
<html>
<body>

<h2>Cookie Clicker Game</h2>
<p>Click the cookie to increase your score!</p>

<button onclick="clickCookie()">
  <img src="https://i.imgur.com/a3HjNKr.png" alt="Cookie" width="50" height="50">
</button>

<button onclick="upgradeClick()">Upgrade Click (Cost: 10)</button>
<button onclick="autoClicker()">Auto Clicker (Cost: 50)</button>
<button onclick="upgradeAutoClicker()">Upgrade Auto Clicker (Cost: 100)</button>

<p id="score">Score: 0</p>
<p id="clickValue">Cookies per click: 1</p>
<p id="autoClickValue">Cookies per auto click: 1</p>

<script>
var score = 0;
var clickValue = 1;
var autoClickValue = 1;
var autoClickerInterval;

function clickCookie() {
  score += clickValue;
  document.getElementById("score").innerHTML = "Score: " + score;
}

function upgradeClick() {
  if (score >= 10) {
    score -= 10;
    clickValue *= 2;
    document.getElementById("score").innerHTML = "Score: " + score;
    document.getElementById("clickValue").innerHTML = "Cookies per click: " + clickValue;
  } else {
    alert("Not enough cookies for upgrade!");
  }
}

function autoClicker() {
  if (score >= 50) {
    score -= 50;
    document.getElementById("score").innerHTML = "Score: " + score;
    if (autoClickerInterval) {
      clearInterval(autoClickerInterval);
    }
    autoClickerInterval = setInterval(function() {
      score += autoClickValue;
      document.getElementById("score").innerHTML = "Score: " + score;
    }, 1000);
  } else {
    alert("Not enough cookies for auto clicker!");
  }
}

function upgradeAutoClicker() {
  if (score >= 100) {
    score -= 100;
    autoClickValue *= 2;
    document.getElementById("score").innerHTML = "Score: " + score;
    document.getElementById("autoClickValue").innerHTML = "Cookies per auto click: " + autoClickValue;
  } else {
    alert("Not enough cookies for upgrade!");
  }
}
</script>

</body>
</html>
