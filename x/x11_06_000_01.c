switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600001_06_000");
    MsgDisp("Himuro","All the athletes at the track and 
field meet were in good shape.
Thank you for your hard work.");
    MsgDisp("主人公","Yeah, thanks!");
    MsgDisp("主人公","(I'm glad we got good results!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600001_06_010");
    MsgDisp("Himuro","Apparently all the athletes at
the track and field meet got good
record times.");
    MsgDisp("主人公","｛氷室＊＊｝.
Yeah, that's right!");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("X110600001_06_020");
    MsgDisp("Himuro","This result wouldn't have been achieved
without your consistent support.
Congratulations.");
    MsgDisp("主人公","(I was praised by ｛氷室＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
