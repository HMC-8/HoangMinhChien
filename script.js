// Hiện thị nội dung sau khi loading
window.onload = function() {
    document.getElementById('loading').style.display = 'none'; // Ẩn loading
    document.querySelector('.container').style.display = 'block'; // Hiện nội dung chính
    document.getElementById('background-music').play(); // Phát nhạc nền tự động
};
