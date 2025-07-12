ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ScrFadeIn(0);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B040101001_01_000");
MsgDisp("Kazama","Hey, what about this?
I think it's just perfect for you.");
MsgSel("You're right, I should buy it!","I'm not sure…","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040101001_01_010");
    MsgDisp("Kazama","You... You get way too swept up in
whatever's said. You need to use your own
judgement.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChMouth(1,2);
    ChEyeOpenLevel(1,#1);
    VoicePlay("B040101001_01_020");
    MsgDisp("Kazama","Don't 'I'm not sure' me.
If you want to say no,
say it loud and clear.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3,1);
    VoicePlay("B040101001_01_030");
    MsgDisp("Kazama","Haha, right?
But I'd like to see you wearing
it anyway.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
