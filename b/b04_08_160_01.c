BGOpen("ne330",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoiceEVSPlay(8);
VoicePlay("B040816001_08_000");
MsgDisp("Shirahane","｛主人公｝, shall we go against 
each other on a fighting game?");
MsgSel("I won't lose!","A fighting game is a little...","Could you teach me instead of competing?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040816001_08_010");
    MsgDisp("Shirahane","Alright!
My serious side will come out for
the first time in a while!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("B040816001_08_020");
    MsgDisp("Shirahane","Is that sorta thing no good?
Then, let's play another game.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,4);
    VoicePlay("B040816001_08_030");
    MsgDisp("Shirahane","That's fine, but.
Isn't it easy for a beginner?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
