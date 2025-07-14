MsgDisp("主人公","Eh, what's everyone up to?");
ChEye(6,0);
ChMouth(6,0);
VoicePlay("D140600000_06_010");
MsgDisp("Himuro","We're going to the school cafeteria now,
are you going as well?");
MsgSel("Yeah, I'll go!","Sorry, I feel like being alone today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
