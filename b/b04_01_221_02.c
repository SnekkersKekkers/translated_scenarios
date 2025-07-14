BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040122102_01_000");
MsgDisp("Kazama","There's a coin operated telescope over
there.");
MsgSel("Can you see all the way to Hanegasaki Beach?","My lord, let's take a look at how the people live!","There's that prank where it gets all black around your eyes.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040122102_01_010");
    MsgDisp("Kazama","Haha,
You really do like Hanegasaki beach.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040122102_01_020");
    MsgDisp("Kazama","Look, it's one rich.
Being a lord is tough.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040122102_01_030");
        MsgDisp("Kazama","Did you scheme something?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040122102_01_040");
        MsgDisp("Kazama","What's with that lead-up?
Then, you go first.");
        MsgDisp("主人公","Hey.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
        MsgClose();
        ScrFadeOut(0);
        ChClose(1);
        SEWait();
        SEPlay("EV_SE_501");
        SEWait();
        BGOpen("tr321",0);
        ScrFadeIn(0);
        MsgDisp("主人公","Amazing! Look, you can see the beautiful
sky and mountains");
        VoicePlay("B040122102_01_050");
        MsgDisp("Kazama","Oi, don't get so carried away");
        SEPlay("EV_SE_026",0,0.4);
        SEWait();
        MsgDisp("主人公","Eh∋ ｛風真＊＊｝! Something just flashed
just now∈");
        VoicePlay("B040122102_01_060");
        MsgDisp("Kazama","Got it, got it.
It's dangerous, so that'll be all.");
        MsgClose();
        ScrFadeOut(0);
        BGOpen("tr320",0);
        MsgClose();
        ChOpen(1,255,0,3,3,#1,#1,0,0);
        ScrFadeIn(0,30);
        ChMotion(1,3);
        VoicePlay("B040122102_01_070");
        MsgDisp("Kazama","Crap.
Your face.");
        MsgDisp("主人公","Eh?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040122102_01_080");
        MsgDisp("Kazama","You pressed your face too hard into it,
it's now red around your eyes.");
        MsgDisp("主人公","Eh, what should I do...");
        ChEyeOpenLevel(1,0);
        Wait(10,0);
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040122102_01_090");
        MsgDisp("Kazama","You don'have to do anything.
Just do your best at whatever, and be
yourself.");
        MsgDisp("主人公","(Even if you praise me...
I'm still worried about the area around my
eyes～!)");
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
