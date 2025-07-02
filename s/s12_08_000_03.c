switch (ChPrmGet(8,6)){
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
    ChLayout(1);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S120800003_08_000");
    MsgDisp("Shirahane","This year, I decided to give 
Nee-chan a gift, and it's already over.");
    MsgDisp("主人公","That's right.
Thank you for taking me.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800003_08_010");
    MsgDisp("Shirahane","You're welcome.
I'll have to tell this story at work.");
    MsgDisp("主人公","Hehe, yeah!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("S120800003_08_020");
    MsgDisp("Shirahane","Remember this year, don't eat too
much rice cake, okay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(Another New Year.
I hope this year is a good one......)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for walking me home.");
    VoicePlay("S120800003_08_030");
    MsgDisp("Shirahane","No problem.
I had a good time too.");
    MsgDisp("主人公","Hehe.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S120800003_08_040");
    MsgDisp("Shirahane","Haha.
As long as we're laughing together,
that's good enough.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800003_08_050");
    MsgDisp("Shirahane","Okay, seeya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(Another New Year.
I hope this year is a good one......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
