MsgDisp("主人公","What's eveeyone up to?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
VoicePlay("D140200000_02_010");
MsgDisp("Sassa","We're going to the school cafeteria.
How about you?");
MsgSel("Yeah, let's go together!","Sorry, I want to be by myself today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
