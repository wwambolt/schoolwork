const http = require('http');
const fs = require('fs');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    fs.readFile('index_madlib_js_full.html', (err, html) => {
        if(err){
            throw err;
        } else {
            res.statusCode = 200;
            res.setHeader('Content-type', 'text/html');
            res.write(html);
            res.end();
        };
    });
});

server.listen(port, hostname, () => {
    console.log('Server started on port '  + port);
});
