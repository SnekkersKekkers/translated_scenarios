BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEye(1,3);
ChMotion(1,3);
VoicePlay("B040123600_01_000");
MsgDisp("Kazama","Wow, that's impressive.
We're seeing Habataki Land in 
all of it's glory.");
MsgSel("The skull bear is sparkling","That fish like person is dancing","Yeah, there's so many lights!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,2);
    VoicePlay("B040123600_01_010");
    MsgDisp("Kazama","At first I thought it was just 
a weird bear, but now that I've
gotten used to it, it's... not bad?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    VoicePlay("B040123600_01_020");
    MsgDisp("Kazama","So it's bottom half is human?
The opposite to a mermaid.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040123600_01_030");
    MsgDisp("Kazama","Yeah, I can see your
face so well.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
