BGOpen("ne330",0);
ChLayout(1);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040116000_01_000");
MsgDisp("Kazama","That's some loud noise.
What should we do here?");
MsgSel("Let's take on the medal game!","Shall we try the quiz game?","Shall we get our compatibility read?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040116000_01_010");
    MsgDisp("Kazama","Got it, got it.
Let's try it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,0);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040116000_01_020");
    MsgDisp("Kazama","A quiz, here?
Can you even hear the questions?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040116000_01_030");
    MsgDisp("Kazama","ＯＫ!
Let's see what this game can tell about
us?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
