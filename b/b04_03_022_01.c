BGOpen("wf221",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B040302201_03_000");
MsgDisp("Honda","There are many types of seabirds, huh?
Look!");
MsgSel("Are you interested in birds?","They might sell bird feed at the store.","That's a...  gull?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040302201_03_010");
    MsgDisp("Honda","Yeah. I like waterfowl on the coast too,
but... when you're on a boat- look!
There are the seabirds!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040302201_03_020");
    MsgDisp("Honda","That's it! I'll buy some, so wait there
for a sec!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("B040302201_03_030");
    MsgDisp("Honda","Right, maybe a glaucous gull?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
