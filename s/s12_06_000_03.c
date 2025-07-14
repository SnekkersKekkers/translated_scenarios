switch (ChPrmGet(6,6)){
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
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thanks for going with me.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600001_06_050");
    MsgDisp("Himuro","You are most welcome.
See you later...and Happy New Year.");
    MsgDisp("主人公","The same to you!");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(We're going to have another good
year!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120600001_06_080");
    MsgDisp("Himuro","Well, thanks again for today.");
    MsgDisp("主人公","Thank you too.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600001_06_090");
    MsgDisp("Himuro","This was a great way to start the New
Year.");
    MsgDisp("主人公","Hehe, I think so too!
I wish you a Happy New Year.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("S120600001_06_100");
    MsgDisp("Himuro","Same here.
Well, see you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(We'll have another great year!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
