BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040611100_06_000");
MsgDisp("Himuro","By the way, can you ice skate?");
MsgSel("Call me the princess on ice!","It's to the point I won't fall...","I was hoping you would teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,3);
        VoicePlay("B040611100_06_010");
        MsgDisp("Himuro","...Certainly, princess.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040611100_06_020");
        MsgDisp("Himuro","You're hesitant now but you still want to
be called princess?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040611100_06_030");
    MsgDisp("Himuro","Then, let's go slowly.
You'll fall if you hurry, so be careful.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040611100_06_040");
    MsgDisp("Himuro","Even though we came all the way here,
that's all you've got?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
