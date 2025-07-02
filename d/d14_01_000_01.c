MsgDisp("主人公","Ah, what are you all up to?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D140100000_01_010");
MsgDisp("Kazama","We're going to the school cafeteria, 
are you coming too?");
MsgSel("Yeah, I'll go!","Sorry, I'd like to be by myself today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
