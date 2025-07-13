BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B040811102_08_000");
MsgDisp("Shirahane","Skating around the rink makes me 
feel like I'm running around on the 
track in the school yard.");
MsgSel("The rink and the schoolyard is quite different...","I don't get that at all.","Shall we try running on the ground next time?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040811102_08_010");
    MsgDisp("Shirahane","Hmm, it's all about feeling...
do you not get it?");
    MsgDateResultDisp();
    break ;
    case 1:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040811102_08_020");
        MsgDisp("Shirahane","Sorry.
I said something weird.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("B040811102_08_030");
        MsgDisp("Shirahane","Ah... forgive me.
For suddenly giving this kinda analogy.");
        MsgDisp("主人公","No, it's fine.");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,4,1);
        VoicePlay("B040811102_08_040");
        MsgDisp("Shirahane","This won't do.
When I'm with you, 
I get strangely worked up.");
        MsgDisp("主人公","Hehe, is that so?");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("B040811102_08_050");
        MsgDisp("Shirahane","Yeah.");
        ChEye(8,2);
        ChMouth(8,0);
        VoicePlay("B040811102_08_060");
        MsgDisp("Shirahane","That's why I feel jealous
of the boys at Haba High.");
        ChMotion(8,2,1);
        VoicePlay("B040811102_08_070");
        MsgDisp("Shirahane","I've been thinking recently; if I had went
to Haba High, our relationship would've
been completely different by now.");
        MsgDisp("主人公","｛大地＊＊｝......");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,0,1);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040811102_08_080");
        MsgDisp("Shirahane","...To think!
I said something weird again!");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoicePlay("B040811102_08_090");
        MsgDisp("Shirahane","Come on, let's skate around more!
Give me your hand!");
        MsgClose();
        SEPlay("EV_SE_760");
        SEWait();
        ChClose(8,0,30);
        SEPlay("EV_SE_559");
        ScrQuake(0);
        MsgDisp("主人公","Eh...waah～!");
        MsgClose();
        ScrFadeOut(0);
        ChOpen(8,253,0,0,0,#1,#1,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040811102_08_100");
    MsgDisp("Shirahane","You're good at playing along!
If we ran together, we might be able
to set a new record!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
