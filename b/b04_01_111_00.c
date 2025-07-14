BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040111100_01_000");
MsgDisp("Kazama","Ohh, this looks perfect.
Time to put your skills to the test, huh?");
MsgSel("Call me the Princess of Ice!","As long as I don't fall down...","Will you please teach me...?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEyeOpenLevel(1,0);
        Wait(10,0);
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        ChCheek(1,7);
        VoicePlay("B040111100_01_010");
        MsgDisp("Kazama","The Princess of Ice...
Uh-huh.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111100_01_020");
        MsgDisp("Kazama","Hey, Miss Princess of Ice...
Feeling satisfied?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040111100_01_030");
    MsgDisp("Kazama","That's not like you.
I expected to see you put up more of a
struggle than that.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040111100_01_040");
    MsgDisp("Kazama","Starting off appears OK!
We can practice together.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
