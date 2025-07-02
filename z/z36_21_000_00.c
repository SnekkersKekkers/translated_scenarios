VoicePlay("Z362100000_21_000");
MsgDisp("Michiru","Do you have any other questions?");
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
