switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300001_03_000");
    MsgDisp("Honda","Track and field meet, I heard all the
athletes did well.
Thanks for your support!");
    MsgDisp("主人公","Yeah, thanks!");
    MsgDisp("主人公","(I'm glad it turned out well!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,254,5,3,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300001_03_010");
    MsgDisp("Honda","I heard it!
The track and field team, they said many
new records were set.");
    MsgDisp("主人公","｛本多＊＊｝.
Yeah, I know!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("X110300001_03_020");
    MsgDisp("Honda","When you are happy with me like that, I
feel like I can do my best.
Thanks for your support and hard work!");
    MsgDisp("主人公","(I was praised by ｛本多＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
