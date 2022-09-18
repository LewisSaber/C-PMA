const fs = require("fs");

function removeInfolder(path) {
 /**@type {Array} */
 var files = fs.readdirSync(path);

 files.forEach((file) => {
  if (fs.statSync(path + file).isFile()) {
   if (!/(\.cpp|\.h|\.js)/gm.test(file)) {
    console.log(file);
    fs.unlinkSync(path + file);
   }
  } else {
   const newPath = path + file;
   ///(.vs)/gm.test(newPath) ||
   if (isEmpty(newPath)) {
    console.log("removing", newPath);
    fs.rmdir(newPath, () => {});
   } else removeInfolder(newPath + "/");
  }
 });
}
function isEmpty(path) {
 return fs.readdirSync(path).length === 0;
}

removeInfolder("./");
