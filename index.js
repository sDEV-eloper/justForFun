function curryAdd(a) {
    return function (b=a) {
      return a + b;
    };
  }
  
  console.log(curryAdd(2)()); 
  