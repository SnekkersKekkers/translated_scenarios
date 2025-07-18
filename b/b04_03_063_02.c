BGOpen("wf620",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040306302_03_000");
MsgDisp("Honda","I know it's dangerous, but I want to walk
on the water's edge～");
MsgSel("｛本多＊＊｝, do your best!","Let's see who can attack!","Hey, if you get wet, you'll catch a cold▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040306302_03_010");
    MsgDisp("Honda","Got it, watch okayー?
...It's cold!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChSet(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040306302_03_020");
    MsgDisp("Honda","As I thought, you're the best! You're the
only girl who I could do this kind of
thing with! ...It's cold!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,2);
        ChEyeOpenLevel(3,8);
        VoicePlay("B040306302_03_030");
        MsgDisp("Honda","Well, that's true.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        SEPlay("EV_SE_541",0,0.5);
        ChEye(3,5);
        ChMouth(3,4);
        ChMotion(3,5);
        ChCheek(3,5);
        VoicePlay("B040306302_03_040");
        MsgDisp("Honda","Huh?
Why did I get a shock just now?");
        ChEye(3,0);
        ChCheek(3,0);
        MsgDisp("主人公","What's the matter?
It's dangerous, so come here.");
        SEWait();
        ChClose(3,0,20);
        SEPlay("EV_SE_550",0,0.5);
        MsgClose();
        ChLayout(0);
        ChOpen(3,255,1,0,3,#1,#1,0,0,0,20);
        SEWait();
        SEPlay("EV_SE_541");
        SEWait();
        VoicePlay("B040306302_03_050");
        MsgDisp("Honda","Say what you said just now again.");
        MsgDisp("主人公","Eh?
It's dangerous, so come here.");
        MsgClose();
        SEPlay("EV_SE_557",0,0.5);
        ChClose(3,0,20);
        MsgClose();
        ChLayout(1);
        ChOpen(3,255,2,0,4,#1,#1,0,0,0,30);
        SEWait();
        VoicePlay("B040306302_03_060");
        MsgDisp("Honda","Huh? It's nothing...I just got a shock
hearing your voice just now. Am I weird?");
        MsgDisp("主人公","I got it, let's go already.
If you get wet, you'll catch a cold▼");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,4);
        ChCheek(3,10);
        VoicePlay("B040306302_03_070");
        MsgDisp("Honda","It was this...
Did you use hypnosis or something?");
        MsgDisp("主人公","(｛本多＊＊｝ is a bit weird today?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
