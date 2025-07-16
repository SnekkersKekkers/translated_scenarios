EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(6,33,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040606501_06_000");
MsgDisp("Himuro","Do you think we'll be able to see these
fireworks again next year?");
MsgSel("Yeah, let's see them together.","I'll be by myself, but I'll come watch it","Maybe we won't be able to see it...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606501_06_010");
    MsgDisp("Himuro","You mean you still plan on seeing me even
after you graduate?
... Well, that's fine.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040606501_06_020");
    MsgDisp("Himuro","What's with that.
How should I take that?");
    MsgDispSksp(1,6);
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
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040606501_06_030");
        MsgDisp("Himuro","Well, crowds are tiring after all.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        VoicePlay("B040606501_06_040");
        MsgDisp("Himuro","...Since you're graduating after all.");
        MsgDisp("主人公","That's right...");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040606501_06_050");
        MsgDisp("Himuro","...But, it's not like we have to stop
hanging out after you graduate.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,4,1);
        VoicePlay("B040606501_06_060");
        MsgDisp("Himuro","We'll both live in Habataki City, we can
at least still meet up.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040606501_06_070");
        MsgDisp("Himuro","That's why, even if you've graduated, I...
would still like to meet up.");
        MsgDisp("主人公","｛氷室＊＊｝......");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040606501_06_080");
        MsgDisp("Himuro","...Still, we should treat a promise for a
whole year later more lightly.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        VoicePlay("B040606501_06_090");
        MsgDisp("Himuro","But, I don't think my feelings will
change.");
        MsgDisp("主人公","Yeah!
Thank you.");
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
EnvAutoSet(1);
