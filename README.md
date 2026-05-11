# 💫 About Me:
-Grade 10 student from Palakkad, Kerala, with an obsession for astrophysics, hardware security, and building things that actually work.<br>NASA Space Apps 2025 Global Nominee and ISRO Space Week 1st Prize winner, turning curiosity into projects that go beyond the classroom.<br>I build AI-powered exoplanet finders, hardware pentesting tools, and career platforms, usually all at the same time.<br>Deeply interested in transit photometry, near-Earth objects, dark matter, and anything the universe hasn't explained yet.<br>Hardware security researcher who enjoys poking at ESP32s, RF signals, and firmware that was never meant to be touched.<br>Mentored by a NASA-affiliated planetary scientist, grounded in the Kerala mathematical tradition, and always looking further out.<br>One commit, one paper, one launch at a time, working toward a future in astrophysics and aerospace research.

## Potfolio : https://akshith-surya-portfolio-ak.netlify.app/

## 🌐 Socials:
[![Instagram](https://img.shields.io/badge/Instagram-%23E4405F.svg?logo=Instagram&logoColor=white)](https://instagram.com/ak_45_______) [![Reddit](https://img.shields.io/badge/Reddit-%23FF4500.svg?logo=Reddit&logoColor=white)](https://reddit.com/user/Plane_Channel_7406) [![Codepen](https://img.shields.io/badge/Codepen-000000?logo=codepen&logoColor=white)](https://codepen.io/Akshithsurya) [![email](https://img.shields.io/badge/Email-D14836?logo=gmail&logoColor=white)](mailto:akshithsurya1@proton.me) 

# 💻 Tech Stack:
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Akshith's Tech Stack Badges</title>
<link rel="preconnect" href="https://fonts.googleapis.com">
<link href="https://fonts.googleapis.com/css2?family=JetBrains+Mono:wght@400;500;600&family=Space+Grotesk:wght@300;400;500;600&display=swap" rel="stylesheet">
<style>
  :root {
    --bg: #0a0a0f;
    --bg2: #10101a;
    --bg3: #16162a;
    --border: rgba(120,120,200,0.15);
    --border2: rgba(120,120,200,0.3);
    --text: #e8e8f0;
    --text2: #8888aa;
    --text3: #5555777;
    --accent: #7c6af7;
    --accent2: #a89fff;
    --green: #39d07b;
    --cyan: #2de2e6;
    --red: #ff4466;
    --amber: #ffa040;
  }
  * { box-sizing: border-box; margin: 0; padding: 0; }
  html { background: var(--bg); color: var(--text); font-family: 'Space Grotesk', sans-serif; min-height: 100vh; }
  body { max-width: 900px; margin: 0 auto; padding: 2rem 1.25rem 4rem; }

  header { margin-bottom: 2.5rem; padding-bottom: 1.5rem; border-bottom: 1px solid var(--border); }
  .header-top { display: flex; align-items: baseline; gap: 1rem; margin-bottom: .35rem; }
  h1 { font-family: 'JetBrains Mono', monospace; font-size: 1.3rem; font-weight: 600; color: var(--accent2); letter-spacing: -.02em; }
  .subtitle { font-size: .82rem; color: var(--text2); font-family: 'JetBrains Mono', monospace; }
  .hint { font-size: .78rem; color: var(--text2); margin-top: .5rem; }
  .hint span { color: var(--accent); }

  .controls { display: flex; gap: .6rem; flex-wrap: wrap; margin-bottom: 1.5rem; align-items: center; }
  .search-wrap { position: relative; flex: 1; min-width: 180px; max-width: 280px; }
  .search-wrap input {
    width: 100%; background: var(--bg2); border: 1px solid var(--border2);
    border-radius: 8px; padding: 7px 12px 7px 32px; color: var(--text);
    font-family: 'JetBrains Mono', monospace; font-size: .8rem; outline: none;
    transition: border-color .2s;
  }
  .search-wrap input:focus { border-color: var(--accent); }
  .search-wrap input::placeholder { color: var(--text2); }
  .search-icon { position: absolute; left: 10px; top: 50%; transform: translateY(-50%); color: var(--text2); font-size: .85rem; pointer-events: none; }

  .cat-filters { display: flex; flex-wrap: wrap; gap: 6px; margin-bottom: 1.25rem; }
  .cat-pill {
    padding: 4px 12px; border-radius: 20px; border: 1px solid var(--border2);
    background: transparent; color: var(--text2); font-size: .75rem;
    font-family: 'Space Grotesk', sans-serif; cursor: pointer; transition: all .15s;
  }
  .cat-pill:hover { border-color: var(--accent); color: var(--accent2); }
  .cat-pill.active { background: var(--accent); color: #fff; border-color: var(--accent); font-weight: 500; }

  .action-btns { display: flex; gap: .5rem; flex-wrap: wrap; margin-bottom: 1.75rem; }
  .btn {
    padding: 6px 14px; border-radius: 7px; font-size: .78rem; font-family: 'JetBrains Mono', monospace;
    cursor: pointer; transition: all .15s; border: 1px solid var(--border2);
    background: var(--bg2); color: var(--text2);
  }
  .btn:hover { border-color: var(--accent); color: var(--accent2); }
  .btn.primary { background: var(--accent); border-color: var(--accent); color: #fff; font-weight: 500; }
  .btn.primary:hover { background: var(--accent2); border-color: var(--accent2); }

  .section { margin-bottom: 1.75rem; }
  .section-label {
    font-family: 'JetBrains Mono', monospace; font-size: .68rem; font-weight: 600;
    color: var(--text2); letter-spacing: .1em; text-transform: uppercase;
    margin-bottom: .65rem; display: flex; align-items: center; gap: 8px;
  }
  .section-label::after { content: ''; flex: 1; height: 1px; background: var(--border); }

  .badges { display: flex; flex-wrap: wrap; gap: 8px; }
  .badge-item {
    cursor: pointer; position: relative; border-radius: 5px;
    border: 1px solid transparent; padding: 3px;
    transition: border-color .15s, transform .1s;
  }
  .badge-item:hover { border-color: var(--accent); transform: translateY(-1px); }
  .badge-item:active { transform: scale(.97); }
  .badge-item img { display: block; height: 24px; border-radius: 3px; }

  .toast {
    position: fixed; bottom: 1.5rem; left: 50%; transform: translateX(-50%);
    background: var(--bg3); border: 1px solid var(--border2);
    border-radius: 8px; padding: 9px 18px;
    font-family: 'JetBrains Mono', monospace; font-size: .78rem; color: var(--green);
    opacity: 0; pointer-events: none; transition: opacity .2s; z-index: 999;
    white-space: nowrap;
  }
  .toast.show { opacity: 1; }

  .empty { font-size: .85rem; color: var(--text2); padding: 1.5rem 0; font-family: 'JetBrains Mono', monospace; }

  .counter { font-family: 'JetBrains Mono', monospace; font-size: .72rem; color: var(--text2); padding: 4px 8px; background: var(--bg2); border-radius: 6px; border: 1px solid var(--border); }
</style>
</head>
<body>

<header>
  <div class="header-top">
    <h1>// badge_generator.sh</h1>
    <span class="subtitle">@Akshithsurya</span>
  </div>
  <p class="hint">Click any badge to copy its markdown &mdash; or use <span>Copy All</span> for the full README block.</p>
</header>

<div class="controls">
  <div class="search-wrap">
    <span class="search-icon">⌕</span>
    <input type="text" id="search" placeholder="Search badges…" oninput="onSearch(this.value)">
  </div>
  <span class="counter" id="counter">— badges</span>
</div>

<div class="cat-filters" id="cats"></div>

<div class="action-btns">
  <button class="btn primary" onclick="copyAll()">Copy all markdown ↗</button>
  <button class="btn" onclick="copyVisible()">Copy visible ↗</button>
  <button class="btn" onclick="clearSearch()">Reset filters</button>
</div>

<div id="sections"></div>
<div class="toast" id="toast"></div>

<script>
const BADGES = {
  "Languages": [
    ["C","C","A8B9CC","c"],
    ["C++","C++","00599C","cplusplus"],
    ["C#","C%23","239120","csharp"],
    ["Python","Python","3776AB","python"],
    ["JavaScript","JavaScript","F7DF1E","javascript","000000"],
    ["TypeScript","TypeScript","3178C6","typescript"],
    ["Go","Go","00ADD8","go"],
    ["Lua","Lua","2C2D72","lua"],
    ["Bash","Bash Script","4EAA25","gnubash"],
    ["Assembly","AssemblyScript","6E4C13","assemblyscript","ffffff"],
    ["Zig","Zig","F7A41D","zig","000000"],
    ["HTML5","HTML5","E34F26","html5"],
    ["CSS3","CSS3","1572B6","css3"],
    ["PowerShell","PowerShell","5391FE","powershell"],
  ],
  "Frameworks & Libraries": [
    ["React","React","20232A","react","61DAFB"],
    ["Vue.js","Vue.js","4FC08D","vuedotjs"],
    ["Three.js","Three.js","000000","threedotjs"],
    ["Next.js","Next.js","000000","nextdotjs"],
    ["Node.js","Node.js","5FA04E","nodedotjs"],
    ["Angular","Angular","0F0F11","angular"],
    ["TailwindCSS","TailwindCSS","06B6D4","tailwindcss"],
    ["Vite","Vite","646CFF","vite"],
    ["Flask","Flask","000000","flask"],
    ["Django","Django","092E20","django"],
    ["TensorFlow","TensorFlow","FF6F00","tensorflow"],
    ["PyTorch","PyTorch","EE4C2C","pytorch"],
    ["Pandas","Pandas","150458","pandas"],
    ["NumPy","NumPy","013243","numpy"],
    ["Matplotlib","Matplotlib","11557C","matplotlib"],
    ["SciPy","SciPy","8CAAE6","scipy"],
    ["React Native","React Native","20232A","react","61DAFB"],
  ],
  "Cloud & DevOps": [
    ["AWS","AWS","FF9900","amazonwebservices","000000"],
    ["GoogleCloud","Google Cloud","4285F4","googlecloud"],
    ["Cloudflare","Cloudflare","F38020","cloudflare"],
    ["Netlify","Netlify","00C7B7","netlify"],
    ["Vercel","Vercel","000000","vercel"],
    ["Docker","Docker","2496ED","docker"],
    ["GitHub Actions","GitHub Actions","2088FF","githubactions"],
    ["Firebase","Firebase","DD2C00","firebase"],
    ["MongoDB","MongoDB","47A248","mongodb"],
    ["MySQL","MySQL","4479A1","mysql"],
    ["Linux","Linux","FCC624","linux","000000"],
  ],
  "Hardware & IoT": [
    ["Arduino","Arduino","00878A","arduino"],
    ["ESP32","ESP32","E7352C","espressif"],
    ["ESP8266","ESP8266","E7352C","espressif"],
    ["Raspberry Pi","Raspberry Pi","A22846","raspberrypi"],
    ["Zigbee","Zigbee","EB0443","zigbee"],
  ],
  "Cybersecurity": [
    ["Kali Linux","Kali Linux","557C94","kalilinux"],
    ["Metasploit","Metasploit","2596CD","metasploit"],
    ["MSFconsole","MSFconsole","2596CD","metasploit"],
    ["Nmap","Nmap","004170","nmap","ffffff"],
    ["Netcat","Netcat-nc","000000","gnu","ffffff"],
    ["Wireshark","Wireshark","1679A7","wireshark"],
    ["Burp Suite","Burp Suite","FF6633","portswigger"],
    ["Tor","Tor","7D4698","torproject"],
    ["Bash","Bash","4EAA25","gnubash"],
  ],
  "Tools & Platforms": [
    ["Git","Git","F05032","git"],
    ["GitHub","GitHub","181717","github"],
    ["GitLab","GitLab","FC6D26","gitlab"],
    ["Figma","Figma","F24E1E","figma"],
    ["Canva","Canva","00C4CC","canva"],
    ["Notion","Notion","000000","notion"],
    ["VSCode","VS Code","007ACC","visualstudiocode"],
    ["GIMP","GIMP","5C5543","gimp"],
    ["Krita","Krita","203759","krita"],
  ],
  "Game Dev": [
    ["Godot","Godot","478CBF","godotengine"],
    ["Unity","Unity","000000","unity"],
    ["Unreal Engine","Unreal Engine","0E1128","unrealengine"],
    ["Steam","Steam","000000","steam"],
  ],
  "Science & Astro": [
    ["Astropy","Astropy","3A3B6E","astropy","ffffff"],
    ["Jupyter","Jupyter","F37626","jupyter"],
    ["NASA","NASA","E03C31","nasa"],
    ["OpenCV","OpenCV","5C3EE8","opencv"],
    ["Keras","Keras","D00000","keras"],
    ["Plotly","Plotly","3F4F75","plotly"],
    ["Streamlit","Streamlit","FF4B4B","streamlit"],
    ["NumPy","NumPy","013243","numpy"],
    ["Matplotlib","Matplotlib","11557C","matplotlib"],
  ],
};

let activeFilter = "All";
let searchTerm = "";

function badgeUrl(id, color, logo, logoColor = "white") {
  return `https://img.shields.io/badge/${encodeURIComponent(id)}-${color}?style=for-the-badge&logo=${logo}&logoColor=${logoColor}`;
}
function badgeMd(label, id, color, logo, logoColor = "white") {
  return `![${label}](${badgeUrl(id, color, logo, logoColor)})`;
}

function build() {
  const cDiv = document.getElementById("cats");
  const sDiv = document.getElementById("sections");
  const cats = ["All", ...Object.keys(BADGES)];

  cDiv.innerHTML = cats.map(c =>
    `<button class="cat-pill${c === activeFilter ? " active" : ""}" onclick="setFilter('${c}')">${c}</button>`
  ).join("");

  let total = 0;
  let html = "";
  for (const [cat, items] of Object.entries(BADGES)) {
    if (activeFilter !== "All" && activeFilter !== cat) continue;
    const visible = searchTerm
      ? items.filter(b => b[1].toLowerCase().includes(searchTerm) || b[0].toLowerCase().includes(searchTerm))
      : items;
    if (!visible.length) continue;
    total += visible.length;
    html += `<div class="section" data-cat="${cat}">
      <div class="section-label">${cat}</div>
      <div class="badges">${visible.map(b => {
        const [id, label, color, logo, lc = "white"] = b;
        const url = badgeUrl(id, color, logo, lc);
        return `<div class="badge-item" title="${label} — click to copy" onclick="copyBadge('${label}','${id}','${color}','${logo}','${lc}')">
          <img src="${url}" alt="${label}" loading="lazy">
        </div>`;
      }).join("")}</div>
    </div>`;
  }

  document.getElementById("counter").textContent = `${total} badges`;
  sDiv.innerHTML = html || `<p class="empty">// no results for "${searchTerm}"</p>`;
}

function setFilter(f) { activeFilter = f; build(); }
function onSearch(v) { searchTerm = v.toLowerCase(); build(); }
function clearSearch() {
  searchTerm = "";
  activeFilter = "All";
  document.getElementById("search").value = "";
  build();
}

function showToast(msg) {
  const t = document.getElementById("toast");
  t.textContent = msg;
  t.classList.add("show");
  setTimeout(() => t.classList.remove("show"), 1800);
}

function copyBadge(label, id, color, logo, lc) {
  const md = badgeMd(label, id, color, logo, lc);
  navigator.clipboard.writeText(md).then(() => showToast(`✓ Copied ${label}`));
}

function copyAll() {
  let md = "";
  for (const [cat, items] of Object.entries(BADGES)) {
    md += `<!-- ${cat} -->\n`;
    md += items.map(b => badgeMd(b[1], b[0], b[2], b[3], b[4] || "white")).join(" ") + "\n\n";
  }
  navigator.clipboard.writeText(md.trim()).then(() => showToast("✓ All badges copied!"));
}

function copyVisible() {
  let lines = [];
  document.querySelectorAll(".section").forEach(sec => {
    const imgs = sec.querySelectorAll(".badge-item img");
    const row = Array.from(imgs).map(img => `![${img.alt}](${img.src})`).join(" ");
    if (row) lines.push(row);
  });
  navigator.clipboard.writeText(lines.join("\n\n")).then(() => showToast("✓ Visible badges copied!"));
}

build();
</script>
</body>
</html>
# 📊 GitHub Stats:
![](https://github-readme-stats.shion.dev/api?username=Akshithsurya&theme=tokyonight&hide_border=false&include_all_commits=true&count_private=true)<br/>
![](https://streak-stats.demolab.com/?user=Akshithsurya&theme=tokyonight&hide_border=false)<br/>
![](https://github-readme-stats.shion.dev/api/top-langs/?username=Akshithsurya&theme=tokyonight&hide_border=false&include_all_commits=true&count_private=true&layout=compact)

### 🔝 Top Contributed Repo
![](https://github-contributor-stats.vercel.app/api?username=Akshithsurya&limit=5&theme=dark&combine_all_yearly_contributions=true)

---
[![](https://komarev.com/ghpvc/?username=Akshithsurya&icon=0&color=0)](https://visitcount.itsvg.in)

<!-- Proudly created with GPRM ( https://gprm.itsvg.in ) -->
