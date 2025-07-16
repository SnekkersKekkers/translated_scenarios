BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603301_06_000");
MsgDisp("Himuro","Deep sea creatures have such weird shapes
huh?");
MsgSel("I think it's a bit scary...","Huh, doesn't it look like you, ｛氷室＊＊｝?","Maybe it's due to the water pressure?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040603301_06_010");
    MsgDisp("Himuro","Definitely. If I encountered one in the
ocean I'd be kinda...No, considerably
surprised.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040603301_06_020");
    MsgDisp("Himuro","If anything, I think it looks like you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,4);
    VoicePlay("B040603301_06_030");
    MsgDisp("Himuro","Excellent point.
I didn't expect that answer.
But I wouldn't say it's unlikely.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
