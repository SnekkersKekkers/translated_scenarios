MsgDisp("主人公","Well then.
Who should I go to the shrine with?");
MsgSel("Invite a boy","Go alone");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Who should I invite......");
    break ;
    case 1:
    MsgDisp("主人公","I guess alone is best.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
