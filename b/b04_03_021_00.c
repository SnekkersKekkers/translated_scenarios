BGOpen("wf210",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040302100_03_000");
MsgDisp("Honda","There's not a lot of people out today.");
MsgSel("It's nice to take a leisurely stroll.","Is that a jellyfish over there?","No one's around, it's like we have the place to ourselves.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,2);
    ChMotion(3,2);
    ChEyeOpenLevel(3,7);
    VoicePlay("B040302100_03_010");
    MsgDisp("Honda","Leisurely, huh?
I'm not really good at that...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,1);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("B040302100_03_020");
    MsgDisp("Honda","That's a plastic bag.
When those end up in the sea, sea turtles
might mistakenly ingest them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040302100_03_030");
    MsgDisp("Honda","Mm-hmm. Shall we both look out for the
charm of this place that others might have
overlooked?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
