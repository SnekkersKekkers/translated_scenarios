BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_660");
    Wait(50,0);
    MsgDisp("主人公","......Hm?
The gas flap isn't opening......");
    VoicePlay("I660800003_45_000");
    MsgDisp("Woman Customer","Are you good?
Don't scratch it, okay?");
    SEPlay("EV_SE_660");
    SEWait();
    MsgDisp("主人公","I, I'm sorry.
Right away......");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,4,10,#1,0,0);
    VoicePlay("I660800003_08_000");
    MsgDisp("Shirahane","Leave it t'me.");
    SEPlay("EV_SE_661",0,0.9,0.2);
    MsgDisp("","(Click)");
    ChEye(8,3);
    ChMouth(8,3);
    VoicePlay("I660800003_08_010");
    MsgDisp("Shirahane","Alright, we'll start refueling.");
    MsgDisp("主人公","｛大地＊＊｝, thanks......");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800003_08_020");
    MsgDisp("Shirahane","I've broken puzzle rings before by rushing
through them...... It ain't good to rush
things. 'Kay?");
    MsgDisp("主人公","(Haa......
I messed up......)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_660");
    SEWait();
    MsgDisp("主人公","......Hm?
The gas flap isn't opening......");
    VoicePlay("I660800003_45_010");
    MsgDisp("Woman Customer","......Hey, are you okay?
Don't force it open, okay?");
    SEPlay("EV_SE_660");
    SEWait();
    MsgDisp("主人公","I, I'm sorry.
Right away......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    VoicePlay("I660800003_08_030");
    MsgDisp("Shirahane","Look closer.");
    MsgDisp("主人公","......Ah!");
    ChEye(8,3);
    ChMouth(8,3);
    ChEyeOpenLevel(8,0);
    MsgDisp("主人公","Excuse me, miss.
It seems that the flap is still locked,
could you try unlocking it once more?");
    VoicePlay("I660800003_45_020");
    MsgDisp("Woman Customer","Ah...... sorry! I thought that it was
unlocked......");
    SEPlay("EV_SE_661");
    SEWait();
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800003_08_040");
    MsgDisp("Shirahane","Yeah, that's good.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("I660800003_08_050");
    MsgDisp("Shirahane","It's easier t'see the cause if ya slow
down and look properly.
You can do it, yeah?");
    MsgDisp("主人公","(｛大地＊＊｝...... Yeah, let's look
carefully.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
