MsgClear();
MsgSel("Me too...","...I'm sorry.");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
