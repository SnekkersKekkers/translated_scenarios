BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("B040105101_01_000");
MsgDisp("Kazama","｛主人公｝. You're already looking
sleepy, you sure you'll be alright?");
MsgSel("I'm alright, I'm in perfect shape","You look like it too","My face is always like this!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040105101_01_010");
    MsgDisp("Kazama","You are the only person who talks about
getting in shape when it comes to the
planetarium.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040105101_01_020");
    MsgDisp("Kazama","Hey. Don't group me in with you. I don't
mind coming here together with you, but...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChMotion(1,3);
    Wait(16,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040105101_01_030");
    MsgDisp("Kazama","Haha, my bad.
As long as it's your face, I don't mind if
you're looking sleepy, or energetic.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
