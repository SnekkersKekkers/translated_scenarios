BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623202_06_000");
MsgDisp("Himuro","Haven't you noticed?
For guys, you have to overcome a high
hurdle to ride on here.");
MsgSel("I'm sure there are guys that like it? ","But I want to ride it with ｛氷室＊＊｝.","I haven't noticed at all.");
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
        ChMotion(6,0);
        VoicePlay("B040623202_06_010");
        MsgDisp("Himuro","Okay, correction.
The hurdle is too great for me.
Is that okay?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623202_06_020");
        MsgDisp("Himuro","Well, it depends on the person.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040623202_06_030");
        MsgDisp("Himuro","...By the way, have you gone on here with
other guys?");
        MsgDisp("主人公","Are you curious?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623202_06_040");
        MsgDisp("Himuro","That...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040623202_06_050");
        MsgDisp("Himuro","——Not particularly.");
        MsgDisp("主人公","Hmm?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623202_06_060");
        MsgDisp("Himuro","..................");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623202_06_070");
        MsgDisp("Himuro","I'll go with you 
next time after all.");
        MsgDisp("主人公","Eh?");
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        ChCheek(6,0);
        VoicePlay("B040623202_06_080");
        MsgDisp("Himuro","Whether it's the ferris wheel or whatever
you like.");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,4);
        VoicePlay("B040623202_06_090");
        MsgDisp("Himuro","Saying that, only invite me.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623202_06_100");
        MsgDisp("Himuro","Okay?");
        MsgDisp("主人公","O-Okay.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040623202_06_110");
        MsgDisp("Himuro","Alright.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040623202_06_120");
    MsgDisp("Himuro","...Understood. If that's what you say,
I'll come along. That's fine I guess.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623202_06_130");
    MsgDisp("Himuro","You should pay more attention to your
surroundings.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
