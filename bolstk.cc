bool Identical(stacktype<int> s1, stacktype<int> s2) {
   int lh, rh;
   int ret = 0;
   if ( (lh = s1.pop()) == (rh = s2.pop()) ) {       
       if ( !s1.isEmptyStack() and !s2.isEmptyStack() )
           return Identical(s1, s2);
       else
           ret = 1;  
   }
   s1.push(lh);
   s2.push(rh);
   return ret;
}
