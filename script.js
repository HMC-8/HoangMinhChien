// Lưu trữ trạng thái nhạc
let musicPlaying = true;

// Hàm để tắt hoặc bật nhạc
function toggleMusic() {
    const music = document.getElementById('background-music');
    const button = document.getElementById('toggle-music');
    
    if (musicPlaying) {
        music.pause(); // Tắt nhạc
        button.textContent = 'Bật Nhạc'; // Cập nhật văn bản nút
    } else {
        music.play(); // Bật nhạc
        button.textContent = 'Tắt Nhạc'; // Cập nhật văn bản nút
    }
    musicPlaying = !musicPlaying; // Đảo ngược trạng thái nhạc
}

// Thêm sự kiện click cho nút
document.getElementById('toggle-music').addEventListener('click', toggleMusic);
