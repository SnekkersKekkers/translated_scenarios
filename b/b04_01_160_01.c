BGOpen("ne330",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040116001_01_000");
MsgDisp("Kazama","There are quite a lot of elderly
people here? Maybe the same age
as my Ojii-chan.");
MsgSel("Looks like there are games here that are popular with the elderly,","Maybe it's becasue they have stuff like Go and Shogi","Maybe your Grandpa is here too,｛風真＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040116001_01_010");
    MsgDisp("Kazama","Wow, that's not the image I have of
the elderly people I know.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040116001_01_020");
    MsgDisp("Kazama","My Grandpa regularly plays 
it on the veranda.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040116001_01_030");
    MsgDisp("Kazama","There is no way!");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
