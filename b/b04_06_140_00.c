BGOpen("ne210",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040614000_06_000");
MsgDisp("Himuro","Haa... there's an ambiance at a live show.");
MsgSel("Haa, that was wonderful!","That was fun huh?","The sound was so loud that my ears are ringing...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040614000_06_010");
    MsgDisp("Himuro","We shared the same sentiments?
I feel like my heart is even warmer.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040614000_06_020");
    MsgDisp("Himuro","I guess it doesn't 
resonate with you...huh?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040614000_06_030");
    MsgDisp("Himuro","Yeah, maybe that's how it is
if you're not used to it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
