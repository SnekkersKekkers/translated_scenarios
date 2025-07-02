BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040211000_02_000");
MsgDisp("Sassa","Are you good at swimming?");
MsgSel("I've been dubbed the mermaid of Habataki city!","I want you teach me how to swim...","Can I bring a swim float?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040211000_02_010");
        MsgDisp("Sassa","Yeah, you seem mermaid-like.
Alright, I won't lose either!");
        MsgDispSksp(1,7);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040211000_02_020");
        MsgDisp("Sassa","You're not drowning are you?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040211000_02_030");
    MsgDisp("Sassa","It's fine.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040211000_02_040");
    MsgDisp("Sassa","Yeah, nice.
Let's play with the big one!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
