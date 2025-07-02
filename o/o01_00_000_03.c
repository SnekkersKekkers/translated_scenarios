MsgSel("Tug of war.","Three-legged race.","Ball toss.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Yeah, let's do the tug of war!");
    MsgClose();
    break ;
    case 1:
    MsgDisp("主人公","Yeah, let's do the three-legged race!");
    break ;
    case 2:
    MsgDisp("主人公","Yeah, let's do the ball toss!");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
