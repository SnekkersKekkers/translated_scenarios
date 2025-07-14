BGOpen("wf210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040202100_02_000");
MsgDisp("Sassa","Walking along the brick road like this
feels nice.");
MsgSel("It's nice to take a leisurely stroll.","Is that a jellyfish over there?","It feels like we have it all to ourselves......");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040202100_02_010");
    MsgDisp("Sassa","I guess so.
It's kind of hard to do it leisurely,
though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("B040202100_02_020");
    MsgDisp("Sassa","Jellyfish? There are a lot of those
floating around there I think. Look.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040202100_02_030");
    MsgDisp("Sassa","Yeah. Even if we run as fast as we can it
won't cause any trouble.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
