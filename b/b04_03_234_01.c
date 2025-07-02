BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,2,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323401_03_000");
MsgDisp("Honda","Phew...
Looks like you went easy on me this time.");
MsgSel("I wanted it to spin faster...","It's most fun at this speed huh","Do you dislike tea cups?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(3,4);
    ChMouth(3,2);
    ChMotion(3,0);
    VoicePlay("B040323401_03_010");
    MsgDisp("Honda","Sorry,
can you tell me what you're 
trying to achieve?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040323401_03_020");
    MsgDisp("Honda","I don't think it'll ever get
to a point where I enjoy it.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040323401_03_030");
    MsgDisp("Honda","Ah, sorry, sorry! I don't dislike it. I
know that you like it. I'm sure I just
haven't tried hard enough yet.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
