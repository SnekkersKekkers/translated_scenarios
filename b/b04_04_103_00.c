BGOpen("fp430",0);
BGMPlay("BGM_PLACE_MUSEUM_MIHARA",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040410300_04_000");
MsgDisp("Nanatsumori","Take Hazuki Kei for example.
The alumni of our school are incredible.");
MsgSel("I kinda don't get their tastes...","It's｛七ツ森＊｝'s turn next'","I can really understand their thoughts!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B040410300_04_010");
    MsgDisp("Nanatsumori","If you understod this 
trichromatic world, I's like to hear 
lots more about it...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B040410300_04_020");
    MsgDisp("Nanatsumori","Me? 
Ahh, you mean Ｎａｎａ.
We're on different playing fields, 
but I'd like to be aware of that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    ScrFadeIn(0);
    VoicePlay("B040410300_04_030");
    MsgDisp("Nanatsumori","Eh, seriously?
Tell me what this chaos is
trying to convey to us!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
