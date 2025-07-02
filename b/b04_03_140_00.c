BGOpen("ne210",0);
ChLayout(1);
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040314000_03_000");
MsgDisp("Honda","It was an unknown experience.");
MsgSel("Haa, that was the best!","That was so-so, huh...","The sound was so loud,
 my ears are ringing...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040314000_03_010");
    MsgDisp("Honda","I see, this one was great huh...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040314000_03_020");
    MsgDisp("Honda","I see, this one was so-so huh...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040314000_03_030");
    MsgDisp("Honda","You too∋ Me too, I feel like the music is
still playing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
