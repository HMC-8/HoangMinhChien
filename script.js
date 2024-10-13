const music = document.getElementById('background-music');
const toggleButton = document.getElementById('toggle-music');

toggleButton.addEventListener('click', () => {
    if (music.muted) {
        music.muted = false; // Bật âm thanh
        toggleButton.textContent = 'Tắt Nhạc'; // Đổi nội dung nút
    } else {
        music.muted = true; // Tắt âm thanh
        toggleButton.textContent = 'Bật Nhạc'; // Đổi nội dung nút
    }
});
