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
<p id="totalCookies">Total Cookies: 0</p>
<p id="prestigePoints">Prestige Points: 0</p>
<p id="clickValue">Cookies per click: 1</p>
<p id="autoClickValue">Cookies per auto click: 1</p>

<script>
var score = 0;
var totalCookies = 0;
var prestigePoints = 0;
var clickValue = 1;
var autoClickValue = 1;
var autoClickerInterval;

function clickCookie() {
  score += clickValue;
  totalCookies += clickValue;
  document.getElementById("score").innerHTML = "Score: " + score;
  document.getElementById("totalCookies").innerHTML = "Total Cookies: " + totalCookies;
  updatePrestigePoints();
}

function upgradeClick() {
  if (score >= 10) {
    score -= 10;
    document.getElementById("score").innerHTML = "Score: " + score;
    clickValue *= 2;
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
      totalCookies += autoClickValue;
      document.getElementById("score").innerHTML = "Score: " + score;
      document.getElementById("totalCookies").innerHTML = "Total Cookies: " + totalCookies;
      updatePrestigePoints();
    }, 1000);
  } else {
    alert("Not enough cookies for auto clicker!");
  }
}

function upgradeAutoClicker() {
  if (score >= 100) {
    score -= 100;
    document.getElementById("score").innerHTML = "Score: " + score;
    autoClickValue *= 2;
    document.getElementById("autoClickValue").innerHTML = "Cookies per auto click: " + autoClickValue;
  } else {
    alert("Not enough cookies for upgrade!");
  }
}

function updatePrestigePoints() {
   prestigePoints = Math.floor(totalCookies / 10);
   document.getElementById("prestigePoints").innerHTML = "Prestige Points: " + prestigePoints; 
}
</script>

</body>
</html>
