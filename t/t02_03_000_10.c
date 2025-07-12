MsgClear();
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgSel("Me too……","(Answer with a kiss)","Even if you say that so suddenly……");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
