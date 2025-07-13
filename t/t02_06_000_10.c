MsgClear();
MsgSel("I like you too...","(Respond with a kiss)","This is so sudden...");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
