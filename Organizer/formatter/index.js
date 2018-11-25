class Formatter{
    constructor(params){
        this.params = params;
    }

    ConverToHtmlTag() {
        console.log(this.params);
    }
}



let tagEl = document.getElementById("tag").value;
let classEl = document.getElementById("class").value;
let nameEl = document.getElementById("name").value;
let idEl = document.getElementById("id").value;
let delimiterEl = document.getElementById("delimiter").value;
let inputEl = document.getElementById("input").value;
let output = document.getElementById("output");

let params = 
    '{"tag":'+tagEl+',"class":classEl+","name":nameEl+",id:"+idEl+",delimiter:"+delimiterEl+",input:"+inputEl+",output:"+output}';
params = JSON.parse(params);

let formatter = new Formatter(params);

document.getElementById("inTag").addEventListener("click",function(){
    console.log("###");
    console.log(params);
    formatter.ConverToHtmlTag();
});


 