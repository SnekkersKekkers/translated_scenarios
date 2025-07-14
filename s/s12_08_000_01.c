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
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for coming with me.");
    ChMotion(8,3);
    VoicePlay("S120800001_08_000");
    MsgDisp("Shirahane","No problem.
I had fun walking you home too!");
    MsgDisp("主人公","Hehe, yep.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S120800001_08_010");
    MsgDisp("Shirahane","See you later.
Let's have another great year!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(I hope this year goes well......)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,4);
    ChEyeOpenLevel(8,10);
    ScrFadeIn(0);
    VoicePlay("S120800001_08_020");
    MsgDisp("Shirahane","......It's already time.");
    MsgDisp("主人公","Yep.
Thanks for taking me back.");
    ChEye(8,4);
    ChMouth(8,4);
    ChMouthOpenLevel(8,0);
    VoicePlay("S120800001_08_030");
    MsgDisp("Shirahane","............");
    ChEye(8,4);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("S120800001_08_040");
    MsgDisp("Shirahane","Can I call you again sometime?");
    MsgDisp("主人公","Sure.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800001_08_050");
    MsgDisp("Shirahane","Yes! If you're sure about that, see you
soon!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(I hope this year will be as good as last
year......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
