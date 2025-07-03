BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321300_03_000");
MsgDisp("Honda","Hmm, 
Maybe I'm a cat after all?");
MsgSel("Yeah,｛本多＊＊｝ is a bit cat-like?","Eh, doggies are cute too?","Shall we stay here forever?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040321300_03_010");
    MsgDisp("Honda","Ah, no, no, that's not it.
There's preferences for either 
cats or dogs right? I'm a cat person.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,3);
    VoicePlay("B040321300_03_020");
    MsgDisp("Honda","That's right～ I know that but, I'm drawn
in by cats more. Maybe it's instilled in
my genetics.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040321300_03_030");
    MsgDisp("Honda","Okay, let's observe cats 
and dogs thoroughly today");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
