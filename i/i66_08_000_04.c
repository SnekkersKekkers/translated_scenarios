BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","I finished cleaning the glass!");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    VoicePlay("I660800004_08_000");
    MsgDisp("Shirahane","We're all done refueling too.
Now, the bill......");
    SEPlay("EV_SE_589",1);
    SEWait();
    ChEye(8,5);
    ChMouth(8,5);
    ChMotion(8,1,1);
    VoicePlay("I660800004_08_010");
    MsgDisp("Shirahane","Woah∋");
    MsgDisp("主人公","Huh, what is it?");
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,0,1);
    VoicePlay("I660800004_08_020");
    MsgDisp("Shirahane","The windows were so clean,
I almost stuck my head in the car
thinking they were open.");
    MsgDisp("主人公","Ahaha!");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800004_08_030");
    MsgDisp("Shirahane","Amazin'......
Will ya teach me your techniques?");
    MsgDisp("主人公","(｛大地＊＊｝ praised me!
Let's keep doing our best!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","I finished cleaning the glass!");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    VoicePlay("I660800004_08_040");
    MsgDisp("Shirahane","We're all done refueling too.
Now, the bill......");
    SEPlay("EV_SE_589",1);
    SEWait();
    ChMotion(8,3,1);
    VoicePlay("I660800004_08_050");
    MsgDisp("Shirahane","Thank you very much!");
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800004_08_060");
    MsgDisp("Shirahane","......Hey.
Is there some new window cleaner fluid?");
    MsgDisp("主人公","Hm?　It's the usual one.
What's up?");
    ChEye(8,3);
    VoicePlay("I660800004_08_070");
    MsgDisp("Shirahane","It was shinin', or rather, it was
so clean ya couldn't even see the glass.");
    ChEye(8,0);
    ChMouth(8,2);
    ChMotion(8,0,1);
    MsgDisp("主人公","Well, it's difficult for our
customers to see out the window if it's
dirty. So we should clean it well, right?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800004_08_080");
    MsgDisp("Shirahane","You're a real master of service.
Good!");
    MsgDisp("主人公","(Yay!
｛大地＊＊｝ praised me!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
