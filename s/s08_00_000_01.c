MsgSel("Love Success","Health Success","School Success");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","The focus is...");
    break ;
    case 1:
    MsgDisp("主人公","I want to be healthy this year.");
    break ;
    case 2:
    MsgDisp("主人公","I hope my grades improve.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
