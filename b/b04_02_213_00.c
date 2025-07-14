BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040221300_02_000");
MsgDisp("Sassa","Crap...
They're smelling me a lot. ");
MsgSel("I wonder if it'a  nice smell?","You're popular huh?","Maybe they think you're one of their own?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040221300_02_010");
    MsgDisp("Sassa","Come to think of it, I drank a protein
shake before I left the house...
Do you think they also like it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040221300_02_020");
    MsgDisp("Sassa","Amongst dogs and cats yeah.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040221300_02_030");
    MsgDisp("Sassa","Hey, I'm not a dog.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
