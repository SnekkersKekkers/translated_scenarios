ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    ScrFadeIn(0);
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("H180500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Did you come to support us?");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("H180500000_05_010");
    MsgDisp("Hiiragi","Should I not have?");
    MsgDisp("主人公","No, it makes me happy you did.
Thanks for coming even though you're busy,
｛柊＊＊＊｝.");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("H180500000_05_020");
    MsgDisp("Hiiragi","It's my pleasure.
Koshien is your big stage, and so I will
be here to watch.");
    ChEye(5,4);
    ChMouth(5,3);
    VoicePlay("H180500000_05_030");
    MsgDisp("Hiiragi","Now, it's your time.
Go on.");
    MsgDisp("主人公","Yes!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
