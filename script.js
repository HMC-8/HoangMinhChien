const audio = document.getElementById('background-music');
const toggleButton = document.getElementById('toggle-music-button');
const nameElement = document.getElementById('name');
const profileImg = document.getElementById('profile-img');
let isPlaying = false;

// Tạo Audio Context và Analyser
const audioContext = new (window.AudioContext || window.webkitAudioContext)();
const analyser = audioContext.createAnalyser();
const source = audioContext.createMediaElementSource(audio);
source.connect(analyser);
analyser.connect(audioContext.destination);

analyser.fftSize = 256; // Kích thước FFT
const bufferLength = analyser.frequencyBinCount;
const dataArray = new Uint8Array(bufferLength);

// Hàm để cập nhật hiệu ứng chói sáng theo âm thanh
function updateGlow() {
    analyser.getByteFrequencyData(dataArray);
    let average = dataArray.reduce((sum, value) => sum + value) / dataArray.length;
    
    // Điều chỉnh độ sáng theo âm lượng
    const glowStrength = Math.min(Math.max(average / 100, 0), 1);
    const glowClass = glowStrength > 0.1 ? 'glow' : '';
    
    nameElement.className = `name ${glowClass}`;
    profileImg.className = `profile-img ${glowClass}`;
    
    requestAnimationFrame(updateGlow); // Gọi lại hàm để cập nhật liên tục
}

// Xử lý sự kiện bật/tắt nhạc
toggleButton.addEventListener('click', function() {
    if (isPlaying) {
        audio.pause();
        toggleButton.textContent = 'Bật nhạc "Tuyệt nàng đi"';
        nameElement.classList.remove('glow');
        profileImg.classList.remove('glow');
    } else {
        audio.play();
        toggleButton.textContent = 'Tắt nhạc';
        updateGlow(); // Bắt đầu cập nhật hiệu ứng chói sáng
    }
    isPlaying = !isPlaying;
});
