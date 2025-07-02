VoicePlay("Z362200000_22_000");
MsgDisp("Hikaru","Wanna ask anything else?");
MsgSel("Yes, I do.","No, that's all.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
