BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040703100_07_000");
MsgDisp("Mikage","It's perfect for a class field trip, 
but it's dark and feels a bit oppressive.");
MsgSel("Are you scared of the dark?","Are you not good with aquariums?","Do you prefer the mountains over the ocean?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("B040703100_07_010");
    MsgDisp("Mikage","It's a matter of types.
I'm the type who grew up basking
in the sunlight.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,4);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040703100_07_020");
    MsgDisp("Mikage","I don't hate it.
But, aren't wide,
open spaces better?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040703100_07_030");
    MsgDisp("Mikage","Oh, you know me well.
I'm a man who has taken root in 
the earth and lives alongside vegetables.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
