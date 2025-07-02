BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603100_06_000");
MsgDisp("Himuro","They've managed to gather so many fish
here.");
MsgSel("What's the name of that fish again?","The patterns of the tropical fish are so pretty▼","Ha∋ I feel something looking at me from behind the boulder...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040603100_06_010");
    MsgDisp("Himuro","Why don't you look it up before asking?
That way it sticks better.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040603100_06_020");
    MsgDisp("Himuro","It's vibrant without being showy.
Definitely one of nature's mysteries.
Shall we admire them a bit longer?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,0);
    VoicePlay("B040603100_06_030");
    MsgDisp("Himuro","Are you sure you're not just tired?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
