BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,2);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040603201_06_000");
MsgDisp("Himuro","It feels just like a date spot.
I feel uneasy.");
MsgSel("I wonder if wer're out of place?","Shall we hold hands? It might help you calm down?","Why...?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,0);
    VoicePlay("B040603201_06_010");
    MsgDisp("Himuro","...Not really, I don't think we're out of
place.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,0);
    VoicePlay("B040603201_06_020");
    MsgDisp("Himuro","Ha? Actually I think that'll give the
opposite effect.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040603201_06_030");
    MsgDisp("Himuro","It doesn't seem like you'll understand
even if I explain it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
