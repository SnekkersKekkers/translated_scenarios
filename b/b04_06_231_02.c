BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623102_06_000");
MsgDisp("Himuro","I wonder if they'll upgrade this soon?");
MsgSel("More than this would be impossible","Should we try putting in a request?","It's enough as is");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623102_06_010");
        MsgDisp("Himuro","...Right, there's no need to force
yourself to ride it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623102_06_020");
        MsgDisp("Himuro","Ehhh, is it that scary?");
        MsgDisp("主人公","Ugh...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623102_06_030");
        MsgDisp("Himuro","Could it be that you've been forcing
yourself to ride it until this point too?");
        MsgDisp("主人公","It's not like that but...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623102_06_040");
        MsgDisp("Himuro","But you feel like this is your limit now.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623102_06_050");
        MsgDisp("Himuro","...But, I'm here, after all.");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040623102_06_060");
        MsgDisp("Himuro","I mean, I'm the one next to you, right?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623102_06_070");
        MsgDisp("Himuro","If it's scary, I can hold onto your hand.
Knowing that we're in this together,
should be less scary... right?");
        MsgDisp("主人公","Yes, thank you.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623102_06_080");
        MsgDisp("Himuro","It's no problem.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,2);
        VoicePlay("B040623102_06_090");
        MsgDisp("Himuro","I still want a version upgrade after all.");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,4);
        VoicePlay("B040623102_06_100");
        MsgDisp("Himuro","I-It's nothing.
... Never mind.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040623102_06_110");
    MsgDisp("Himuro","It might be good to take action.
If there's a lot of demand, they might
come up with a plan to improve it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623102_06_120");
    MsgDisp("Himuro","Really?
You must like it quite a lot.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
