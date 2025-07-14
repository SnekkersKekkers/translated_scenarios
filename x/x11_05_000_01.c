switch (ChPrmGet(5,6)){
    case 3:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500001_05_000");
    MsgDisp("Hiiragi","I heard some good results came out of the
practice relay? The Haba Academy
track-and-field club is in perfect form.");
    MsgDisp("主人公","Hehe, thank you!");
    MsgDisp("主人公","(I'm glad I gave it my all...!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500001_05_010");
    MsgDisp("Hiiragi","Apparently every athlete came out with
good record times from this practice
relay.");
    MsgDisp("主人公","Yeah, that's right!");
    ChEye(5,4);
    VoicePlay("X110500001_05_020");
    MsgDisp("Hiiragi","You look content.
It's all because of your support.
The athletes are happy too.");
    MsgDisp("主人公","(Yay! I was praised by ｛柊＊＊＊｝ )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
