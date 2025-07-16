switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for taking me.
Does ｛柊＊＊＊｝ have to work
after this?");
    ChMotion(5,0);
    VoicePlay("S120500001_05_050");
    MsgDisp("Hiiragi","Yeah.
Greeting everyone at the beginning of the
New Year is an important job.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("S120500001_05_060");
    MsgDisp("Hiiragi","You're the first one so far.
Goodbye.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Hehe, look like this year will be another
good year!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for taking me.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500001_05_120");
    MsgDisp("Hiiragi","The pleasure is all mine.
Thank you for going out with me.");
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("S120500001_05_130");
    MsgDisp("Hiiragi","I wish we could have taken our time a bit
more.");
    MsgDisp("主人公","I can't keep the Chairman all to myself on
New Years.");
    ChEye(5,4);
    ChMotion(5,2);
    VoicePlay("S120500001_05_140");
    MsgDisp("Hiiragi","Ha, you're so kind.
But——");
    ChMotion(5,0);
    VoicePlay("S120500001_05_150");
    MsgDisp("Hiiragi","Even if you can't, I think I would want
you to.");
    MsgDisp("主人公","Uhm......");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("S120500001_05_160");
    MsgDisp("Hiiragi","Joking.
Happy New Years.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(......
Should I try being a bit more selfish this
year?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
