BGOpen("wf400",1);
ChLayout(1);
ChOpen(1,253,0,2,2,0,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay","Today's event was awful");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040104400_01_000");
    MsgDisp("Kazama","It was good. I'm not sure what was so good
about it, though.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040104400_01_010");
    MsgDisp("Kazama","Well, we managed to see it through to the
end.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,4);
    VoicePlay("B040104400_01_020");
    MsgDisp("Kazama","It's enough that we were able to just
spend that time together.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
