BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,10);
ScrFadeIn(0);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B040110100_01_000");
MsgDisp("Kazama","It's good to treasure our history like
Habataki City does.");
MsgSel("Habataki City's history is wonderful","That mask looks familiar to me...","It's like I'm experiencing the romance of ancient times.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040110100_01_010");
    MsgDisp("Kazama","Yeah, there's a lot of historical
documents and sites intact. The people
here really love their hometown.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040110100_01_020");
    MsgDisp("Kazama","... That airheaded response is just like
you. Besides, my ancestors appeared in
local history here in the medieval ages.");
    ChEyeOpenLevel(1,0);
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040110100_01_030");
    MsgDisp("Kazama","It's important to be more interested in
your local history.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
