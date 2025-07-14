switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,5);
    VoicePlay("L040700002_07_000");
    MsgDisp("Mikage","Hey, this is expensive, isn't it?");
    MsgDisp("主人公","I got a little excited.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("L040700002_07_010");
    MsgDisp("Mikage","I'm happy you feel that way, but-");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("L040700002_07_020");
    MsgDisp("Mikage","You did your best to get this.
I'm happy.");
    MsgDisp("主人公","Yes, please eat it.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700002_07_030");
    MsgDisp("Mikage","I'll eat it gratefully, okay?");
    MsgDisp("主人公","(Yeah, he seemed happy.)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,4);
    ChMotion(7,5);
    VoicePlay("L040700002_07_040");
    MsgDisp("Mikage","Hey, you got a little too
excited.");
    MsgDisp("主人公","I put in all my grateful feelings for
｛御影＊＊｝.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700002_07_050");
    MsgDisp("Mikage","Haha, I see......");
    MsgDisp("主人公","Thank you for everything!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700002_07_060");
    MsgDisp("Mikage","Got it. I won't say any more rude things.
Thanks!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    ChEyeOpenLevel(7,7);
    VoicePlay("L040700002_07_070");
    MsgDisp("Mikage","Your feelings definitely
got through.");
    MsgDisp("主人公","(Yeah, he seemed happy.
Thank goodness!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    ChEyeOpenLevel(7,#1);
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,5);
    VoicePlay("L040700002_07_080");
    MsgDisp("Mikage","Amazing......
You're giving this to me?");
    MsgDisp("主人公","Yes. I did my best to show my
thankfulness!");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("L040700002_07_090");
    MsgDisp("Mikage","Don't worry too much about that.
Man, I might cry.
I'm happy to hear this from you.");
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700002_07_100");
    MsgDisp("Mikage","I'll follow your lead, and eat this
proudly in the faculty room.");
    MsgDisp("主人公","Huh?
Won't Himuro-sensei scold you......?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700002_07_110");
    MsgDisp("Mikage","It's fine. I'll eat it sneakily. Though,
it feels wrong to do that considering you
put your all into it.");
    MsgDisp("主人公","(Thank goodness!
｛御影＊＊｝ seemed happy.
But will he be fine......?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
