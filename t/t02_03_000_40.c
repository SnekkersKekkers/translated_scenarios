MsgClear();
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgSel("Are you really okay with me?","I'm sorry...");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
