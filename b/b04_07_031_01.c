BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040703101_07_000");
MsgDisp("Mikage","Fish are the ancestors of us mammals.
Let's learn something
from them today.");
MsgSel("Fish-senpai, it's a pleasure to meet you","They're living fossils huh?","But, fish eyes are scary");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoiceEVSPlay(7);
    VoicePlay("B040703101_07_010");
    MsgDisp("Mikage","｛主人公｝, nice greeting.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040703101_07_020");
    MsgDisp("Mikage","Yeah, sturgeon and 
coelacanth～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040703101_07_030");
    MsgDisp("Mikage","I kinda understand how you feel.
They have a cold look in their eyes.
...Kind of like our Vice-Principal?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
