MsgSel("Yes, by all means!" , "I'll be a little bit busy that day ...");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
