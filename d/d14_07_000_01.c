MsgDisp("主人公","Ah, ｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
VoicePlay("D140700000_07_010");
MsgDisp("Mikage","I'm having lunch with these guys.
Want to join us?");
MsgSel("I want to!","I want to be alone today...");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
