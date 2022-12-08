var fs = require('fs'),
http = require('http'),
https = require('https');
var Stream = require('stream').Transform;
var downloadImageFromURL = (url, filename, callback) => {
    var client = http;
    if (url.toString().indexOf("https") === 0){
      client = https;
     }
  
    client.request(url, function(response) {                                        
      var data = new Stream();                                                    
      response.on('data', function(chunk) {                                       
         data.push(chunk);                                                         
      });                                                                         
      
      response.on('end', function() {                                             
         fs.writeFileSync(`./imgs/${filename}`, data.read());                               
      });                                                                         
   }).end();
};
// 

async function dateData(url ,cb) {
    let data = []
    https.get(url, (res) => {
        res.on('data', chunk => {
            data.push(chunk);
        });
        res.on("end", () => {
            data = JSON.parse(Buffer.concat(data).toString())
             cb(data);
        })
    })

}
downloadImageFromURL("https://via.placeholder.com/600/6dd9cb", "title.png");
// dateData('https://jsonplaceholder.typicode.com/photos', data => {
//     //  console.log(data);
//     for (img of data) {
//         // console.log(img); 
//         let title = img.title.split(" ").join("-")+ ".png"
//     console.log(img);
//         // downloadImageFromURL(img.url, title);
//     }
//  })
