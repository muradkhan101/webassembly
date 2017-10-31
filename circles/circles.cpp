int[] findIndices(arr, length, startInd, width, dist, maxDist, indArr=[]) {
    if (dist > maxDist || indArr.indexOf(startInd)>=0) {
      return null;
  }
    else {
      indArr.push(startInd);
  }
    // Checks if pixel is in first row of pixels
    if (startInd < width*4) {
      if (startInd === 0) { //Top left corner
        findIndices(arr, startInd+4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+width*4, width, dist+1, maxDist, indArr);
      }
      else if (startInd === 4*(width-1)) { //Top right corner
        findIndices(arr, startInd-4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+width*4, width, dist+1, maxDist, indArr);
      }
      else {
        findIndices(arr, startInd-4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+width*4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+4, width, dist+1, maxDist, indArr);
      }
    }
    // Checks for left edge cases
    else if (startInd % (width*4) === 0) {
      if (startInd === length - width*4) { //Bottom left corner
        findIndices(arr, startInd-width*4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+4, width, dist+1, maxDist, indArr);
      }
      else {
        findIndices(arr, startInd-width*4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+width*4, width, dist+1, maxDist, indArr);
      }
    }
    //Checks is pixel is in last row
    else if (startInd > length - 4*width) {
      if (startInd === length-4) { //Bottom right corner
        findIndices(arr, startInd-width*4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd-4, width, dist+1, maxDist, indArr);
      }
      else {
        findIndices(arr, startInd-width*4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd-4, width, dist+1, maxDist, indArr);
        findIndices(arr, startInd+4, width, dist+1, maxDist, indArr);
      }
    }
    //Checks for right edge cases
    else if (startInd % (4*(width-1))) {
      findIndices(arr, startInd-width*4, width, dist+1, maxDist, indArr);
      findIndices(arr, startInd-4, width, dist+1, maxDist, indArr);
      findIndices(arr, startInd+width*4, width, dist+1, maxDist, indArr);
    }
    else {
      findIndices(arr, startInd-width*4, width, dist+1, maxDist, indArr);
      findIndices(arr, startInd-4, width, dist+1, maxDist, indArr);
      findIndices(arr, startInd+width*4, width, dist+1, maxDist, indArr);
      findIndices(arr, startInd+4, width, dist+1, maxDist, indArr);
    }
  return indArr;
}
