BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much!");
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,2,1,#1,#1,0,0);
    ChMotion(8,1,1);
    VoicePlay("I660800006_08_000");
    MsgDisp("Shirahane","Aah!
... They left!");
    MsgDisp("主人公","Hm?");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("I660800006_08_010");
    MsgDisp("Shirahane","I was making their new membership card
jus' now.");
    MsgDisp("主人公","Huh∋
W-What should we do...");
    ChEye(8,2);
    ChMouth(8,0);
    VoicePlay("I660800006_08_020");
    MsgDisp("Shirahane","There's no helping that they left.
I'll look 'em up and give 'em a call.");
    MsgDisp("主人公","I'm sorry...");
    ChEye(8,4);
    ChMotion(8,0,1);
    VoicePlay("I660800006_08_030");
    MsgDisp("Shirahane","It's rare seeing ya make a mistake like
that.
Be careful from now on, yeah?");
    MsgDisp("主人公","(I let my guard down...
I'll have to get it together...!)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_589");
    Wait(80,0);
    SEStop("EV_SE_589",3);
    MsgDisp("主人公","Thank you very much!");
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,2,1,#1,#1,0,0);
    ChMotion(8,1,1);
    VoicePlay("I660800006_08_040");
    MsgDisp("Shirahane","Aah!
... I didn't make it.");
    MsgDisp("主人公","Hm?");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800006_08_050");
    MsgDisp("Shirahane","This.
It's that customer's membership card.
I was makin' it just now.");
    MsgDisp("主人公","I didn't know...
I'm sorry.");
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,2,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800006_08_060");
    MsgDisp("Shirahane","Woulda helped if I had told ya, too.
Sorry.");
    MsgDisp("主人公","No, it's not your fault.
I would've noticed if I had looked over at
you, ｛大地＊＊｝...");
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800006_08_070");
    MsgDisp("Shirahane","At me... that's it!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800006_08_080");
    MsgDisp("Shirahane","Then from now on, you should jus' keep
making eye contact with me!
Yeah?");
    MsgDisp("主人公","(｛大地＊＊｝ seems happy...
I should pay attention to my surroundings
more carefully.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
