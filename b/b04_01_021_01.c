BGOpen("wf210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040102101_01_000");
MsgDisp("Kazama","This place is so underrated.
The sea, the sandy beaches, even the brick
road.");
MsgSel("Yeah, I think it could be more popular too.","Do you think it's because of the name?","But I don't want it to get crowded.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102101_01_010");
    MsgDisp("Kazama","Exactly. Just like how I feel about
antiques, these things need proper
appreciation.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040102101_01_020");
    MsgDisp("Kazama","Not really, do you think it needs a better
name?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102101_01_030");
    MsgDisp("Kazama","I guess so. I wouldn't want to not be able
to wander around with you like this, just
talking about nothing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
