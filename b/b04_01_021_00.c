BGOpen("wf210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040102100_01_000");
MsgDisp("Kazama","It's not so bad,
walking around without a real purpose.");
MsgSel("It's nice to take a leisurely stroll.","Is that a jellyfish over there?","It feels like we have it all to ourselves…");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102100_01_010");
    MsgDisp("Kazama","Yeah. It would be hard to be able to spend
time together like this without mutual
trust, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040102100_01_020");
    MsgDisp("Kazama","Seems like it.
What, is that really that unusual?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040102100_01_030");
    MsgDisp("Kazama","Yeah,
but you have that aura that just attracts
people to you. We'll never be safe.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
