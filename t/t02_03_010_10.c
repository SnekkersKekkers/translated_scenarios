MsgClear();
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgSel("Yes, me too……","(Answer with a kiss)","……I'm sorry.");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
