MsgClear();
MsgSel("If you're really okay with me......","I'm sorry......");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
