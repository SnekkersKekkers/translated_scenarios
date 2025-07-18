MsgSel("Yes, let's go!","I'll be a bit busy that day ...");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
