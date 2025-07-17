BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Alright, alright...");
    VoicePlay("I660800000_39_000");
    MsgDisp("Male Customer","Wait, wait!");
    MsgDisp("主人公","Huh?");
    VoicePlay("I660800000_39_010");
    MsgDisp("Male Customer","There's a car over here, too, so be
careful.");
    MsgDisp("主人公","I'm so sorry!");
    VoicePlay("I660800000_45_000");
    MsgDisp("Woman Customer","Excuse me!
The gas flap is still open!");
    MsgDisp("主人公","Ah...
I'm sorry!");
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,4,10,#1,0,0);
    VoicePlay("I660800000_08_000");
    MsgDisp("Shirahane","Leave it t'me.
Go close that gas flap, and then take care
of the bill!");
    MsgDisp("主人公","｛大地＊＊｝, thank you.
Sorry for the bother...");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800000_08_010");
    MsgDisp("Shirahane","Everyone makes mistakes in the beginnin'.
C'mon, hurry.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(8,0,30);
    SEWait();
    MsgDisp("主人公","(I messed up...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Alright, alright...");
    VoicePlay("I660800000_39_030");
    MsgDisp("Male Customer","Stop, stop!");
    MsgDisp("主人公","Huh?");
    VoicePlay("I660800000_39_040");
    MsgDisp("Male Customer","Geez... look behind properly, my car's
right there!");
    MsgDisp("主人公","I'm so sorry!");
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    ChMotion(8,3,1);
    VoicePlay("I660800000_08_020");
    MsgDisp("Shirahane","So sorry, bro!
She's still gettin' used to it, so please
understand!");
    VoicePlay("I660800000_39_050");
    MsgDisp("Male Customer","Dai-chan, I'm counting on you.");
    SEPlay("EV_SE_589",1);
    Wait(50,0);
    ChEye(8,4);
    ChMouth(8,2);
    ChMotion(8,0,1);
    VoicePlay("I660800000_08_030");
    MsgDisp("Shirahane","You okay?");
    MsgDisp("主人公","Yeah...
Sorry to bother you.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800000_08_040");
    MsgDisp("Shirahane","Don't rush and look around properly and
you'll be fine.
'Kay?");
    MsgDisp("主人公","(｛大地＊＊｝...
I'll have to be more careful from now on.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
