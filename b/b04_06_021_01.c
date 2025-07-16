BGOpen("wf210",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040602101_06_000");
MsgDisp("Himuro","There's very few people here.
So, listen to the sound of the waves...");
MsgSel("It's true, that''s the feeling of the sea","Ah... I can hear my stomach rumbling too","You're surprisingly a romantic huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602101_06_010");
    MsgDisp("Himuro","Could you give a bit more of a reaction?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("B040602101_06_020");
    MsgDisp("Himuro","Pfft... you mean you can hear it clearer
than the waves?
I'll treat you to something after this.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602101_06_030");
    MsgDisp("Himuro","That's offensive to say it's \"surprising\".");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
