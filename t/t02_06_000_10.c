MsgClear();
MsgSel("Me too...","(Answer with a kiss)","Even if you say that so suddenly...");
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
