MsgClear();
MsgSel("Me too……","(Answer with a kiss)","I'm sorry……");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
