MsgDisp("主人公","Ah, ｛みちる＊｝,
｛ひかる＊｝.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("D140D00000_22_000");
MsgDisp("Hikaru","Hey hey, have lunch with us♪");
MsgSel("Yeah, let's go!","Sorry, I want to eat lunch on my own today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
