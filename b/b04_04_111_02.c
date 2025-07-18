BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040411102_04_000");
MsgDisp("Nanatsumori","I hate the cold, but surprisingly I can
stand it at the skating rink.");
MsgSel("It's strangely exciting isn't it?","Why is that?","It's because the couples are all lovey dovey here▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040411102_04_010");
    MsgDisp("Nanatsumori","I know how you feel.
I remember playing on a frozen puddle in
the middle of winter.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040411102_04_020");
    MsgDisp("Nanatsumori","Ah...it really is cold.");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        VoicePlay("B040411102_04_030");
        MsgDisp("Nanatsumori","What's that?
Scary.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040411102_04_040");
        MsgDisp("Nanatsumori","Couple?");
        MsgDisp("主人公","Yeah.");
        ChEye(4,4);
        ChMotion(4,1,1);
        ChCheek(4,5);
        VoicePlay("B040411102_04_050");
        MsgDisp("Nanatsumori","Then, are we a couple?");
        MsgDisp("主人公","Eh?");
        ChMotion(4,0,1);
        VoicePlay("B040411102_04_060");
        MsgDisp("Nanatsumori","Is it not like that?");
        MsgDisp("主人公","That's...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("B040411102_04_070");
        MsgDisp("Nanatsumori","Ahー...
But, if you're still cold, I guess I was
wrong.");
        MsgDisp("主人公","...I'm not cold.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040411102_04_080");
        MsgDisp("Nanatsumori","You don't have to force yourself.");
        MsgDisp("主人公","I'm not.");
        ChEye(4,0);
        ChMouth(4,4);
        ChCheek(4,7);
        VoicePlay("B040411102_04_090");
        MsgDisp("Nanatsumori","...Really?");
        MsgDisp("主人公","Yeah.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,2,1);
        ChCheek(4,9);
        VoicePlay("B040411102_04_100");
        MsgDisp("Nanatsumori","...Crap.
Not only is it cold, I'm starting to get
hot.");
        MsgDisp("主人公","(Me too...)");
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
