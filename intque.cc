int getLength(QueueType queue){
int lenght=0,i;
QueueType temp;
Type c;
//get last element
c = queue.last();
//loop through elements
// look for length
for(i = 1;c != NULL;i++ ){
  temp.push(c);
  queue.pop();
  c = queue.last();
}
length = i;
// Look for past queue
c = temp.last();
// Set last
for(i = 1;c != NULL;i++){
  queue.push(c);
  temp.pop();
  c = temp.last();
}
delete[] temp;
return length;
}
