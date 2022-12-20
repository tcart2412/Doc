const content = document.getElementById("content");
const date = document.getElementById("date");
const time = document.getElementById("time");
const addBtn = document.getElementById("addBtn");
const deleteBtn = document.getElementById("deleteBtn");
const list = document.getElementById("list");

const arr = [];
function render () {
    let htmlStr = "";
    arr.forEach(function (item) {
        htmlStr += `
        <div class="item">
            <p>Content : ${item.content}</p>
            <p>Time : ${item.date} / ${item.time}</p>
        </div>
        <hr>
        `
    })
    list.innerHTML = htmlStr;
}
addBtn.addEventListener("click", function () {
    arr.unshift({
        content: content.value,
        date: date.value,
        time: time.value
    })
    render();
})

deleteBtn.addEventListener("click", function () {
    arr.shift({
        content: content.value,
        date: date.value,
        time: time.value
    })
    render();
})