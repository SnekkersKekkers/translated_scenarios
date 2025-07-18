BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608302_06_000");
MsgDisp("Himuro","Hasn't it been intensely, continuously hot
here?");
MsgSel("I wonder if it's the effects of global warming?","Yeah, it's pretty harsh...","I'm alright even if it's hot!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("B040608302_06_010");
    MsgDisp("Himuro","The definition of global warming is vague
but, this climate is subtropical.
Maybe the climate is changing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040608302_06_020");
    MsgDisp("Himuro","I'm looking forward to autumn.
I don't want to see you exhausted.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040608302_06_030");
        MsgDisp("Himuro","It's gonna be painful if you get too
carried away.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChEyeOpenLevel(6,7);
        VoicePlay("B040608302_06_040");
        MsgDisp("Himuro","......");
        MsgDisp("主人公","? What's wrong?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040608302_06_050");
        MsgDisp("Himuro","Your face feels hot.");
        MsgDisp("主人公","Eh, really?
But it's alright——");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(6,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(6,253,0,0,0,#1,#1,0,0);
        MsgDisp("主人公","Wa∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040608302_06_060");
        MsgDisp("Himuro","...You're sweating quite a bit too.
Let's move to the shade.
You'd better hydrate properly.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608302_06_070");
        MsgDisp("Himuro","That's right, loosen the clothes around
your neck.");
        MsgDisp("主人公","Yeah...
Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040608302_06_080");
        MsgDisp("Himuro","Don't get so flustered?
This is so you don't get heat stroke.
You need to ventilate quickly.");
        MsgDisp("主人公","G-Got it...");
        MsgClose();
        SEPlay("EV_SE_544",0,0.5,0.05);
        ChClose(6,0,30);
        ChLayout(1);
        MsgClose();
        ChOpen(6,253,0,0,0,#1,#1,0,0);
        VoicePlay("B040608302_06_090");
        MsgDisp("Himuro","...I'm getting hot too.");
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
