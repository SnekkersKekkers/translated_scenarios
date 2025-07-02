BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,4);
VoicePlay("B040106100_01_000");
MsgDisp("Kazama","Alright, what should we do?");
MsgSel("Want to have a race to the coast?","Let's eat at the beach house!","Let's look for beautiful seashells");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(1,1);
    ChMouth(1,1);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040106100_01_010");
    MsgDisp("Kazama","Why.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040106100_01_020");
    MsgDisp("Kazama","Sounds good to me.
Better than being shoved in the ocean
like sardines in a can.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106100_01_030");
    MsgDisp("Kazama","Nice one, I agree.
We can look for beach glass and
beautiful stones, too.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
